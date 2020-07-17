#include "rectangle.h"

Rectangle::Rectangle(int x, int y, int w, int h)
: Shape(x, y), width_(w), heigh_(h)
{

}

double Rectangle::area() const
{
	return width_ * height_;
}
