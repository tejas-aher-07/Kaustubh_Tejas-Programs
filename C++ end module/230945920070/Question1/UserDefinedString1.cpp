#include<iostream>
using namespace std;
#include<String.h>
class String2{
	int len;
	char* ptr;
	public:
		String2(){
			len=10;
			ptr = new char[len+1];
			char name[len+1]="Kaustubh";
			strcpy(ptr,name);
		}
		void display(){
			cout<<len<<endl;
			cout<<ptr;
		}
};
int main(){
	String2 s;
	s.display();
}
