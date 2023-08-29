//Write generic program to accept N values and  first occurence of any specific value
//Input:    10 20 30 10 30 40 10 40 10
//Check freq of value:  10
//Output:   6

#include<iostream>
using namespace std;

template <class T>
int SearchFirst(T *arr, int iSize, T value)
{
    int i = 0;
    for(i=0; i<iSize; i++)
    {
        if(arr[i] == value)
        {
            break;
        }
    }
    return i+1;
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    int iRet = SearchFirst(arr,9,40);
    cout<<iRet<<"\n";

    char brr[] = {'A','B','C','D'};
    char cRet = SearchFirst(brr,4,'A');
    cout<<cRet<<"\n";

    return 0;
}