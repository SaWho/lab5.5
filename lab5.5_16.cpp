#include <iostream>
using namespace std;
int main()
{
	//initialization

	int r,i,j;

	//user prompt

	cout <<"Enter the number of rows"<<endl;

	//input

	cin>>r;

	//loop	
	
	for (i=0;i<r;i++)
	{
		for(j=r-1;j>i;j--)
			cout<<" ";
		for(j=1;j<=(2*i+1);j++)
			cout <<"*";
		cout<<endl;

	}

	return 0;
}
