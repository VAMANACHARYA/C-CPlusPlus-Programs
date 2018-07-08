#include <conio.h>
#include <iostream>
#include <string.h>
using namespace std;




int *First = NULL, *Second = NULL;
int a = 0, b = 0;

/*void Add(int a, int b)
{
printf("Enter the numbers \n");

scanf_s("%d %d", &a , &b);
int Sum = a + b;
}*/

/*void Name(char a)
{
printf("Enter the name \n");
char c[50];
gets(c);
//printf("Entered name is: %c\n");
}*/

void CalRef(int *F1, int *F2)
{
	scanf_s("%d %d", F1, F2);

	int sum = *F1 + *F2;
	cout << "Value of a : " << sum << endl;

}