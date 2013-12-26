#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TRUE 1
#define FALSE 0

// define data
typedef struct view_struct {
	char data[100];
} View;

// define pointer of function: *function name (parameter)
typedef void (*Renderer) (View current_view);

// define class
typedef struct render_struct {
	Renderer render_function;
} Render;

// define function
void Renderer_print (View current_view) {
	printf("print\n");
}

void Renderer_redraw (View current_view) {
	printf("redraw\n");
}

void Renderer_keydown (View current_view) {
	printf("keydown\n");
}

void Renderer_mousedown (View current_view) {
	printf("mouse down\n");
}

int main() {
	char new_event;
	int status = TRUE;

	// define class malloc
	Render *print_view		= (Render *) malloc (sizeof(Render));
	Render *redraw_view		= (Render *) malloc (sizeof(Render));
	Render *keydown_view	= (Render *) malloc (sizeof(Render));
	Render *moused_view		= (Render *) malloc (sizeof(Render));

	// assign function
	print_view->render_function = Renderer_print;
	redraw_view->render_function = Renderer_redraw;
	keydown_view->render_function = Renderer_keydown;
	moused_view->render_function = Renderer_mousedown;

	View my_data_window;

	/* while - switch : call function */
	while(status == TRUE) {
		new_event = getchar();
		switch(new_event) {
			case 'q':
				printf("quit\n");
				status = FALSE;
				break;
			case 'p':
				print_view->render_function(my_data_window);
				break;
			case 'r':
				redraw_view->render_function(my_data_window);
				break;
			case 'k':
				keydown_view->render_function(my_data_window);
				break;
			case 'm':
				moused_view->render_function(my_data_window);
				break;
			case '\n':
				break; // jump over ENTER
			default:
				printf("wrong command! please type: "
						"q, p, r, k, m\n");
				break;
		}
	}
	return 0;
}
