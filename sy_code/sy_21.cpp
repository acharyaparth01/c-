#include<iostream.h>
#include<conio.h>

void main()
 {
	    int a[5];
	    int key,i;
        clrscr();
	    cout << "Enter 5 elements: ";

		   for ( i = 0; i < 5; i++)
			 {
					cin >> a[i];
			 }

	    cout << "Enter element to search: ";
	    cin >> key;

		    for (i = 0; i < 5; i++)
			{
				 if (a[i] == key)
				 {
				       cout<< "Element found at position "<<i+1;
                                          return;
				 }
			}

	    cout << "Element not found";

    getch();
}
/*Enter 5 elements:10
30
50
70
8
Enter element to search:50
Element found at position 3
