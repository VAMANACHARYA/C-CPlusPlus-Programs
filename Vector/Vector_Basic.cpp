#include <iostream>
#include <vector>

using namespace std;
int main()

{
	/* Syntax  for vetor vector <DataType> nameofvector */
	/*vector.pushback(value) adds element at the END of the vector*/
	/*vector.at(index) => returns the element at specified index number*/
	/*vector.size() returns unsigned int always and it returns total number of element in the vector*/
	/*vector.insert(vector.begin() + integer, new value) => enters the value BEFORE specified index number*/
	/*vector.erase(vector.begin()+integer) => removes the element AT the specified index number*/
	/*vector.clear() => removes all the element in the vector*/
	/*vector.empty() => returns a boolean value=> whether the vector is empty*/

	vector <int> iMyVector;
	cout << "Size of iMyVector is: " << iMyVector.size() << endl;
	int iEvenNum = 0;

	for (int iEven = 0; iEven < 10; iEven++)
	{
		iMyVector.push_back(iEvenNum);
		iEvenNum += 2;
	}

	iMyVector.insert(iMyVector.begin(), 28);
	iMyVector.insert(iMyVector.begin() + 5, 100);

	for (unsigned int uiNumEven = 0; uiNumEven < iMyVector.size(); uiNumEven++)
	{
		cout << "Element at ["<< uiNumEven <<"]" <<" in the vector 'iMyVector' is: " << iMyVector.at(uiNumEven) << endl;
		/*the above line can also be written as 
		cout << "Element at ["<< uiNumEven <<"]" <<" in the vector 'iMyVector' is: " << iMyVector[i] << endl;*/
	}
	cout << "Size of the vector is: " << iMyVector.size() << endl;

	iMyVector.erase(iMyVector.begin());
	for (unsigned int uiNumEven = 0; uiNumEven < iMyVector.size(); uiNumEven++)
	{
		cout << "Element at [" << uiNumEven << "]" << " in the vector 'iMyVector' is: " << iMyVector.at(uiNumEven) << endl;
		/*the above line can also be written as
		cout << "Element at ["<< uiNumEven <<"]" <<" in the vector 'iMyVector' is: " << iMyVector[i] << endl;*/
	}
	cout << "Size of the vector is: " << iMyVector.size() << endl;

	if (iMyVector.empty())
		cout << "Vector is Empty!" << endl;
	else
		cout << "Vector has " << iMyVector.size() << " elements" << endl;

	iMyVector.clear();

	if (iMyVector.empty())
		cout << "Size of the vector is: " << iMyVector.size() << " Vector is Empty!" << endl;
	else
		cout << "Vector has " << iMyVector.size() << " elements" << endl;

}
