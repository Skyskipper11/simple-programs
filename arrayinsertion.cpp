// insertion at Kth index of an array
#include<iostream>
#include<stdlib.h>
using namespace std;
main()
{
	int n=0,k=0,item=0,element=0,j=0;
	int arr[n];
	cout<<"please enter the number of elements to be inserted \n";
	cin>>n;
	if(n<=0)
	{
		cout<<"\n please enter valid data";
		return 0;
	}
	else
	{
	j=n;
	
	for(int i=0 ;i<n;i++)
	{
		cout<<"enter the "<<i<<"th element\n";
		cin>>arr[i];
		
	}
	cout<<"original elements are given as \n";
	for(int i=0 ;i<n;i++)
	{
	cout<<"arr["<<i<<"] ="<<arr[i]<<"\n";
	}
	cout<<"enter the index where you want to insert the new element \n";
	cin>>k;
	if(k<=0 || k>j+1)
	{
		cout<<"\ncannot insert please retry";
		return 0;
	}
	else{
	
	n=n+1;
	while (j>=k)
	{
		arr[j+1]=arr[j];
		j=j-1;
	}
	cout<<"enter the element to be inserted\n";
	cin>>item;
	arr[k]=item;
	cout<<"aray elements after insertion \n";
	for(int i=0 ;i<n;i++)
	{
	cout<<"arr["<<i<<"] ="<<arr[i]<<"\n";
	}
    }
    }
    return 0;
}
