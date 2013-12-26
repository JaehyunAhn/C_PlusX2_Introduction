#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct view_struct {
	char data[100]; // real thing would have something useful
} View;

/* function pointer type */
typedef void (*Renderer) (View current_view);

/* Define class */
typedef struct render_struct {
	Renderer render_function; // Renderer type pointer
} Render;

/* Define function */
void Renderer_print (View current_view) {
	printf("printing\n");
	printf("current = %s\n",current_view.data);
}

void Renderer_window (View current_view) {
	printf("redraw\n");
}


/* Main function */
int main () {
	Render *print_view	= (Render *) malloc (sizeof(Render));
	Render *window_view	= (Render *) malloc (sizeof(Render));
	View with_a_room;
	strcpy(with_a_room.data,"Hello world!");

	print_view->render_function = Renderer_print; // assign function 1
	window_view->render_function = Renderer_window; // assign function 2
	print_view->render_function(with_a_room);
	return 0;
}
