#include<iostream>

using namespace std;

int main()
{
	int T;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		long n,k,x;
		cin>>n>>k;
		long arr[n];
		for(int j=0;j<n;j++)
		{
			cin>>arr[j];
		}
		int p,c=0;
		long min=1000000000;
		for(int l=0;l<n;l++)
		{
			if(k%arr[l]==0)
			{
			   x=k/arr[l];
			   if(min>x)
			   {
			     min=x;
				 p=l;	
			   }	
			   c++;
			}
		}
		
		if(c==0)
		{
			cout<<"-1"<<"\n";
		}
		else
		cout<<arr[p]<<"\n";
		
	}
}
