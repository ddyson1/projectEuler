#include <iostream>
using namespace std;

void factors(long long n){
	long long z = 2;
	while (z * z <= n) {
		if (n % z == 0) {
			cout << z << endl;
			n /= z;
		} else {
			z++;
		}
	}
	if (n > 1){
		cout << n << endl;
	}
}

int main(int argc,char *argv[]) {
	long long r = atoll(argv[1]);
	factors(r);
}
