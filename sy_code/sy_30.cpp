#include <iostream.h>
#include <conio.h>

int main()
{
    char str[100];
    int i = 0;

    clrscr();

    cout << "Enter a string: ";
    cin >> str;

    while (str[i] != '\0')
    {
        i++;
    }

    cout << "Length of string = " << i;

    getch();
    return 0;
}
/*Enter a string: Hello
Length of string = 5 */