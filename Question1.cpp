# include<iostream>
using namespace std;
int sumarr(int arr[])
{
	int sum=0,i;
	for(i=0;i<10;i++)
	sum=sum+arr[i];
	return sum;
}
int main()
{
	int i;
	int arr[10];
	cout<<"enter 10 integers.\n";
	for(i=0;i<10;i++)
	cin>>arr[i];
	cout<<"the sum of elements of the array is "<<sumarr(arr);
	return 0;
}
