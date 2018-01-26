#include <iostream>
#include <string.h>
#include <stdlib.h> //p usar null
#include <locale> // p usar isspace
using namespace std;
int main()
{
	char code[200];
	cin>> code;
		/*char *msg = strtok(code, "012345789/ ");
			while (msg != null)
			{
				//para verificacao
				msg = strtok (null, "0123456789/ ")
			}*/
				char * msg;
				msg = strtok (code, " 0123456789sadgt/");
				while (msg !=NULL)
				{
					cout<<msg;
					msg = strtok (NULL, " 0123456789sadgt/.128");

				}
				cout<<"\n";


	return 0;
}