#include <iostream>
class Shape
{
public:
    void setWidth(int w)
    {
        width = w;
    }
    void setHeight(int h) //Base or Parents class
    {
        height = h;
    }

protected:
    int width, height;
};

class Rectangle : public Shape //inheriting the base class in the derived class
{
public:
    int getArea()
    {
        return (width * height); //Derived or child class
    }
};

int main()
{
    Rectangle Rect;    //Creating an Object
    Rect.setWidth(8);  //Accessing the method in derived class
    Rect.setHeight(6); //Accessing the method in derived class
    std::cout << "Get the Rectangle area:" << Rect.getArea() << std::endl;
    return EXIT_SUCCESS;
}
