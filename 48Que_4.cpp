//***Uncompleted****Write generic program to accept N values and last occurence of any specific value
//Input:    10 20 30 10 30 40 10 40 10
//Check freq of value:  40
//Output:   8

#include<iostream>
using namespace std;

template <class T>
int SearchLast(T *arr, int iSize, T value)
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
    int iRet = SearchLast(arr,9,40);
    cout<<iRet<<"\n";

    char brr[] = {'A','B','C','D'};
    char cRet = SearchLast(brr,4,'A');
    cout<<cRet<<"\n";

    return 0;
}