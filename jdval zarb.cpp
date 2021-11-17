#include<iostream>
using namespace std;

int main()
{
	int array[100][100] = {0};
	int m,n =0;
	cout<<"please enter m & n :";
	cin>>m>>n;
	
	cout<<"\n";
	for(int i = 1; i <= m ; i++)
	{
		for(int j = 1 ; j <= n ; j++ )
		{
			array[i][j] = (i*j);
		}
	}
	
	for(int d = 1 ; d <= m ;d++ )
	{
		for(int k =1 ; k <= n ; k++)
		{
			cout<<array[d][k]<<"\t";
		}
		cout<<"\n\n";
	}
	return 0;

}
