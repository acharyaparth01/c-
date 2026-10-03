#include<iostream.h>
#include<conio.h>

class Student
{
public:
    int age;

    void show()
    {
        cout<<"Age = "<<age;
    }
};

void main()
{
    clrscr();

    Student s1,s2;

    s1.age=20;
    s2.age=21;

    s1.show();
    cout<<endl;
    s2.show();

    getch();
}
/*Age = 20
Age = 21
*/