#include <iostream.h>
#include <conio.h>

int sum(int n)
{
    if (n == 0)
        return 0;

    return n + sum(n - 1);
}

void main()
{
    int n;

    clrscr();

    cout << "Enter N: ";
    cin >> n;

    cout << "Sum = " << sum(n);

    getch();
}
//Enter N: 10
//Sum = 55
