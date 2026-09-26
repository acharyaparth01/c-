#include <iostream.h>
#include <conio.h>

int main()
{
    int arr[] = {10, 20, 10, 30, 20, 10};
    int n = 6;
    int i, j, count;

    clrscr();

    for (i = 0; i < n; i++)
    {
        count = 1;

        // Check if element was already counted
        for (j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                count = 0;
                break;
            }
        }

        if (count != 0)
        {
            count = 1;

            for (j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                }
            }

            cout << arr[i] << " occurs " << count << " times" << endl;
        }
    }

    getch();
    return 0;
}
/*10 occurs 3 times
20 occurs 2 times
30 occurs 1 times*/