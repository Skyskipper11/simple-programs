// Sequential search of ITEM in a linear array
#include<iostream>
using namespace std;
int main()
{
	int n,k,item=0,element=0,j=0;
	int arr[n]={};
	cout<<"please enter the number of elements to be inserted \n";
	cin>>n;
	if(n<=0)
	{
		cout<<"\n please enter valid data";
		return 0;
	}
	else
	{
	for(int i=0;i<n;i++)
	{
		cout<<"enter the "<<i<<"th element\n";
		cin>>arr[i];
	}
	cout<<"original elements are given as \n";
	for(int i=0 ;i<n;i++)
	{
	cout<<"arr["<<i<<"] ="<<arr[i]<<"\n";
	}
	
	cout<<"\n\t please enter the ITEM to be found ";
	cin>>item;
	while (j<n)
	{
		if(arr[j]==item)
		{
			cout<<"\n\t found the element at the index "<<j<<" of the array";
			break;
		}
		j=j+1;
	}
			
	}
	return 0;
	}
