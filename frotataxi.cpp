#include <iostream>
using namespace std;
int main(){
	
	float Ra, Rg, pa, pg;
	cin >> pa >>pg >> Ra >> Rg;
	if ((pa/Ra) < (pg/Rg))
		cout << "A" <<endl;

		else
			cout << "G" << endl;

return 0;
}

