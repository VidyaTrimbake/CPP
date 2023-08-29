//***Uncompleted****Write generic program to accept N values and last occurence of any specific value
//Input:    10 20 30 10 30 40 10 40 10
//Output:   10 40 10 40 30 10 30 20 10

#include<iostream>
using namespace std;

template <class T>
void Reverse(T *arr, int iSize)
{
    for(int i=iSize-1; i>=0; i--)
    {
        cout<<arr[i]<<"\n";
    }
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    Reverse(arr,9);

    char brr[] = {'a','b','c','d'};
    Reverse(brr,4);
    return 0;
}