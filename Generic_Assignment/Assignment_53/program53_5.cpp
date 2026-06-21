// -----------------------------------------------------------------------------
// Program Name : Generic Replace Element Program
// Description  : This program demonstrates the use of a generic (template)
//                function in C++ to replace all occurrences of a given value
//                in an array with a new value. The function works for
//                different data types such as int and float and returns
//                the count of replaced elements.
// Author       : Vivek Bhauraj Gautam
// Date         : 12-01-2026
// -----------------------------------------------------------------------------

#include<iostream>
using namespace std;

// -----------------------------------------------------------------------------
// Function Name : Replace
// Description   : This is a generic (template) function that accepts an array
//                 of N elements, an old value, and a new value. It replaces
//                 all occurrences of the old value with the new value and
//                 returns the total count of replaced elements.
// Input         : T *arr    - Address of array containing N elements
//                 int iSize - Number of elements in the array
//                 T oldval  - Value to be replaced
//                 T newval  - New value to replace with
// Output        : Returns count of replaced elements
// -----------------------------------------------------------------------------

template <class T>
int Replace(T *arr, int iSize, T oldval, T newval)
{
    int count = 0;

    for(int i = 0; i < iSize; i++)
    {
        if(arr[i] == oldval)
        {
            arr[i] = newval;   // Replace old value with new value
            count++;
        }
    }
    return count;
}

// -----------------------------------------------------------------------------
// Function Name : main
// Description   : Entry point of the program. It initializes integer and
//                 floating-point arrays, calls the Replace function for
//                 both data types, and displays the count of replaced
//                 elements along with the modified arrays.
// -----------------------------------------------------------------------------

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    float brr[] = {12.0f, 3.7f, 9.8f, 8.7f};

    int iRet = Replace(arr, 5, 20, 21);
    cout << "Replaced count (int): " << iRet << "\n";

    float fRet = Replace(brr, 4, 9.8f, 10.0f);
    cout << "Replaced count (float): " << fRet << "\n";

    cout << "Modified int array: ";
    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nModified float array: ";
    for(int i = 0; i < 4; i++)
    {
        cout << brr[i] << " ";
    }

    return 0;
}
