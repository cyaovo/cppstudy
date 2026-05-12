#include <iostream>
#include "bs.h"
template <typename T>
void Reverse(T a[], int n)
{
    T temp;
    for(int i=0; i<n/2; i++)
    {
        temp = a[i];
        a[i] = a[n-1-i];
        a[n-1-i] = temp;
    }
}