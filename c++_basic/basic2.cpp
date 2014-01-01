#include <iostream>

class Shape {
	public:
		Shape (int origin);
		~Shape ();
		virtual void draw() = 0;
	private:
		int original;
};

class Circle : public Shape {
	public:
		Circle (int origin, int radius);
		~Circle();
		void draw () {
			std::cout << "drawed!" << std::endl;
		}
	private:
		int rad, area;
};


int main ()
{
	Circle letter(0, 100);
	return 0;
}
