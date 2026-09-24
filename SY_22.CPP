#include<iostream.h>
#include<conio.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int x, low = 0, high = 4, mid;

    clrscr();

    cout << "\n Enter number to search: ";
    cin >> x;

    while(low <= high)
    {
	mid = (low + high) / 2;

	if(a[mid] == x)
	{
	    cout << "Number found";
	    getch();
	    return 0;
	}
	else if(a[mid] < x)
	{
	    low = mid + 1;
	}
	else
	{
	    high = mid - 1;
	}
    }

    cout << "Number not found";

    getch();
    return 0;
}
