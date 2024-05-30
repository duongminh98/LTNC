#include<bits/stdc++.h>
using namespace std;
int a[1005];
int main()
{
	int n;
	cin>>n;
	srand(time(NULL));
	for(int i=0;i<n;i++) a[i]=rand()%49+0;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			for(int m=j+1;m<n;m++)
			{
				if((a[i]+a[j]+a[m])%25==0)
				{
					cout<<a[i]<<" "<<a[j]<<" "<<a[m]<<endl;
				}
			}
		}
	}
}
