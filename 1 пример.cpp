#include <iostream>
using namespace std;
int main()
{
	int a,b1,b2,sum,pro;
	cout<<"sonni kiriting =";
	cin>>a;
    b1=a/10;
    b2=a%10;
    sum=b1+b2;
    cout<<sum<<endl;
    pro=b1*b2;
    cout<<pro;
    return 0;
}