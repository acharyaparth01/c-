#include <iostream.h>
#include <conio.h>

int main()
{
    int arr[] = {10, 25, 5, 40, 15};
    int n = 5;
    int max = arr[0];
    int i;

    clrscr();

    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "Maximum element = " << max;

    getch();
    return 0;
}
//Maximum element =40
