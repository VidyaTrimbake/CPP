#include<iostream>
using namespace std;

class Arithmatic
{
    public:                         //Access specifier
        int iValue1, iValue2,iAdd;  //Characteristic

        Arithmatic()                //Default constructor
        {
            iValue1 = 0;
            iValue2 = 0;
        }

        Arithmatic(int A, int B)    //Parameterised constructor
        {
            iValue1 = A;
            iValue2 = B;
        }

        int Addition()              //Client Function
        {
            int iAdd = 0;
            iAdd = iValue1 + iValue2;
            return iAdd;
        }
};

int main()
{
    int iRet = 0;

    Arithmatic aObj1;
    Arithmatic aObj2(10,11);
    Arithmatic aObj3(22,21);

    iRet = aObj1.Addition();
    cout<<"Addition is: "<<iRet<<"\n";

    iRet = aObj2.Addition();
    cout<<"Addition is: "<<iRet<<"\n";

    iRet = aObj3.Addition();
    cout<<"Addition is: "<<iRet<<"\n";

    return 0;
}