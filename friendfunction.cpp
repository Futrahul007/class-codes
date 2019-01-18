#include<conio.h>
#include<iostream>
using namespace std;
class complex
{
	private:
		int a,b;
	public:
	void setdata(int x,int y)
	{a=x;b=y;}
	void showdata()
	{cout<<"a="<<a<<"b="<<b;}
	friend void fun(complex);
};
void fun(complex c)
{
	cout<<"Sum is "<<c.a+c.b;
}
  int main()
  {
  	complex c1,c2,c3;
  	c1.setdata(3,4);
  	fun(c1);
  	return 0;
  }
