#include <iostream>
#include <cassert>
#include <ctime>

using namespace std;

class Student {
public:
	string student_name_first;
	string student_name_last;

	void MyStudent(string first_name, string last_name) {
		student_name_first = first_name;
		student_name_last = last_name;
	}
	

	void generate_Id() {
		srand(static_cast<unsigned int>(time(nullptr)))

		int random_Id = (rand() % 9) + 1;
	}

}

int main() {
	assert(student.first_name == "Bob");
	assert(student.last_name == "Bobberson");
	assert(student.number_of_credits == 0);

	student.add_credits(6);
	student.add_credits(2);

	assert(student.number_of_credits == 8);

	student.reset_credits();

	assert(student.number_of_credits == 0);


	MyStudent obj("Bob", "Bobberson");

	cout << "Your ID: " << student.generate_Id;

	return 0;
}