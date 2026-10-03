#include<iostream.h>
#include<conio.h>

void main()
{
    clrscr();

    int *p=new int;
    *p=10;

    cout<<"Value = "<<*p<<endl;

    delete p;
    p=NULL;

    cout<<"Pointer deleted";

    getch();
}
/*Value = 10
Pointer deleted
*/	  	 	 	