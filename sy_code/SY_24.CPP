#include <iostream.h>
#include <conio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int sum = 0;
    int i;

    clrscr();

    for (i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    cout << "Sum of elements = " << sum;

    getch();
    return 0;
}
//Sum of elements=150