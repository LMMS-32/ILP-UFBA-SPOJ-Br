//pedra = sapo + nº de pulos
#include <iostream>
using namespace std;
int main (){

    int pedrinhas=0, sapao=0, pulo=0;
    cin>>sapao>>pedrinhas; //dizer qtos sapos e qts pedras
    int pedras[pedrinhas];
     
    for (int i=0; i<=pedrinhas; i++)
    { 
        pedras[i] = 0;  
    }
            for (int i=0; i<sapao; i++)
            { 
            cin>>pulo; //os pulos que os bicho dá
                for(int j=0; j<= pedrinhas;  j+=pulo)
                { //fazendo a contagem dos pulos, se for na
                //mesma qtd de pedrinhas, entao soma o nº de pulos
                pedras[j]=1;
                }
                    for(int j=0; j>=0;j-=pulo)
                    {
                    pedras[j]=1;
                    }
        }
     
                    for (int i=0; i<pedrinhas; i++)
                    {
                    cout<<pedras[i]<< " ";  
                    }
                    cout << "\n";
 
return 0;
}
