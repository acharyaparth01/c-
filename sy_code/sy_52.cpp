#include<iostream.h>
#include<conio.h>

class Test
{
    int x;

public:
    Test(int a)
    {
        x=a;
    }

    Test(Test &t)
    {
        x=t.x;
    }

    void show()
    {
        cout<<"Value = "<<x;
    }
};

void main()
{
    clrscr();

    Test t1(10);
    Test t2(t1);

    t2.show();

    getch();
}
//Value = 10

