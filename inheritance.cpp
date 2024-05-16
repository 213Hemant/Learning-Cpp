#include<iostream>
using namespace std;

// Base class
class shape{
    public:
    void setWidth(int w){
        this->width = w;
    }
    void setHeight(int h){
        this->height = h;
    }
    protected:
    int width;
    int height;
    };

// derived class
class Rectangle: public shape{
    public: 
    int getArea(){
        return width*height;
    }
};

int main()
{
    Rectangle r1;
    r1.setHeight(11);
    r1.setWidth(12);
    cout<<"The area of the rectangle is "<<r1.getArea()<<endl;
    return 0;
}