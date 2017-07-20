ddgv #include <iostream>
using namespace std;
int main()
{
	//int A=2, B=3, C=5;
	int A, B, C;
	cin >> A >> B >>C;
	//if ( A == B == C)
	//(A/2, B/3, C/5);
	//if (A < B && A <C)
	cout <<min(A/2, min(B/3, C/5))<<endl;
	
	return 0;
}


