/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout<<"Hello Welcome to Vector in C++"<<endl;
    
    
    vector <int> iVec;
    
    vector <int> iVector(2);
    iVector.push_back(100);
    int SizeiVector = iVector.size();
    cout<< "Size of 'iVector' is : "<<SizeiVector <<" First element of the vector 'iVector' is: "<< iVector[2]<<endl;
    
   // int iSize = iVec.size();
    
    iVec.push_back(10);
    //int iSize = iVec.size();
    //int iCapacity = iVec.capacity();
    iVec.push_back(20);
    iVec.push_back(30);
    int iSize = iVec.size();
    int iCapacity = iVec.capacity();
    cout<< "Size of the vector iVec is: "<<iSize <<endl;
    cout<< "Capacity of the vector iVec is: "<<iCapacity <<endl;
    
    const int SIZE = 3;
    vector <int>iNumbers (SIZE, 2);
    int iNumbrersSize = iNumbers.size();
    for(int iNum = 0; iNum < iNumbrersSize; iNum++)
        cout << "Size of the vector iVec is: "<<iNumbrersSize <<" Elemnts of vector 'iNumbers' are : " << iNumbers[iNum]<<endl;
    
    
    vector <int> iVctr;
    for(int i=1;i<6;i++)
    {
        iVctr.push_back(i);
    }
    int iSizeVctr = iVctr.size();
    int iSizeVctrCapacity = iVctr.capacity();
    cout<<"Size of vector 'Vctr' is :" << iSizeVctr <<endl;
    cout<<"Size of vector 'Vctr' is :" << iSizeVctrCapacity <<endl;
    
    vector <int>::iterator iFirstElmnt= iVctr.begin(); /* iFirstElmnt is a pointer
    that holds address of the first element of the vector iVctr*/
    int iFirstElement = *iFirstElmnt; /* Using '* dereferences the pointer and 
    returns the value at that address'*/
    cout<<"First element of the vector 'Vctr' is: "<<iFirstElement<<endl;
    
    vector <int>:: iterator iLastElmnt = iVctr.end();
    int iLastElement = *(iLastElmnt-1);
    cout<<"Last element of the vector 'Vctr' is : "<<iLastElement<<endl;
    
    for (int i=0;i<iVctr.size();i++)
    {
        cout<<"Elements in the vector iVctr are:" <<iVctr[i]<<endl;
    }
    return 0;
}
