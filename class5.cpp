#include <iostream>
using namespace std; 


class A
{
	public:
	A(){
	cout << "constructor A" << endl;
	}
};
	

class B:public A
{
	public:
	B():A()
	{
	cout << "constructor B" << endl;
	}


};

int main(){
B b;


}

