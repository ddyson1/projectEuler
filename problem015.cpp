#include <iostream>
using namespace std;

const int gridSize = 20;
long paths = 1;

int main() {

for (int i = 0; i < gridSize; i++) {
	paths *= (2* gridSize) - i;		
	paths /= i + 1;
}

printf("%ld\n", paths);

}

//137846528820
