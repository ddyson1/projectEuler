#include <iostream>
using namespace std; 

bool isValid(int);

int main()
{
	int pal, final;
	//find the largest product
		for (int a = 999; a >= 100; a--)
		{
			for (int b = 999; b >= 100; b--)
			{	
				pal = a * b;
				if (isValid(pal))
					cout << pal << endl;
			}
		}
		return final; 
}

bool isValid(int num)
{
	bool status = true;
	int digit, rev=0, ck_num; 
	ck_num = num;

	//tests for palidrome
	while(num)
	{
		digit = num % 10;
		num /= 10;
		rev = rev * 10 + digit;
	}

	if (rev == ck_num)
		status = true;
	else 
		status = false;
	return status;
}
