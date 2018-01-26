#include <iostream>
#include <string.h>
using namespace std;
int main (int argc, char *argv[])
{
	char str1[300], str2[300];

		cin>>str1;
		cin>>str2;

		if(strstr(str2, str1))
			cout<< "Possui sequencia" <<endl;
		else
			cout<< "Nao possui sequencia" <<endl;
		return 0;
}
