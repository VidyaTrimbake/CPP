//Write generic program to accept N Values from user and return largest values

#include<iostream>
using namespace std;

template <class T>

T Max(T *arr, int iSize)
{
    T Max = arr[0];
    for(int i=0;i<iSize;i++)
    {
        if(Max < arr[i])
        {
            Max = arr[i];
        }
    }
    return Max;
}

int main()
{
    int Arr[] = {10,20,330,40,50};
    int iSum = Max(Arr,5);
    cout<<iSum<<"\n";

    float Brr[] = {10.03f, 3.7f, 19.8f, 8.7f};
    float fSum = Max(Brr,4);
    cout<<fSum<<"\n";

    return 0;
}