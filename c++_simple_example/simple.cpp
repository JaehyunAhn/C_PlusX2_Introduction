#include <iostream>
#include <string.h>

class View {
	public:
		View (const char new_name[]);
		~View ();
	private:
		char name[100];
};

class Render {
	public:
		virtual void draw (View *to_draw) = 0;
}; // draw : abstract class

/* Print & Update : Render subclasses */
class Print : public Render {
	public:
		virtual void draw (View *to_draw);
};

class Update : public Render {
	public:
		virtual void draw (View *to_draw);
};

/* Print & Update : construct subclasses */
void Print::draw (View *to_draw) {
	std::cout << "Print" << std::endl;
}

void Update::draw (View *to_draw) {
	std::cout << "Update" << std::endl;
};

/* View function construct */
View::View (const char new_name[]) {
	// name : View class, new_name : function
	strncpy(name, new_name, sizeof(name)-1);
}

int main () {
	/* Concept of Polymorphism  
	 *  Question link: http://goo.gl/Tlgr3D
	 */

	View *window = new View ("window");
	Render *renderer; // why Render assign subclass and point it to work?
	renderer = new Print;
	renderer->draw (window); // this renderer works like Print function. why?

	//what are the difference between up and down?
	Print *a;
	a = new Print;
	a->draw (window);

	delete a;

	return 0;
}
