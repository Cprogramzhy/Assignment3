#include<iostream>
using namespace std;
int main()
{
    int N,K,A;
    cin>>N>>K;
    int a[10000];
    int m=0, count=0;
    for (int i=0;i<N;i++)
    {
        cin>>a[i];
    }
    for (int j=0;j<N&&count!=K;j++)
    {
        m=a[j];
        A=m;
		count=0;
        for (int j=0;j<N;j++)
        if (m<=a[j])
        {
            count++;
        }
    }
    cout<<A<<endl;
    return 0;
}