#include<iostream.h>
#include<conio.h>

class Student
{
    int age;

public:
    Student(int a=18)
    {
        age=a;
    }

    void show()
    {
        cout<<"Age = "<<age;
    }
};

void main()
{
    clrscr();

    Student s;
    s.show();

    getch();
}
//Age = 18
