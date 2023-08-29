#include<iostream>
using namespace std;

class Demo 
{
	public:
		int i;
		int j;
	
		// Default constructor
		Demo() 
		{
			i = 11;
			j = 21;
		}
		
		// parameterised constructor
		Demo(int x, int y) 
		{
			i = x;
			j = y;
		}
};
int main()
{
	Demo Obj1;
	Demo Obj2(10,20);
	
    const Demo Obj3;
    const Demo Obj4(10,20);
    
    Obj1.i++;
    Obj4.i++;
    Obj3.j++;
    Obj1.j++;

	return 0;
}
