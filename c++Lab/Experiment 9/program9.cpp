#include <iostream>
using namespace std;
class A{
	public:
		int a;
		A(){
			a = 20;
			cout << "Constructor created" << endl;
		}
		void display(){
			cout << a << endl;
		}
		~A(){
			cout << "destructor created";
		}
};
int main(){
	A obj;
	obj.display();
	return 0;
}
