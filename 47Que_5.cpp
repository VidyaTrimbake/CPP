//Write generic program to accept N Values from user and return smallest values

#include<iostream>
using namespace std;

template <class T>

T Min(T *arr, int iSize)
{
    T Min = arr[0];
    for(int i=0;i<iSize;i++)
    {
        if(Min > arr[i])
        {
            Min = arr[i];
        }
    }
    return Min;
}

int main()
{
    int Arr[] = {10,20,330,40,50};
    int iSum = Min(Arr,5);
    cout<<iSum<<"\n";

    float Brr[] = {10.03f, 3.7f, 19.8f, 8.7f};
    float fSum = Min(Brr,4);
    cout<<fSum<<"\n";

    return 0;
}