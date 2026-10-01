#include <iostream.h>
#include <conio.h>

int power(int x, int n)
{
    if (n == 0)
        return 1;

    return x * power(x, n - 1);
}

void main()
{
    int x, n;

    clrscr();

    cout << "Enter base: ";
    cin >> x;

    cout << "Enter power: ";
    cin >> n;

    cout << "Answer = " << power(x, n);

    getch();
}
/*Enter base: 2
Enter power: 5
 Answer = 32
*/