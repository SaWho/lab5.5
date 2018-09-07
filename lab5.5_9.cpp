//to print hollow star pattern wiith diagonal
#include <iostream>
using namespace std;
int main()
{
	//initialisation

	int i,j,r;

	//user prompt

	cout<<"Enter the number of rows."<<endl;
	
	//input

	cin>>r;

	//loop

	for (i=1;i<=r;i++)
	{

		if(i!=r)
			for(j=1;j<=(i-2);j++)
			{
				cout <<" ";
			}
		else
			for(int k=1;k<=(r-2);k++)
			cout <<"*";
		 
		cout <<"*"<<endl;
		cout<<"*";
	}
	return 0;
}
