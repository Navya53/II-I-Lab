#include <iostream>
using namespace std;
class details{
	public:

	void display(int rollno){
		cout << "Your rollno is " << rollno << endl;
	}
	int  display(int id, int rollno,char name[]){
		cout << rollno << endl;
		cout << id << endl;
		display(name);
		return 0;
	}
	void display(char name[]){
		cout << name << endl;
	}
};
int main(){
	int rollno = 53;
	char name[50] = "Navya";
	int id = 11;
	details d;
	d.display(rollno);
	d.display(id, rollno, name);
	return 0;
}
