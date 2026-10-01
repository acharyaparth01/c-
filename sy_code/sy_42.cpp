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

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "Before swap: " << a << " " << b << "\n";

    swap(&a, &b);

    cout << "After swap: " << a << " " << b;

    getch();
}
/*Enter first number: 10
Enter second number: 20
Before swap: 10 20
After swap: 20 10
*/