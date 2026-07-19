#include <iostream>
using namespace std;

class student {
private:
	int age;
	string name;
	double sallary;
public:
	void set() {
		cout << "enter your name :";
		cin >> name;
		cout << "enter your age :";
		cin >> age;
		cout << "enter your sallary :";
		cin >> sallary;
	}
	
	void print() {
		cout << "your name is :" << name << endl;
		cout << "your age is :" << age << endl;
		cout << "your sallary is :" << sallary << endl;

 }

};

int main(){
	student ob1;
	ob1.set();
	ob1.print();

}
