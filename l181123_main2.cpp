#include<iostream>
#include"student.h"
using namespace std;

void printstudentarray(student s[])
{
	for(int i =0;i<3;i++)
		s[i].print();
}
void printstudentarray(student **s)
{
	for(int i =0;i<4;i++)
		s[i]->print();
}

student* gpa2(student s1[])
{
	int k=0;
	for(int i=0;i<4;i++)
	{
		if((s1[i].getgpa())>2.0)
			k++;
	}
	student arr[3];
	k=0;
	for(int i=0;i<3;i++)
	{ 
		if(s1[i].getgpa()>2.0&&i<=k)
		{
	     arr[k]=s1[i];
		k++;
		}
	}
	return arr;
}
student* gpa2(student **s1)
{
	int k=0;
	for(int i=0;i<4;i++)
	{
		if((s1[i]->getgpa())>2.0)
			k++;
	}
	student *arr=new student[k];
	k=0;
	for(int i=0;i<4;i++)
	{ 
		if((s1[i]->getgpa())>2.0)
		{
	      arr[k]=*s1[i];
		  k++;
		}
	}
	return arr;
}
void  sortarray(student s1[])
{ int max,k=0;

	max=0;
	for(int i =0;i<3;i++)
	{ 
		for(int j=0+k;j<3;j++)
		{
			if(s1[j].getgpa()>s1[max].getgpa())
			max=j;		
		}
       swap(s1[k],s1[max]);
			k++;
	}
	}
void  sortarray(student **s1)
{ int max,k=0;

	max=0;
	for(int i =0;i<3;i++)
	{ 
		for(int j=0+k;j<3;j++)
		{
			if(s1[j]->getgpa()>s1[max]->getgpa())
			max=j;		
		}
       swap(s1[k],s1[max]);
			k++;
	}
	}
int main()
{
	student *a,*b;
	student stds[3]= {student(3,2.0),student(3,3.0),student(4,2.33)};

	stds[0].addquizscore(1);
	stds[0].addquizscore(4);
	stds[0].addquizscore(10);
	stds[1].addquizscore(10);
	stds[1].addquizscore(4);
	stds[1].addquizscore(9);
	stds[2].addquizscore(9);
	stds[2].addquizscore(8);
	stds[2].addquizscore(7);

	student **stds1= new student*[4];

	stds1[0]= new student (3,2.0);
	stds1[1]= new student(3,3.0);
	stds1[2]= new student(4,2.33);
	stds1[3]= new student(4,1.0);

	stds1[0]->addquizscore(1);
	stds1[0]->addquizscore(4);
	stds1[0]->addquizscore(10);
	stds1[1]->addquizscore(10);
	stds1[1]->addquizscore(4);
	stds1[1]->addquizscore(9);
	stds1[2]->addquizscore(9);
	stds1[2]->addquizscore(8);
	stds1[3]->addquizscore(7);
	stds1[3]->addquizscore(2);
	stds1[3]->addquizscore(3);

	//printstudentarray(stds);
	//printstudentarray(stds1);
	a=gpa2(stds);
	a[0].print();
	b=gpa2(stds1);
	b->print();
	//sortarray(stds);
	///printstudentarray(stds);



}

