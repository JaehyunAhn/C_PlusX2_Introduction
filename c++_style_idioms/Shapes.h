// Shapes.h

#ifndef shapes_h
#define shapes_h

class Shape {
	public:
		Shape (int new_origin);
		~Shape();
		static int get_count ();
	private:
		int origin;
		static int count;
};


class Circle : public Shape {
	public:
		Circle (int new_origin, int new_radius);
		~Circle();
		int get_radius ();
		float get_area ();
		void put_radius (int new_radius);
	private:
		int radius;
		float area;
};

#include "Shapes.inl"

#endif /* Shapes.h */
