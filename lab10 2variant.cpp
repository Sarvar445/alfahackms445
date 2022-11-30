#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	float x,y;
	cout<<"vvedite kordinatu osi x=";
	cin>>x;
	cout<<"vvedite kordinatu osi y=";
	cin>>y;
	if (y<=1) 
	cout<<"<naxoditsya vnutri kruga>";
	else 
	if(y<fabs(x) && y>0)
	cout<<"<naxoditsya vnutri kruga>";
	else 
	cout<<"<naxoditsya vne kruga>"<<endl;
	return 0;
}