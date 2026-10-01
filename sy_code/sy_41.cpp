#include <iostream.h>
#include <conio.h>

void main()
{
    int a = 10;
    int *p;

    clrscr();

    p = &a;

    cout << "Value of a = " << a << "\n";
    cout << "Value using pointer = " << *p;

    getch();
}
/*Value of a = 10
Value using pointer = 10
*/