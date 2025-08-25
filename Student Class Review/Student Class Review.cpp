#include <iostream>
#include <cassert>
#include <ctime>
#include <string>
#include <cstdlib>

using namespace std;

class Student {
private:
	string first_name;
	string last_name;
	int student_id, number_of_credits;

	int generate_id() {
		return rand() % 900000 + 100000;
	}

public:
	//Constructor
	Student(const string& first, const string& last)
		: first_name(first), last_name(last), number_of_credits(0) {
		student_id = generate_id();
	}

	//Getters
	string get_first_name() const { return first_name; }
	string get_last_name() const { return last_name; }
	int get_id() const { return student_id; }
	int get_number_of_credits() const { return number_of_credits; }

	//Setters
	void set_first_name(const string& first) { first_name = first; }
	void set_last_name(const string& last) { last_name = last; }

	//Methods
	void add_credits(int number) {
		if (number > 0) {
			number_of_credits += number;
		}
	}

	void reset_credits() {
		number_of_credits = 0;
	}
};

int main() {
	srand(static_cast<unsigned>(time(0)));

	Student student("Bob", "Bobberson");

	assert(student.get_first_name() == "Bob");
	assert(student.get_last_name() == "Bobberson");

	assert(student.get_number_of_credits() == 0);

	student.add_credits(6);
	student.add_credits(2);
	assert(student.get_number_of_credits() == 8);

	student.reset_credits();
	assert(student.get_number_of_credits() == 0);

	student.set_first_name("Bab");
	student.set_last_name("Babberson");
	assert(student.get_first_name() == "Bab");
	assert(student.get_last_name() == "Babberson");

	cout << "Student: " << student.get_first_name() << " "
		<< student.get_last_name() << "\nID: "
		<< student.get_id() << "\nCredits: "
		<< student.get_number_of_credits() << endl;

	cout << "All Tests Passed Successfully" << endl;
	return 0;
}
