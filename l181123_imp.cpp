#include<iostream> 
#include"student.h"

using namespace std;

int student::counter=0;

student::student()
{
	counter++;
	id=counter;
	quizcapacity=3;
	quizscore=new float [quizcapacity];
	for(int i=0;i<quizcapacity;i++)
		quizscore[i]=-1;
	quiztaken=0;
	gpa=-1;

}
student::student(int qcapacity, float gpa1)
{
	counter++;
	id=counter;
	quizcapacity=qcapacity;
	quizscore=new float [quizcapacity];
	for(int i=0;i<quizcapacity;i++)
		quizscore[i]=-1;
	quiztaken=0;
	gpa=gpa1;

}
student::student(const student & s2)
{
	counter++;
	id=s2.id;
	quizcapacity=s2.quizcapacity;
	quizscore=new float [quizcapacity];
	quiztaken=s2.quiztaken;
	for(int i = 0;i<quiztaken;i++)
		quizscore[i]=s2.quizscore[i];
	gpa=s2.gpa;

}
student::~student()
{


	delete[] quizscore;


}
void student::addquizscore(int a)
{
	if(quiztaken<quizcapacity)
	{
		
		quizscore[quiztaken]=a;
		quiztaken++;
	}
	else
		cout<<"quiz capacity is full"<<endl;

}
void student::setgpa(float a)
{
	if(a>0&&a<=4)
		gpa=a;
	else
		cout<<"enter the right value"<<endl;

}
float student::getgpa()const
{
	return gpa;
}
void student::print()const
{
	cout<<"id: "<<id<<endl;
	cout<<"gpa: "<<gpa<<endl;
	cout<<"quiztaken: "<<quiztaken<<endl;
	for(int i=0;i<quiztaken;i++)
		cout<<"quiz "<<i<<" score: "<<quizscore[i]<<endl;
	cout<<endl;

}
bool student::compare(student s2)
{
	if(gpa>s2.gpa)
		return true;
	else
		return false;
}
void student::updatescore(int qno, int qscore)
{
	if(quizscore[qno-1]!=-1&&qno<=quiztaken)
		quizscore[qno-1]=qscore;
	else
		cout<<"the quiz "<<qno<<" has not been taken previously"<<endl;
}

