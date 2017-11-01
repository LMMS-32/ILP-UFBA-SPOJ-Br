#include <iostream>
using namespace std;
int main () {

	long long int L, N;
	cin >> L >> N;
	long long int maximo = L-N+1;
	cout << (maximo*maximo) + N - 1 <<endl;


return 0;
}
