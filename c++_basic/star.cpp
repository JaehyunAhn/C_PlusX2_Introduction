#include <iostream>

using namespace std;

class Unit {
	public:
		Unit(){
			std::cout << "called!" << std::endl;
		}
		virtual void move () = 0;
};

class Hydra : public Unit {
	public:
		void move () {
			std::cout << "moved!" << std::endl;
		}
};

int main() {

	Unit *pUnit = new Hydra;
	pUnit->move();
	return 0;
}
