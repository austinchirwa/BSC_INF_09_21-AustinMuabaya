#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"

int main() {
    Rectangle rect;
    Triangle trgl;
    rect.SetValues(4, 5);
    trgl.SetValues(4, 5);
    std::cout << "Rectangle Area: " << rect.Area() << '\n';
    std::cout << "Triangle Area: " << trgl.Area() << '\n';
    return 0;
}