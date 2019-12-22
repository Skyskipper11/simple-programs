//Array Traversal using while loop
#include<iostream>

using namespace std;
main()
{
	int a=0,b=0,c=0,arr[a];
	cout<<"\n\tWelcome to array traversal program using While loop\n\t How many elements do you want to insert------";
	cin>>a;
	if (a<=0)
	{
		cout<<"\n\t '0' elements can't be inserted \n please retry" ;
	}
	else
	{
		while(b<a)
		{
			cout<<"\n\tplease insert the "<<b<<" element ---";
			cin>>arr[b];
			b++;
		}
		cout<<"\n\t The elements in the array are as follows :\n";
		while(c<a)
		{
			cout<<"\n\tarr["<<c<<"]=  "<<arr[c]<<"\n";
			c++;
		}
	}
		return 0;
}
