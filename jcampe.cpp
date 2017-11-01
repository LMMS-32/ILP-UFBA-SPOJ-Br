#include <iostream>
using namespace std;
int main(){
	
    int cv, ce, cs, fv, fe, fs, pc, pf;
	cin >> cv >> ce >> cs >> fv >> fe >> fs;

	pc = 3*cv+ce;
	pf = 3*fv+fe;
	
	if (( pc < pf ) || ((pc == pf) && (cs < fs)))
		cout << "F" <<endl;
	
			else if ((pc > pf) || ((pc == pf) && (cs > fs)))
				cout << "C" << endl;
	
	
		else 
				cout << "=" << endl;
	
	

return 0;
}

