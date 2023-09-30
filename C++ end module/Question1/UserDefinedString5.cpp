#include <iostream>
using namespace std;
#include<String.h>
class String1{
	int len;
	char* ptr;
	public:
		String1(){
			len=0;
			ptr=0;
		}
		String1(char* name){
			this->len=strlen(name);
			this->ptr=new char[len+1];
			strcpy(this->ptr,name);
		}
		void displaystring(){
			cout<<"Length of String is : "<<len<<endl;
			cout<<"Accepted String is : "<<ptr<<endl;
		}
		void acceptstring(char* name){
			this->len=strlen(name);
			this->ptr=new char[len+1];
			strcpy(this->ptr,name);
		}
};
int main(){
	String1 s1;
	s1.acceptstring("Kaustubh");
	s1.displaystring();
}
