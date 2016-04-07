#include <iostream>
using namespace std;
int main() 
{
    int n,k;
    cin >> n >> k;
    int x[1000];
    for (int i = 0; i < n; i++) 
	{
        cin >> x[i];
    }
    for (int i = 0; i < n-1; i++) 
	{
        for (int j = i + 1; j < n; j++) 
		{
            if (x[i] + x[j] == k) 
            {
				cout << "yes" << endl;
			return 0;
			}
        }
    }
    cout << "no" << endl;
    return 0;
}