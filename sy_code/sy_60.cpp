#include<iostream.h>
#include<conio.h>

class Base
{
public:
    virtual void show()
    {
        cout<<"Base Class";
    }
};

class Derived:public Base
{
public:
    void show()
    {
        cout<<"Derived Class";
    }
};

void main()
{
    clrscr();

    Base *p;
    Derived d;

    p=&d;
    p->show();

    getch();
}
//Derived Class
