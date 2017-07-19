#include<iostream>
using namespace std;

int main() {
    short A = 0;
   cin>>A;
    short N = 0;
    cin>>N;
    short resposta = 0;
    for(short i = 0; i < N; i++) {
        short F = 0;
        cin>>F;
        ((A * F) >= 40000000) ? resposta++ : false;
    }
    cout<<resposta<<endl;
    return 0;
}
