#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int age;
	double n;
	double a=0,b=0,c=0,d=0;
	cin>>n;	
	for (int i=0;i<n;i++)
		{
			cin>>age;
		 if(age>=1&&age<=18) a++;    
         if(age>=19&&age<=35) b++;    
		 if(age>=36&&age<=60) c++;            
         if(age>60) d++; 
		}
	cout<<"1-18: "<<fixed<<setprecision(2)<<a*100/n<<"%"<<endl;
	cout<<"19-35: "<<fixed<<setprecision(2)<<b*100/n<<"%"<<endl;
	cout<<"36-60: "<<fixed<<setprecision(2)<<c*100/n<<"%"<<endl;
	cout<<"60-: "<<fixed<<setprecision(2)<<d*100/n<<"%"<<endl;
	return 0;
}

