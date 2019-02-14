#include <iostream>
using namespace std;

void numElmntArray(int iArraySize)
{
	int a[iArraySize];
	for(int i=0;i<iArraySize;i++)
	{
		cin>>a[i];
	}
	
	for(int i=0;i<iArraySize;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	
	cout<<"Enter number to be searched"<<endl;
	int iNumSrch,iFlag=0;
	cin>>iNumSrch;
	for (int i=0;i<iArraySize;i++)
	{
		if (iNumSrch==a[i])
		{
			cout<<"Found the number and the position is: "<<i+1<<endl;
		}
		else 
		iFlag++;
	}
	if(iFlag==iArraySize)
	cout<<"Number not found"<<endl;
}

int main()
{
	int iNumElments;
	
	cout<<"Enter number of elements in array"<<endl;
	
	cin>>iNumElments;
	numElmntArray(iNumElments);
	
	return 0;
	
	
}