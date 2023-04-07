#pragma once
#include <cmath>
class Quadrilateral {
protected:
    double side1, side2, side3, side4;
public:
    Quadrilateral(double s1, double s2, double s3, double s4) : side1(s1), side2(s2), side3(s3), side4(s4) {}
    virtual double area() = 0;
    virtual double perimeter() = 0;
};

class Trapezoid : public Quadrilateral {
protected:
    double height;
public:
    Trapezoid(double s1, double s2, double s3, double s4, double h) : Quadrilateral(s1, s2, s3, s4), height(h) {}
    double area() override {
        return (side1 + side2) / 2 * height;
    }
    double perimeter() override {
        return side1 + side2 + side3 + side4;
    }
};

class Parallelogram : public Trapezoid {
public:
    Parallelogram(double s1, double s2, double h) : Trapezoid(s1, s2, s1, s2, h) {}
    double area() override {
        return side1 * height;
    }
};

