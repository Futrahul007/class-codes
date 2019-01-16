#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
	private:
		int a,b;
	public:
		complex(int x, int y)   // parametrized constructor
		{a=x;b=y;}
		complex(int k)          // parametrized constructor
		{a=k;}
		complex()               // default constructor
		{ }
		complex(complex &c)     // copy constructor
		{
			a=c.a;
			b=c.b;
		}
};
 int main()
 {
 	complex c1(3,4),c2,c3(5);
 	complex c4(c1);
 	return 0;
 }
