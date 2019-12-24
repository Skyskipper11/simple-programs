// deletion at Kth index of an array
#include<iostream>
#include<stdlib.h>
using namespace std;
main()
{
	int n,k,item=0,element=0,j=0;
	int arr[100]={};
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
	cout<<"enter the index where you want to delete the element \n";
	cin>>k;
	if(k<0 || k>n)
	{
		cout<<"\ncannot delete please retry";
		return 0;
	}
	else
	{
	j=k;
	while (j<n)
	{
		arr[j]=arr[j+1];
		j=j+1;
	}
	n=n-1;
	cout<<"aray elements after deletion \n";
	for(int i=0 ;i<n;i++)
	{
	cout<<"arr["<<i<<"] ="<<arr[i]<<"\n";
	}
    }
    }
    return 0;
}
