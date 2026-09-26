#include <iostream.h>
#include <conio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int i, temp;

    clrscr();

    for (i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    cout << "Reversed array: ";

    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    getch();
    return 0;
}
