#include<iostream>
using namespace std;

int main()
{
	int a = 10;
	int& b=a;
	int& c = a;
	int& d = a;
	cout<<"Add of a : "<<&a<<endl;
	cout<<"Add of b : "<<&b<<endl;
	cout<<"Add of c : "<<&c<<endl;
	cout<<"Add of d : "<<&d<<endl;
	
	return 0;
}
