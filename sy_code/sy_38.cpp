#include <iostream.h>
#include <conio.h>
#include <string.h>

int palindrome(char str[], int start, int end)
{
    if (start >= end)
        return 1;

    if (str[start] != str[end])
        return 0;

    return palindrome(str, start + 1, end - 1);
}

void main()
{
    char str[50];

    clrscr();

    cout << "Enter a string: ";
    cin >> str;

    if (palindrome(str, 0, strlen(str) - 1))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    getch();
}
/*Enter a string: madam
Palindrome

Enter a string: hello
Not Palindrome
*/