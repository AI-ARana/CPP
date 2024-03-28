/*Create a hierarchy of shapes (e.g., Circle, Rectangle, Triangle) 
where each shape has a method to calculate its area. 
Use polymorphism to allow a collection of shapes to be treated uniformly,
 regardless of their specific type.*/
 #include <iostream>

class Shape {
public:
    virtual double area() const = 0; // Pure virtual function
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() const override {
        return 3.14159 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() const override {
        return width * height;
    }
};

// Similarly, define Triangle class

int main() {
    Circle c(5);
    Rectangle r(4, 6);
    // Create a collection of shapes
    Shape* shapes[] = {&c, &r};
    for (Shape* shape : shapes) {
        std::cout << "Area: " << shape->area() << std::endl;
    }
    return 0;
}
