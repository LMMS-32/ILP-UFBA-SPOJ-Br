#include <iostream>
using namespace std;

int main()
{
    int v, i = 0, j = 0, k = 0, l = 0, t = 0;
    
    cin>>v;
    
    while (v != 0)
    {
        cout<<"Teste \n"<< ++t<<endl;
        
        while (v >= 50)
        {
            v -= 50;
            i++;
        }
        while (v >= 10)
        {
            v -= 10;
            j++;
        }
        while (v >= 5)
        {
            v -= 5;
            k++;
        }
        while (v >= 1)
        {
            v -= 1;
            l++;
        }
        
       cout<< i << j << k << l<<endl;
        
        i = j = k = l = 0;
        
        cin>>v;
    }
    
    return 0;
}
