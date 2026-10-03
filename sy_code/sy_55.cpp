#include<iostream.h>
#include<conio.h>

class Test
{
    static int count;

public:
    Test()
    {
        count++;
    }

    static void show()
    {
        cout<<"Objects = "<<count;
    }
};

int Test::count=0;

void main()
{
    clrscr();

    Test a,b,c;

    Test::show();

    getch();
}
//Objects = 3
