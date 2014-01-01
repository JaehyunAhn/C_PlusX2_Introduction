#include <iostream>

class Shape {
	public:
		virtual void draw() = 0;
	private:
		int original;
};

class Circle : public Shape {
	public:
		Circle (int a, int b) {
			std::cout << a << std::endl;
		}
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
