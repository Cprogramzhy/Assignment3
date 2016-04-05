#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int h,fty,tty,ten,fi,a;
	h=n/100;
	fty=(n-100*h)/50;
	tty=(n-100*h-50*fty)/20;
	ten=(n-100*h-50*fty-20*tty)/10;
	fi=(n-100*h-50*fty-20*tty-10*ten)/5;
	a=n-100*h-50*fty-20*tty-10*ten-5*fi;
	cout<<h<<endl;
	cout<<fty<<endl;
	cout<<tty<<endl;
	cout<<ten<<endl;
	cout<<fi<<endl;
	cout<<a<<endl;

	return 0;
}
