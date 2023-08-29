//Complete below code snippet by writing defination of below function
//1. SearchLast()
//2. EvenCount()
//3. OddCount()
//4. SumAll()

#include<iostream>
using namespace std;

class Array
{
    protected:
        int *Arr;
        int size;

    public:
        Array(int value = 10) 
        {
            cout<<"Inside Constructoor\n";
            this->size = value;
            this->Arr = new int[size];
        }   

        Array(Array &ref)
        {
            cout<<"Inside copy constructor\n";

            this->size = ref.size;
            this->Arr = new int[this->size];

            for(int i = 0; i < size; i++)
            {
                this->Arr[i] = ref.Arr[i];
            }
        }

        ~Array()
        {
            cout<<"Inside the Destructor\n";

            delete []Arr;
        }

        inline void Accept();
        inline void Display();
} ;

void Array :: Accept()
{
    cout<<"Plasse enter the elements\n";
    for(int i=0; i<this->size;i++)
    {
        cin>>Arr[i];
    }
}

void Array :: Display()
{
    cout<<"Elements are\n";
    for(int i=0; i<this->size; i++)
    {
        cout<<Arr[i]<<" ";
    }
    cout<<"\n";
}

class ArrSearch : public Array
{
    public:
        ArrSearch(int no = 10) : Array(no)
        {}

        int Frequency(int);
        int SearchFirst(int);
        //int SearchLast(int);
        int EvenCount();
        int OddCount();
        int SumAll();
};

int ArrSearch :: SearchFirst(int Value)
{
    int i =0;

    for(i=0; i<size; i++)
    {
        if(Arr[i] == Value)
        {
            break;
        }
    }
    if(i == size)
    {
        return -1;
    }
    else
    {
        return i + 1;
    }
}

int ArrSearch :: Frequency(int Value)
{
    int iCnt = 0;
    for(int i=0; i<size;i++)
    {
        if(Arr[i] == Value)
        {
            iCnt++;
        }
    }
    return iCnt;
}

int ArrSearch :: SumAll()
{
    int iSum = 0;
    for(int i=0; i<size; i++)
    {
        iSum = Arr[i] + iSum;
    }
    return iSum;
}

int ArrSearch :: EvenCount()
{
    int iEvCnt = 0;
    for(int i=0; i<size; i++)
    {
        if(Arr[i] % 2 == 0)
        {
            iEvCnt++;
        }
    }
    return iEvCnt;
}

int ArrSearch :: OddCount()
{
    int iOdCnt = 0;
    for(int i=0; i<size; i++)
    {
        if(Arr[i] % 2 == 1)
        {
            iOdCnt++;
        }
    }
    return iOdCnt;
} 

int main()
{
    cout<<"Inside main\n";

    ArrSearch sObj1(5);
    int iRet = 0;
    sObj1.Accept();
    sObj1.Display();

    iRet = sObj1.EvenCount();
    cout<<"EvenCount is "<<iRet<<"\n";

    iRet = sObj1.OddCount();
    cout<<"OddCount is "<<iRet<<"\n";

    iRet = sObj1.SumAll();
    cout<<"SumAll is "<<iRet<<"\n";

    iRet = sObj1.Frequency(10);
    cout<<"Frequency is "<<iRet<<"\n";

    iRet = sObj1.SearchFirst(40);
    cout<<"First occurence is at index "<<iRet<<"\n";

    return 0;
}