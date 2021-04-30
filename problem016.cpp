#include <iostream>
#include <math.h>
#include <string>
using namespace std;

long double pds(string n)
{
	long double i,j,temp = 0, sum = 0;
	for (i = 0; i< n.length(); i++)
	{
		if(n[i] == '.')
		{
			break;	
		}
		sum = sum + (n[i] -48);
	}
	return sum;
}

int main()
{
	long double i,j,n =1000,temp = 1,value = 0;
	string str;
	temp = pow(2,n);
	cout << "Power is : " << temp << endl;
	str = to_string(temp)
	cout << str << endl;
	value = pds(str);
	cout.precision(100);
	cout << "Sum is : " << value << endl;
	return 0; 
}
