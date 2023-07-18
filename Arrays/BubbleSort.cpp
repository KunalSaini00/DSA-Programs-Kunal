#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter no. of elements and value of array: "<<endl;
	int n;
	cin>>n;
	int a[n];
	for (int i=0;i<n;i++)
		cin>>a[i];
	
	int count = 1;
	while(count<n)
	{
		for(int i=0;i<n-count;i++)
		{
			if(a[i]>a[i+1])
			{
				int temp = a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
		count++;
	}
	cout<<"Sorted array: "<<endl;
	for(int i=0;i<n;i++)
		cout<<a[i]<<endl;
	return 0;
}
