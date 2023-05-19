#include "../../internal/application.h"

class Point
{
private:
	int x;
	int y;
public:
	Point() = default;
	Point(int x, int y) : x(x), y(y) {}
	int getX()
	{
		return x;
	}
	int getY()
	{
		return y;
	}
	void setX(int x)
	{
		this->x = x;
	}
	void setY(int y)
	{
		this->y = y;
	}
	void print()
	{
		cout << "[x: " << x << ", y: " << y << "]" << endl;
	}
	~Point() = default;
	friend Point operator+(const Point& point1, const Point& point2);
	friend Point operator-(const Point& point1, const Point& point2);
	friend Point operator*(const Point& point1, const Point& point2);
	friend Point operator/(const Point& point1, const Point& point2);

	friend bool operator==(const Point& point1, const Point& point2);
	friend bool operator!=(const Point& point1, const Point& point2);
	friend bool operator>(const Point& point1, const Point& point2);
	friend bool operator<(const Point& point1, const Point& point2);
	friend bool operator>=(const Point& point1, const Point& point2);
	friend bool operator<=(const Point& point1, const Point& point2);
	friend bool operator&&(const Point& point1, const Point& point2);
	friend bool operator||(const Point& point1, const Point& point2);
	friend bool operator!(const Point& point1, const Point& point2);
	friend bool operator=(const Point& point1, const Point& point2);
	friend bool operator+=(const Point& point1, const Point& point2);
	friend bool operator-=(const Point& point1, const Point& point2);
	friend bool operator*=(const Point& point1, const Point& point2);
	friend bool operator/=(const Point& point1, const Point& point2);
	friend bool operator%=(const Point& point1, const Point& point2);
	friend void operator()();
	friend int& operator[](int index);
	friend int& operator->(const Point& point1, const Point& point2);
	friend void* operator new(size_t size);
	friend void operator delete(void* ptr);
	friend operator sizeof(const Point& point1, const Point& point2);

	Point& operator++();
	Point& operator--();
	const Point operator++(int);
	const Point operator--(int);

	friend ostream& operator<< (ostream& output, const Point& point);
	friend istream& operator>> (istream& input, Point& point);
};