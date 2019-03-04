#include<iostream>
using namespace std;

class student
{
	static int counter;
	int id;
	float *quizscore;
	int quiztaken;
	int quizcapacity;
	float gpa;
public:
	student(); // default constructor
		student(int qcapacity,float gpa1);//constructor that also sets values
		student(const student & s2); // constructor that takes a student in
		~student(); //destructor
		void addquizscore(int a);
		void setgpa(float a);
		float getgpa() const;
		void print()const;
		bool compare(student s2);
		void updatescore(int a, int b);




};