#include<iostream>
using namespace std;
class Student
{
	int id;
	float fees;
	public:
		Student(){
			cout<<"no argument constructor!!"<<endl;
		}
		Student(int id){
			this->id=id;
		}
		Student(float fees){
			this->fees=fees;
		}
		Student(int id,float fees){
			this->id=id;
			this->fees=fees;
		}
		void display(){
			cout<<"Student Details are : id = "<<id<<" fees = "<<fees<<endl;
		}
};
int main(){
	Student s;
	s.display();
	Student s1(2);
	s1.display();
	Student s2(106000.0f);
	s2.display();
	Student s3(5,1054654.0f);
	s3.display();
}
