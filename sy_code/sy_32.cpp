#include <iostream.h>
#include <conio.h>

int fibonacci(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

void main()
{
    int n, i;

    clrscr();

    cout << "Enter number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (i = 0; i < n; i++)
        cout << fibonacci(i) << " ";

    getch();
}
//Enter number of terms: 7
//Fibonacci Series: 0 1 1 2 3 5 8
