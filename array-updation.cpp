// Update a element in the array
#include<iostream>
using namespace std;
main()
{
int n=0,k=0,element=0,j=0,item=0;
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
	
	cout<<"\n\t please enter the ITEM to be updated ";
	cin>>item;
	while (j<n)
	{
		if(arr[j]==item)
		{
			cout<<"\n\t found the element at the index "<<j<<" of the array";
			cout<<"\n\t please enter the new element";
			cin>> element;
			arr[j]=element;
			break;
		}
		j=j+1;
	}
	cout<<"\n\t Elements of the updated array are \n";
	for(int i=0;i<n;i++)
	{
		cout<<"arr["<<i<<"] ="<<arr[i]<<"\n";
	}		
	}
	return 0;
}
