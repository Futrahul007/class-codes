#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
	private:
		int a,b;
	public:
		void setdata(int x,int y)
		{a=x;b=y;}
		void showdata()
	{cout<<"\n a="<< a <<"b="<<b;}
		complex operator-()
	{
		complex temp;
		temp.a=-a;
		temp.b=-b;
		return(temp);
	}
};
 int main()
 {
 complex c1,c2;
 c1.setdata(3,4);
 c2=-c1;
 c2.showdata();
 return 0;
}
