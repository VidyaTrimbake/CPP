//Write generic program to find largest number from three numbers

#include<iostream>
using namespace std;

template <class T>

T Max(T No1, T No2, T No3)
{
    T Max;
    if((No1>No2) && (No1 > No3))
    {
        Max = No1;
    }
    else if((No2 > No1) && (No2 > No3))
    {
        Max = No2;
    }
    else
    {
        Max = No3;
    }

    return Max;
}

int main()
{
    int iRet = Max(10,20,30);
    cout<<iRet<<"\n";

    float fRet = Max(1.2f,22.29f,3.0f);
    cout<<fRet<<"\n";
}