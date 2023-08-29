#include<iostream>
using namespace std;

//Problems on numbers

class Numbers
{
    public:
        int iNo;
        Numbers(int i)
        {
            iNo = i;
        }
        int Facto()
        {
            int iAns = 1;
            int iCnt = 0;
            for(iCnt=iNo;iCnt>=1;iCnt--)
            {
                iAns = iAns*iCnt;
            }
            return iAns;
        }
};

int main()
{
    int iValue = 0;
    int iRet = 0;
    cout<<"ENter the value:"<<"\n";
    cin>>iValue;
     
    Numbers nObj(iValue);
    iRet = nObj.Facto();
    cout<<"Factorial is:"<<iRet;

    return 0;
}