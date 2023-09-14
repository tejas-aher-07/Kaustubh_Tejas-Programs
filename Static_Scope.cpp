#include<iostream>
using namespace std;

class Complex
{
	int Real, Img;
//	static int cnt;
	
	public:
		static int cnt;

		Complex(int real,int img)
		{
			Real=real;
			Img=img;
			cnt++;
		}
		
		int getter()
		{
//			cout<<cnt<<" times count is incremented";
			return cnt;
		}
};

int Complex :: cnt=0;
int main()
{
	Complex c(10,5);
	cout<<c.getter()<<endl;
	
	cout<<Complex::cnt;
	
}
