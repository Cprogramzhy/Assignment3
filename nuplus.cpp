#include <iostream>
using namespace std; 
int main()
{
int a,sum=0,b[5];
cin>>a;
for(int i=0;i<5;i++)
{
cin>>b[i];
if(b[i]<a)
{
sum=sum+b[i];
}
}
cout<<sum<<endl;
return 0;
}





