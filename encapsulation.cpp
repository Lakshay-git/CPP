#include <iostream>
using namespace std;
class temp{
	int a;
int b;
public:
int solve(int input){
	a=input;
	b=a/2;
	return b;
}
};

int main() {
int n;
cin>>n;
temp half;
int ans=half.solve(n);
cout<<ans<<endl;
	
}

#include <iostream>
#include <string>

using namespace std;

class Person {
private:
	string name;
	int age;
public:
	Person(string name, int age) {
	this->name = name;
	this->age = age;
	}
	void setName(string name) {
	this->name = name;
	}
	string getName() {
	return name;
	}
	void setAge(int age) {
	this->age = age;
	}
	int getAge() {
	return age;
	}
};

int main() {
Person person("John Doe", 30);

cout << "Name: " << person.getName() << endl;
cout << "Age: " << person.getAge() << endl;

person.setName("Jane Doe");
person.setAge(32);

cout << "Name: " << person.getName() << endl;
cout << "Age: " << person.getAge() << endl;

return 0;
}

// C++ program to demonstrate
// Encapsulation
#include <iostream>
using namespace std;

class Encapsulation {
private:
	// Data hidden from outside world
	int x;

public:
	// Function to set value of
	// variable x
	void set(int a) { x = a; }

	// Function to return value of
	// variable x
	int get() { return x; }
};

// Driver code
int main()
{
	Encapsulation obj;
	obj.set(5);
	cout << obj.get();
	return 0;
}
