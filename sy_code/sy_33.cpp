#include <iostream.h>
#include <conio.h>

int gcd(int a, int b)
{
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

void main()
{
    int a, b;

    clrscr();

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "GCD = " << gcd(a, b);

    getch();
}
//Enter two numbers: 24 36
//GCD = 12
