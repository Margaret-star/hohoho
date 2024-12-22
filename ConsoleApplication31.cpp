#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
using namespace std;
void text(int h, int r)
{
	for (int i = 0; i < h; i++)
		cout << '\n';
	for (int i = 0; i < r; i++)
		cout << "  "; 
	cout << "      *      " << endl;
    cout << "     /+/    " << endl;
    cout << "  +--*_*--+  " << endl;
    cout << "     | |     " << endl;
	cout << "     | |  " ;
}



int main()
{
	setlocale(0, "");
	system("color 02");
	int h = 0, r = 0;
	while (true)
	{
		if (_kbhit())
		{
			system("cls");
			int a = _getch();
			if (a == 'a')
				r--;
			if (a == 'd')
				r++;
			if (a == 'w')
				h--;
			if (a == 's')
				h++;
			if (a == 'q')
				break;
			if (a == 'z')
				system("color 04");
			if (a == 'x')
				system("color 0A");
			if (a == 'c')
				system("color 0B");
			if (a == 'v')
				system("color 0C");
			if (a == 'b')
				system("color 0D");
			if (a == 'n')
				system("color 0E");


			text(h, r);

			

		}
	}










































}


