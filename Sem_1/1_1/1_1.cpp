#include <iostream>

using namespace std;

int main ()
{
	
	int a,b,c;
	cin>> a>>b>>c;
	if ((a>=b)&&(a>c))
	{
		cout<<"max="<<a;
	}
	else
	{
		if (b>=c)
		{
			cout<<"max="<<b;
		}
		else 
		{
			cout<<"max="<<c;
		}
	}
}
