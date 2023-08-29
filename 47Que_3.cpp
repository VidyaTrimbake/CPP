//Write generic program to accept N value from user and return addition of that values.

#include<iostream>
using namespace std;

template <class T>
T AddN(T *arr, int iSize)
{
    T Sum;
    int i = 0;
    for(i=0;i<iSize;i++)
    {
        Sum = Sum + arr[i];
    }
    return Sum;
} 

int main()
{
    int Arr[] = {5,10,20};
    int iSum = AddN(Arr,3);
    cout<<iSum<<"\n";

    float Brr[] = {10.03f, 3.7f, 9.8f, 8.7f};
    float fSum = AddN(Brr,4);
    cout<<fSum<<"\n";

    return 0;
}