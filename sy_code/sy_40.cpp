#include <iostream.h>
#include <conio.h>

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void main()
{
    int a, b;

    clrscr();

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Before Swap: " << a << " " << b << "\n";

    swap(&a, &b);

    cout << "After Swap: " << a << " " << b;

    getch();
}
/*Enter two numbers: 10 20
Before Swap: 10 20
After Swap: 20 10
*/