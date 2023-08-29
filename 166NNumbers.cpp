#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int i)
        {
            iSize = i;
            Arr = new int[iSize];
        }
        void Accept()
        {
            cout<<"Please enter the numbers:"<<"\n";
            int iCnt = 0;

            for(iCnt = 0;iCnt<iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }
        void Display()
        {
            cout<<"Elements of array are:"<<"\n";
            int iCnt = 0;

            for(iCnt = 0;iCnt<iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\n";
            }
            cout<<"\n";
        }
};

int main()
{
    int iLength = 0;
    cout<<"ENter the number of elements: "<<"\n";
    cin>>iLength;

    ArrayX aObj(iLength);

    aObj.Accept();
    aObj.Display();

    return 0;
}