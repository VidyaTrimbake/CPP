//Write generic program to accept N values and count frequency of any spaecific value
//Input:    10 20 30 10 30 40 10 40 10
//Check freq of value:  10
//Output:   4

#include<iostream>
using namespace std;

template <class T>
int Frequency(T *arr, int iSize, T No)
{
    int iNoCnt = 0;
    for(int i=0; i<iSize; i++)
    {
        if(arr[i] == No)
        {
            iNoCnt++;
        }
    }
    return iNoCnt;
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    int iRet = Frequency(arr,9,10);
    cout<<iRet;

    return 0;
}