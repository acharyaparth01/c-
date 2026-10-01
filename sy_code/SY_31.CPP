#include <iostream.h>
#include <conio.h>

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;

    return n * factorial(n - 1);
}

void main()
{
    int n;

    clrscr();

    cout << "Enter a number: ";
    cin >> n;

    cout << "Factorial = " << factorial(n);

    getch();
}
/*Enter a number: 5
Factorial = 120
*/