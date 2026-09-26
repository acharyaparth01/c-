#include <iostream.h>
#include <conio.h>

int main()
{
    int a[] = {30, 10, 20};
    int b[] = {50, 40, 60};
    int c[6];
    int i, j, temp;

    clrscr();

    // Merge arrays
    for (i = 0; i < 3; i++)
    {
        c[i] = a[i];
    }

    for (i = 0; i < 3; i++)
    {
        c[i + 3] = b[i];
    }

    // Sort merged array
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5 - i; j++)
        {
            if (c[j] > c[j + 1])
            {
                temp = c[j];
                c[j] = c[j + 1];
                c[j + 1] = temp;
            }
        }
    }

    cout << "Merged and sorted array: ";

    for (i = 0; i < 6; i++)
    {
        cout << c[i] << " ";
    }

    getch();
    return 0;
}
//Merged and sorted array: 10 20 30 40 50 60
