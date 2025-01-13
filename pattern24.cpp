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
		int space=i-1;
		while(space)
	 	{
	 	 cout<<" ";
		  space--;
 	    }
    
    
    	//numbers
    	int num=n-i+1;

    	int count =i;
    	while(num)
    	{		
    		cout<<count;
		   	num--;
      		count++;
		}
		 cout<<endl;
		 i++;
	}
}