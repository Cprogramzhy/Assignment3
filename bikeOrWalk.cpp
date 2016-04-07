#include <iostream>
using namespace std;
int main()
{
	int n,b[1000];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
	for(int j=0;j<n;j++)
	{
		double x=(double)b[j]/3 +50;
     	double y=(double)b[j]/1.2;
	
	if (x>y)
		cout<<"Walk"<<endl;
    else if(x<y)
		cout<<"Bike"<<endl;
	else if(x=y)
		cout<<"All"<<endl;
	}
	
    return 0;
}
	