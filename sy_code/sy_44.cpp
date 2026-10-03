#include<iostream.h>
#include<conio.h>

void main()
{
    clrscr();

    int n;
    cout<<"Enter size: ";
    cin>>n;

    int *a=new int[n];

    for(int i=0;i<n;i++)
        cin>>a[i];

    cout<<"Array: ";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

    delete[] a;

    getch();
}
/*Enter size: 3
Enter elements: 10 20 30
Array: 10 20 30
*/