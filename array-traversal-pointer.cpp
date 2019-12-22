//Array traversal using pointer
#include<iostream>
using namespace std;
int main()
{
	int a=0,b=0,c=0,arr[a];
	int *point=&arr[0];
	cout<<"\n\tWelcome to array traversal program using pointer loop\n\t How many elements do you want to insert------";
	cin>>a;
	if (a<=0)
	{
		cout<<"\n\t '0' elements can't be inserted \n please retry" ;
	}
	else
	{
		for(int i =0;i<a;i++)
		{
			cout<<"\n\tplease insert the "<<i<<" element ---";
			cin>>arr[i];
		}
	cout<<"\n\t The elements in the array are as follows :\n";
	for(int i=0;i<a;i++)
	{
		cout<<"\n\t arr["<<i<<"] = "<<*point;
		point++;
	}
	}
	return 0;
}
