#include <iostream>
using namespace std;
int main()
{
	int a,b1,b2,b3,b4,summa2,pro2;
	cout<<"sonni kiriting =";
	cin>>a;
    b1=a%10;
    b2=(a/10)%10;
    b3=(a/100)%10;
    b4=(a/1000)%10;
    summa2=b1+b2+b3+b4;
    pro2=b1*b2*b3*b4;
    cout<<summa2<<endl;
    cout<<pro2<<endl;
    return 0;
}