#ifndef SHAPE_H
#define SHAPE_H

class Shape {					// 추상 클래스 Abstract Base Class(ABC)
protected:
	int x_;
	int y_;
	
public:
	Shape(int x, int y);
	virtual ~Shape() { }
	
	void move(int offsetX, int offsetY);
	virtual double area() const = 0;		// 순수가상함수 pure virtual function
	
};

#endif
