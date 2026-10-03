#include<iostream.h>
#include<conio.h>

void main()
{
    clrscr();

    int a[3]={10,20,30};
    int *p=a;

    cout<<*p<<endl;
    p++;
    cout<<*p<<endl;
    p++;
    cout<<*p;

    getch();
}
/*10
20
30
*/