#include "Template.h"

int main()
{
	int fst, scnd;
	cin >> fst;
	cin >> scnd;
	int x = GetMax(fst, scnd);

	int fst1, scnd2;
	cin >> fst1;
	cin >> scnd2;
	int y = GetMax(fst1, scnd2);

	cout << "Maximum of fst and scnd is: " << x << endl;
	cout << "Maximum of fst1 and scnd2 is :" << y << endl;

	int iValA, iValB;

	cin >> iValA;
	cout << "Value of a before swap: " << iValA << endl;

	cin >> iValB;
	cout << "Value of b before swap: " << iValB << endl;

	Swap(iValA, iValB);

	_getch();
	return 0;
}
