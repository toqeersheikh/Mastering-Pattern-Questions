#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i=1;
	while(i<=n)
	{
		int start=(i-1)*2;
			
			while(start)
			{
			 cout<<"*";
  	 		 start --;
			}

	  cout<<endl;
   i++;

	}
}