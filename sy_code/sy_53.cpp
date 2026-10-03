#include<iostream.h>
#include<conio.h>

class Number
{
    int x;

public:
    Number(int a=0)
    {
        x=a;
    }

    Number operator+(Number n)
    {
        return Number(x+n.x);
    }

    void show()
    {
        cout<<"Sum = "<<x;
    }
};

void main()
{
    clrscr();

    Number a(10),b(20),c;

    c=a+b;
    c.show();

    getch();
}
//Sum = 30
