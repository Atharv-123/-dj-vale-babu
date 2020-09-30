//Name :- Atharv Sanjy Udawant
//Roll No. :-109
//B3 Batch

#include <iostream>
using namespace std;

class Polygon {
  protected:
    int width, height;
  public:
    void set_values (int a, int b)
      { width=a; height=b; }
    virtual int area (void) =0;
};

class Rectangle: public Polygon {
  public:
    int area (void)
      { return (width * height); }
};

class Triangle: public Polygon {
  public:
    int area (void)
      { return (width * height / 2); }
};

int main () {
  Rectangle rect;
  Triangle trgl;
  Polygon * ppoly1 = &rect;
  Polygon * ppoly2 = &trgl;
  ppoly1->set_values (4,5);
  ppoly2->set_values (4,5);
  cout<<"preforming Area Using Polymorphism"<<'\n';
  cout<<"Area of first poly"<<'\n';
  cout << ppoly1->area() << '\n';
  cout<<"Area of second poly"<<'\n';
  cout << ppoly2->area() << '\n';
  
  return 0;
}
/*
preforming Area Using Polymorphism
Area of first poly
20
Area of second poly
10

--------------------------------
Process exited after 0.2964 seconds with return value 0
Press any key to continue . . .*/
