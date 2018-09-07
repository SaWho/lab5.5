//to print rhombus star pattern

//inclusion of packages

#include <iostream>
#include <string>
using namespace std;

//main

int main()
{

	//initialisation

	int i,j,r;
	string s;

	//user prompt

	cout<<"Enter the row/column number. "<<endl;

	//input

	cin>>r;

	//loop 

	for(i=r;i>=1;i--)
	{
			for(j=1;j<=i;j++)
			{

				cout <<" ";

			}

			for(j=1;j<=r;j++)
			cout <<"*";
		cout <<endl;
	}
	return 0;

}
