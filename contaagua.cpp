#include <iostream>
using namespace std;
int main(){
	
    int N, taxa = 7;
	//N = consumo
    cin >> N;
    if(N >= 101) {
        taxa += (N - 100) * 5;
        N = 100;
    }
    if(N >= 31) {
        taxa += (N - 30) * 2;
        N = 30;
    }
    if(N >= 11) {
        taxa += (N - 10) * 1;
    }
    cout << taxa << endl;

return 0;
}

