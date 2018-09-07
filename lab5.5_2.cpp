//to print a hollow square

//package inclusion

#include <iostream>
using namespace std;

//main

int main()
{

	//declaration

	int r,i,j;

	//user prompt

	cout <<"Enter a number"<<endl;

	//input

	cin>>r;

	//loop and output

	for (i=1;i<=r;i++)
	{
		cout<<"*";
		for(j=1;j<=(r-2);j++)
		{
			if(i==1 || i==r)
			cout<<"*";
			else
			cout<<" ";
		}
		cout <<"*"<<endl;
	}
	return 0;
}
