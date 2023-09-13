#include <iostream>
using namespace std;
class Const{
	public:
		Const(){
			cout<<"Const constructor"<<endl;
		}
		void run() const
		{
			cout<<"const function"<<endl;
		}
		void run1(){
			cout<<"non const function"<<endl;
		}
};
int main(){
	const Const c1;
	c1.run();
//	c1.run1();
	Const c2;
	c2.run();
	c2.run1();
}
