#include<iostream>
using namespace std;

const int size=5;
class student
{
	private:
		int roll_no;
		int marks[size];


	public:
		void getdata();
		void total_marks();
};

void student::getdata()
{
	cout<<"\nEnter roll no:";
	cin>>roll_no;
	for(int i=0; i<size; i++)
	{
		cout<<"Enter marks in subject"<<(i+1)<<" are :";
		cin>>marks[i] ;
	}
}

void student::total_marks() 
{
	int total=0,i;
	for(i=0;i<size;i++)
	{
		total=total+marks[i];
		
	}
	cout<<"\nTotal marks "<<total;
		
}

int main()
{
	student s;
	s.getdata() ;
	s.total_marks() ;
	return 0;
}



