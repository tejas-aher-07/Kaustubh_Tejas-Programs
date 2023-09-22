#include<iostream>
using namespace std;

class Complex
{
	int Real, Img;
//	static int cnt;
	
	public:
		static const int cnt;

		Complex(int real,int img)
		{
			Real=real;
			Img=img;
		//	cnt++;  // It's Showing error as we have declared cnt as static const variable.
		}
		
		int getter()
		{
//			cout<<cnt<<" times count is incremented";
			return cnt;
		}
};

const int Complex :: cnt=0;
int main()
{
	Complex c(10,5);
	cout<<c.getter()<<endl;
	
	cout<<Complex::cnt;
	
}
