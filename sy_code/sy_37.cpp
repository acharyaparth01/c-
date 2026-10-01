#include <iostream.h>
#include <conio.h>

void hanoi(int n, char from, char to, char aux)
{
    if (n == 1)
    {
        cout << "Move disk 1 from " << from << " to " << to << "\n";
        return;
    }

    hanoi(n - 1, from, aux, to);

    cout << "Move disk " << n << " from " << from << " to " << to << "\n";

    hanoi(n - 1, aux, to, from);
}

void main()
{
    int n;

    clrscr();

    cout << "Enter number of disks: ";
    cin >> n;

    hanoi(n, 'A', 'C', 'B');

    getch();
}
/*Enter number of disks: 3

Move disk 1 from A to C
Move disk 2 from A to B
Move disk 1 from C to B
Move disk 3 from A to C
Move disk 1 from B to A
Move disk 2 from B to C
Move disk 1 from A to C
*/