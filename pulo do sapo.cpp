//pulo do sapo
#include <iostream>
#include <string.h>
using namespace std;
 
 
int main (){
    int n_pedras, n_sapos, inicio, pulo, i, j;
    cin>>n_pedras>>n_sapos;
    int pedras[n_pedras];
     
    for (i=0; i<=n_pedras; i++){
        pedras[i] = 0;  
    }
     
    for (i=0; i<n_sapos; i++){
        cin>>inicio>>pulo;
        pedras[inicio-1]=1;
        for(j=(inicio-1); j<= n_pedras;  j+=pulo){
                pedras[j]=1;
        }
        for(j=(inicio-1); j>=0;j-=pulo){
            pedras[j]=1;
        }
    }
     
    for (i=0; i<n_pedras; i++){
        cout<<pedras[i]<<endl;  
    }
 
return 0;
}
