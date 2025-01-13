#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i=1;
	
	while(i<=n)
	{
		//spaces
		int space=n-i;
		while(space)
		{
		 	cout<<" ";
		  	space--;
		}
		 
 	   //numbers
 	      int num=1;
       while(num<=i)
       {
       	cout<<i;
       	num++;
       	
	   }
       cout<<endl;
       i++;
		 	 
				  	
	}
}

