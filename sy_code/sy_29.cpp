#include <iostream.h>
#include <conio.h>

int main()
{
    int arr[] = {10, 20, 30, 20, 40, 10};
    int n = 6;
    int i, j;

    clrscr();

    cout << "Duplicate elements: ";

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << arr[i] << " ";
                break;
            }
        }
    }

    getch();
    return 0;
}
//Duplicate elements: 10 20
