#include <iostream>
#include<conio.h>
using namespace std;
void divide(int x,int y,int z)
  {
    cout<<"we are inside the function "<<endl;
    if((x-y)!=0)
    {
      int r=z/(x-y);
      cout<<"result= "<<r<<endl;
    }
    else
    {
      throw(x-y);
    }
  }
  int main()
  {
    try
    {
      cout<<"we are outside the try block"<<endl;
      divide(10,20,30);
      divide(10,10,20);
    }
    catch(int i)
    {
      cout<<"caught the exception"<<endl;
    }
    return 0;
  }

