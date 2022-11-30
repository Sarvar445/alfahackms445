#include <iostream>
#include <math.h>
using namespace std;
int main()
{
float x1=-2.5,x2=6.25,x3;
cout<<"vvedite zna4enie x3=";
cin>>x3;
if (x3>-sqrt(fabs(x1)))	
{
	y=-M_PI/2+5*(pow(x2,2));
	cout<<"po pervoie formule y="<<y;
}
else
{
	y=0.7-(x1/2);
	cout<<"po vtoroi formule y=";
}
cout<<y;
return 0;
}