// Shapes.inl

int Shape::count = 0;

inline int Shape::get_count () {
	return count;
}

inline Shape::Shape (int new_origin) {
	count++;
}

inline Shape::~Shape () {
	count--;
}

// Circle

/* IMPORTANT
   * Explict inheritance needed
   * Advice URL : http://msdn.microsoft.com/en-us/library/38tx22fy.aspx
   * Inherit original constructor
   */
inline Circle::Circle(int new_origin, int new_radius) : Shape(new_origin) {
	radius = new_radius;
	area = 3.14*radius*radius;
}

inline Circle::~Circle() {
}

inline int Circle::get_radius () {
	return radius;
}

inline float Circle::get_area () {
	return area;
}

inline void Circle::put_radius (int new_radius) {
	radius = new_radius;
	area = 3.14*radius*radius;
}
