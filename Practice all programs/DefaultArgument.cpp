#include<iostream>
using namespace std;
class DefaultArg
{
	int a,b,c,d;
	public:	
		DefaultArg(int a=1, int b=2,int c=3,int d=4)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
			
			cout<<a<<"\t"<<b<<"\t"<<c<<"\t"<<d<<endl;
		}
		
};

int main()
{
	DefaultArg D;
	DefaultArg D1(10);
	DefaultArg D2(10,20);
	DefaultArg D3(10,20,30);
	DefaultArg D4(10,20,30,40);
	
}
