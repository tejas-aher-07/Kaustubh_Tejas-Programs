#include<iostream>
using namespace std;
class Calculate
{
	public:
		int add(int a, int b)
		{
			return a+b;
		}
		float add(int a, float b)
		{
			return a+b;
		}
		float add(int a, int b, float c)
		{
			return a+b+c;
		}
};
int main()
{
	Calculate c1;
	cout<<c1.add(10,20)<<endl;
	cout<<c1.add(10,20,20.5f)<<endl;
	cout<<c1.add(10,25.5f)<<endl;
	
}
