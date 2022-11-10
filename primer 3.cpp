#include <iostream>
using namespace std;
int main()
{
	int q;
    cout<<"sonni kiriting =";
	cin>>q;
	q=(q%10*100)+q%100/10*10+q/100;
	cout<<q;
    return 0;      
}