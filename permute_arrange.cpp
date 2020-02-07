#include<iostream>
#include<math.h>
using namespace std;
void input(char ar[],int r)			
{
	char i='a';
	for(int j=0;j<r;j++)
	{
		ar[j]=i;
		i++;
	}
}
int check_1(int num)
{
	int r,sum=0;
	while(num!=0)
	{
		r=num%10;
		sum=sum+r;
		num=num/10;
	}
	return sum;
	
}
int check_2(int num)
{
	int r,pro=1;
	while(num!=0)
	{
		r=num%10;
		pro=pro*r;
		num=num/10;
	}
	return pro;
}
int main()
{
	int i,n,sum=0,pro=1;
	cout<<"Enter number of Characters:";
	cin>>n;
	char arr[n];
	input(arr,n);
	int m[n];
	for(int i=0;i<n;i++)
	{
		m[i]=arr[i]-96;
	}
	for(i=0;i<n;i++)
	{
		sum+=m[i];
	}
	for(i=0;i<n;i++)
	{
			pro*=m[i];
	}
	cout<<"\nPOSSIBLE COMBINATIONS ARE:\n";
	for(i=pow(10,n-1);i<pow(10,n);i++)
	{
		
		int s=check_1(i);
		int p=check_2(i);
		if(s==sum && p==pro)
		{
			int num=i,k=0;
			char arr2[n];
			while(num!=0)
			{
				int r=num%10;
				arr2[k]=r+96;
				k++;
				num=num/10;
			}
			for(int l=0;l<n;l++)
			{
				cout<<arr2[l];
			}
			cout<<"\n";
		}
	}
	return 0;
	
}
