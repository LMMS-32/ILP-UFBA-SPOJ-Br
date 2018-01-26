#include<iostream>
using namespace std;
int main()
{
	int N=0, M=0, soma=0;
	
		cin>>N>>M;
		int matriz[N][M];
			//semeando a parada
			for(int i=0; i<N; i++)
			{
				for (int j=0; j<M; j++)
				{
					cin>>matriz[i][j];
				}
			}
			//escolhendo linha impar
			for(int i=0; i<N; i+=2)
			{
				for (int j=0; j<M; j++)
				{				
				soma+=matriz[i][j];
				}
			}
				cout<<soma<<endl;


	return 0;
}