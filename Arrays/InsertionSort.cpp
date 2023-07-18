#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter size of array: "<<endl;
	int n;
	cin>>n;
	int a[n];
	cout<<"Enter elements of array: "<<endl;
	for(int i=0;i<n;i++)
		cin>>a[i];
		
	for(int i=1;i<n;i++)
	{
		int current = a[i];
		int j=i-1;
		while(a[j]<current && j==0)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=current;
	}
	cout<<"Sorted array is: "<<endl;
	for(int i=0;i<n;i++)
		cout<<a[i]<<endl;
	return 0;
}
