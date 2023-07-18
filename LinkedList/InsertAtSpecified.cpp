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
	int ele, loc;
	cout<<"Insert element to be inserted and location: "<<endl;
	cin>>ele>>loc;
	for(int i=n-1;i>=loc;i--)
		a[i+1]=a[i];
	a[loc]=ele;
	cout<<"New Array: "<<endl;
	for(int i=0;i<n+1;i++)
		cout<<a[i]<<endl;
	return 0;
}
