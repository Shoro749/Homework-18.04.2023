#include "../models/Point.h"

Point operator +(const Point& point1, const Point& point2)
{
	return Point(point1.x + point2.x, point1.y + point2.y);
}

Point operator -(const Point& point1, const Point& point2)
{
	return Point(point1.x - point2.x, point1.y - point2.y);
}

Point operator *(const Point& point1, const Point& point2)
{
	return Point(point1.x * point2.x, point1.y * point2.y);
}

Point operator /(const Point& point1, const Point& point2)
{
	if (point1.x == 0 || point2.x == 0)
	{
		throw "Division by zero";
	}
	return Point(point1.x / point2.x, point1.y / point2.y);
}

Point& Point::operator++()
{
	++x; ++y; return *this;
}

Point& Point::operator--()
{
	--x; --y; return *this;
}

const Point Point::operator++(int)
{
	Point point{ x, y };
	++(*this);
	return point;
}

const Point Point::operator--(int)
{
	Point point{ x, y };
	--(*this);
	return point;
}

bool operator==(const Point& point1, const Point& point2) {
	return point1.x == point2.x && point1.y == point2.y;
}

bool operator!=(const Point& point1, const Point& point2) {
	return !(point1 == point2);
}

bool operator>(const Point& point1, const Point& point2) {
	return point1.x > point2.x && point1.y > point2.y;
}

bool operator<(const Point& point1, const Point& point2) {
	return point1.x < point2.x && point1.y < point2.y;
}

bool operator>=(const Point& point1, const Point& point2) {
	return point1.x >= point2.x && point1.y >= point2.y;
}
bool operator<=(const Point& point1, const Point& point2) {
	return point1.x <= point2.x && point1.y <= point2.y;
}

ostream& operator<< (ostream& output, const Point& point) {
	output << "[" << point.x << " : " << point.y << "]";
	return output;
}

istream& operator>> (istream& input, Point& point) {
	cout << "Enter x: "; input >> point.x;
	cout << "Enter y: "; input >> point.y;
	return input;
}

bool operator&&(const Point& point1, const Point& point2) {
	return point1.x && point2.x && point1.y && point2.y;
}

bool operator||(const Point& point1, const Point& point2) {
	return point1.x || point2.x && point1.y || point2.y;
}

bool operator!(const Point& point1, const Point& point2) {
	return point1.x ! point2.x && point1.y ! point2.y;
}

bool operator=(const Point& point1, const Point& point2) {
	return point1.x = point2.x && point1.y = point2.y;
}

bool operator+=(const Point& point1, const Point& point2) {
	return point1.x += point2.x && point1.y += point2.y;
}

bool operator-=(const Point& point1, const Point& point2) {
	return point1.x -= point2.x && point1.y -= point2.y;
}

bool operator*=(const Point& point1, const Point& point2) {
	return point1.x *= point2.x && point1.y *= point2.y;
}

bool operator/=(const Point& point1, const Point& point2) {
	return point1.x /= point2.x && point1.y /= point2.y;
}

bool operator%=(const Point& point1, const Point& point2) {
	return point1.x %= point2.x && point1.y %= point2.y;
}

void operator()() {
	cout << "Function!" << endl;
}

int& operator[](int index) {
	if (index == 0) {
		return x;
	}
	else if (index == 1) {
		return y;
	}
	else {
		throw std::out_of_range("Invalid index");
	}
}

int& operator->(const Point& point1, const Point& point2){
	return this->point1.x;
	return this->point1.y;
	return this->point2.x;
	return this->point2.y;
}

void* operator new(size_t size) {
	std::cout << "Custom new operator called. Size: " << size << std::endl;
	void* memory = malloc(size);
	return memory;
}

void operator delete(void* ptr) {
	std::cout << "Custom delete operator called." << std::endl;
	free(ptr);
}

operator sizeof(const Point& point1, const Point& point2)
{
	return sizeof(point1);
	return sizeof(point2);
}