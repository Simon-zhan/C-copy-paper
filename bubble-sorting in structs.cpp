#include<iostream>
using namespace std;
struct person
{
	char name[20];
	unsigned int id;
	double salary;
};
void input(person[],const int);
void sort(person[], const int);
void output(const person[],const int);
int main()
{
	person allone[100];
	int total;
	cin>>total;
	input(allone,total);
	sort(allone,total);
	output(allone,total);
}
void input(person all[],const int n)
{
	int i;
	for(i= 0;i<n;i++)
	{
		cin>>all[i].name;
		cin>>all[i].id;
		cin>>all[i].salary;
	}
}

void sort(person all[],const int n)
{
	int i,j;
	person temp;
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
			if(all[j].salary>all[j+1].salary)
			{
				temp=all[j];
				all[j]=all[j+1];
				all[j+1]=temp;
			}
	}
}

void output(const person all[],const int n)
{
	for(int i=0;i<n;i++)
		cout<<all[i].name<<" "<<all[i].id<<" "<<all[i].salary<<endl;
}

