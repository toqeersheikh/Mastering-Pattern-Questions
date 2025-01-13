#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i=1;
	while(i<=n)
	{
		//print 1st triangle
		int start =n-i+1;
		int count =1;
		while(start)
		{
		 	cout<<count<<" ";
		 	count++;
		 	start--;
		}

		//print 2nd triangle

		int start2=(i-1)*2;

			while(start2)
			{
			 cout<<"* ";
  	 		 start2 --;
			}

	
		//print 3rd triangle
		int start3 =n-i+1;

		while(start3)
		{
		 	cout<<start3<<" ";
		 	start3--;

		}
		 cout<<endl;
		 i++;
	}
}