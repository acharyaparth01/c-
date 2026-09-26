#include <iostream.h>
#include <conio.h>

int main()
{
    int arr[] = {50, 20, 40, 10, 30};
    int n = 5;
    int i, j, temp;

    clrscr();

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array: ";

    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    getch();
    return 0;
}
//Sorted array: 10 20 30 40 50
