//guerra por territorio
#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
    int main (){
    int entradas,i,partes, u, soma, area_metade; 
    soma=0;
    area_metade=0;
    cin>>entradas;
    int secoes[entradas];
    //povoando o bendito vetor
    for (i=0; i<entradas; i++){
        cin>>partes;
        secoes[i]=partes;
         
    }
     
    //teste se t� povoadinho
    for (i=0; i<entradas; i++){
    }
     
    //tentar somar as paradas
    for (i=0; i<entradas; i++){
    soma = soma + secoes[i];
    }
     
    //teste da divis�o
         
            for (i=0; i<entradas; i++){
            area_metade += secoes[i];
            if(area_metade==soma/2){
            cout<<i+1<<endl;
            }
            }
     
    return 0;
}
