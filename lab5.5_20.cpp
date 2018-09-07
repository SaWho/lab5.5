#include <iostream>
using namespace std;
int main()
{
	//initialisation

	int i,r,j;

	//user prompt

	cout <<"Enter the number of rows(of the form 10k-1)";

	//input

	cin>>r;

	//loop

	for (i=r;i>=1;i--)
	{
		for (j=(abs((r+1)/2-i));j<(r+1)/2;j++)
			cout<<"*";
		cout <<endl;
	}
	return 0;

}
