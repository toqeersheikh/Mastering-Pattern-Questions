#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i=1;
	
	while(i<=n)
	{
		
		//printing spaces
		int spaces=n-i;
			
		while(spaces)
  		{
  		 	cout<<" ";
	   		spaces--;
		}
		
		//printing stars
		
		int j=1;
		while(j<=i)
		{
		  //cout<<"*"; two varients- play around to check difference
		  cout<<"* ";
		  j++;	 	
		}	
		cout<<endl;
		i++;	     
	}
}