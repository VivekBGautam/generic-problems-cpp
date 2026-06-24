// Q 3. Write a generic program to Find second largest element from array

#include<iostream>
using namespace std;

// -----------------------------------------------------------------------------
// Function Name : SecondMax
// Description   : This is a generic (template) function that accepts N
//                 values of the same data type, And find second largest element.
// Input         : T *Arr   - Address of array containing N values
//                 int Size - Number of elements in the array
// Output        : Find second largest element
// -----------------------------------------------------------------------------

template <class T>
T SecondMax(T *Arr, int Size)
{
    T Large = Arr[0];
    T SecLarge = Arr[1];

    if(Large < SecLarge)
    {
        T Temp = Large;
        Large = SecLarge;
        SecLarge = Temp;
    }

    for(int iCnt = 2; iCnt < Size; iCnt++)
    {
        if(Arr[iCnt] > Large)
        {
            SecLarge = Large;
            Large = Arr[iCnt];
        }
        else if((Arr[iCnt] > SecLarge) && (Arr[iCnt] != Large))
        {
            SecLarge = Arr[iCnt];
        }
    }

    return SecLarge;
}

// -----------------------------------------------------------------------------
// 
//  Function Name : main Entry point of out program  
//
// -----------------------------------------------------------------------------
int main()
{
    int Ret;
    float fRet;

    int Arr[] = {10,11,12,15,14,19,20};
    Ret = SecondMax(Arr, 7);
    cout<<"Second Largest element is : "<<Ret<<"\n";

    cout<<"\n-----------------------------------------\n";

    float Brr[] = {10.5f,12.09f,14.2f,16.5f,19.3f,21.2f,25.3f};
    fRet = SecondMax(Brr,7);
    cout<<"Second Largest element is : "<<fRet<<"\n";

    return 0;
}
