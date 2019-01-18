#include<iostream>
#include<conio.h>
using namespace std;
class integer
{
	private:
		int x;
	public:
		void setdata(int a)
	   {x=a;}
	   void showdata()
	   {cout<<"x="<<x;}
	   integer operator++()
	   {
	   	integer i;
	   	i.x=x++;
	   	return (i);
	   }
	};
	int main()
	{
	integer i1,i2;
	i1.setdata(3);
	i1.showdata();
	i2=i1.operator()++;
	i1.showdata();
	i2.showdata();
	return 0;
    }
