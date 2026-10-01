#include <iostream.h>
#include <conio.h>

int prime(int n, int i)
{
    if (i == 1)
        return 1;

    if (n % i == 0)
        return 0;

    return prime(n, i - 1);
}

void main()
{
    int n;

    clrscr();

    cout << "Enter a number: ";
    cin >> n;

    if (n < 2)
        cout << "Not Prime";
    else if (prime(n, n / 2))
        cout << "Prime";
    else
        cout << "Not Prime";

    getch();
}
//Enter a number: 17
//Prime
