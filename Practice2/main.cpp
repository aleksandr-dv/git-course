#include <iostream>
using namespace std;

/*
		наслідування
*/

class Human
{
private:
	string name;
};

class Student : public Human
{
public:
	string group;
	void learn()
	{
		cout << "I learn!" << endl;
	}
};

class ExtramuralStudent : public Student
{
public:
	void learn()
	{
		cout << "I also learn but from home!" << endl;
	}
};

class Professor : public Human
{
public:
	string subject;
};

int main()
{
	setlocale(LC_ALL, "ukr");
	cout << "d";
	return 0;
}