#include<iostream.h>
#include<conio.h>

class Test
{
    int x;

public:
    Test()
    {
        x=10;
    }

    friend void show(Test);
};

void show(Test t)
{
    cout<<"Value = "<<t.x;
}

void main()
{
    clrscr();

    Test t;
    show(t);

    getch();
}
//Value = 10
