#include <iostream>
using namespace std;
int main()
{
	int Myu,Mcity,Arsenal,Liverpul;
	cout<<                                        "LIGA CHEMPIONOV UEFA"<<endl;
	cout<<             "POLUFINAL 1/2"<<endl;     
	cout<<"MANCHESTER U : MANCHESTER CITY"<<endl;
	cin>>Myu;
	cin>>Mcity;
	if (Myu>Mcity)
	{
	cout<<"Myu=Mcity"<<endl;
	cout<<"Myu ="<<Myu<<endl;	
	}
	else if (Myu<Mcity)
	{
	cout<<"Mcity viigral="<<Mcity<<"golov\n";
	}
	return 0;
}
