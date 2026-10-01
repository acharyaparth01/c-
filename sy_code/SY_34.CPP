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
    int a, b, lcm;

    clrscr();

    cout << "Enter two numbers: ";
    cin >> a >> b;

    lcm = (a * b) / gcd(a, b);

    cout << "LCM = " << lcm;

    getch();
}
//Enter two numbers: 12 18
//LCM = 36
