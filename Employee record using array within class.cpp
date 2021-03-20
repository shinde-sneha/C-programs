#include<iostream>

using namespace std;
const int n=100;
class Employee
{
	private:
		char Id[n];
		float age[n];
		int salary[n];
		int count;
	
	public:
		void Count()
		{
			count=0;
		}
		void getdata();
		void putdata();
		void remove();
		
};

void Employee::getdata()
{
	cout<<"\nEnter Id number:";
	cin>>Id[count];
	cout<<"\nEnter age:";
	cin>>age[count];
	cout<<"\nEnter salary:";
	cin>>salary[count];
	count++;
}

void Employee::putdata()
{
	int i;
	for(i=0;i<count;i++)
	{
		cout<<"\nId:"<<Id[i];
		cout<<"\nAge:"<<age[i];
		cout<<"\nSalary:"<<salary[i]<<endl;		
	}
	
}



int main()
{
	Employee record;
	record.Count();
	int x;
	
	do
	{
		cout<<"\nEnter your choice:";
		cout<<"\n1-->Add record \n2-->Display all records \n3-->exit"<<endl;
		
		cin>>x;
		
		switch(x)
		{
			case 1: record.getdata();
					break;
			
			case 2: record.putdata();
					break;
			 
			case 3: break;
			
			default:cout<<"Please Enter the Numbers between 1 and 4";
		}
	}while(x!=3);
	return 0;
}



