#include<iostream>
using namespace std;

class Arithmatic
{
    public:
        int Addition(int iValue1, int iValue2)
        {
            int iAdd = 0;
            iAdd = iValue1 + iValue2;

            return iAdd;
        }
};

int main()
{
    int iNo1 = 0, iNo2 = 0, iRet = 0;
    cout<<"Enter the first name"<<"\n";
    cin>>iNo1;

    cout<<"Enter the first name"<<"\n";
    cin>>iNo2;

    Arithmatic aObj;                    //Object creation
    iRet = aObj.Addition(iNo1,iNo2);    //Function call

    cout<<"Additoin is: "<<iRet<<"\n";

    return 0;
}