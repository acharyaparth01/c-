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

class B:public A
{
public:
    void showB()
    {
        cout<<"Class B"<<endl;
    }
};

class C:public B
{
public:
    void showC()
    {
        cout<<"Class C";
    }
};

void main()
{
    clrscr();

    C obj;

    obj.showA();
    obj.showB();
    obj.showC();

    getch();
}
/*Class A
Class B
Class C
*/