#include<iostream.h>
#include<conio.h>

class A
{
public:
    void showA()
    {
        cout<<"Class A"<<endl;
    }
};

class B
{
public:
    void showB()
    {
        cout<<"Class B"<<endl;
    }
};

class C:public A,public B
{
};

void main()
{
    clrscr();

    C obj;

    obj.showA();
    obj.showB();

    getch();
}
/*Class A
Class B
*/