#include <iostream>  
using namespace std;  
int main()  
{  
    int N;
	double K;  
    double price = 200;    
    int year =1;  
	cin>>N>>K;

        while( year*N<price )  
        {   
	    price = price*(1.0+K/100);  
		year++;
		if(year>20)
			break;
}

            if(year>20)  
                
                cout<<"Impossible"<<endl; 
           
        else if(year<=20)  
		cout<<year<<endl;
		
    return 0;  
}  
