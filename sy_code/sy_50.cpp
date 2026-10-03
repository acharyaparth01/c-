#include<iostream.h>
#include<conio.h>

class Test
{
public:
    Test()
    {
        cout<<"Constructor called"<<endl;
    }

    ~Test()
    {
        cout<<"Destructor called";
    }
};

void main()
{
    clrscr();

    Test t;

    getch();
}
/*Constructor called
Destructor called
*/