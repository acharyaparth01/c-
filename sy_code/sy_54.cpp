#include<iostream.h>
#include<conio.h>

class Test
{
public:
    void add(int a,int b)
    {
        cout<<"Sum = "<<a+b<<endl;
    }

    void add(int a,int b,int c)
    {
        cout<<"Sum = "<<a+b+c;
    }
};

void main()
{
    clrscr();

    Test t;

    t.add(10,20);
    t.add(10,20,30);

    getch();
}
//Sum = 30
//Sum = 60
