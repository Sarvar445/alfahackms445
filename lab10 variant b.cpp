#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float x,y;
	cout<<"vvedite zna4enie x=";
    cin>>x;
    if (x>2)
    {
    	y=pow(x,2)-2*x+2;
    	cout<<"po pervoi formelu y=";
	}
	else if (0<=x<=2)
	{
		y=fabs(x);
		cout<<"po vtoroi formelu y=";
	}
	else
	{
		y=-pow(x,2)-2*x+4;
		cout<<"po tretyey formelu y=";
	}
	cout<<y;
	return 0;
}
