#include<iostream>
using namespace std;
main()
{
	long long  n ,x, i;
	cin >> n ;
	long long c[n]; 
	for(long long i=0 ; i<n ;i++)
		cin >> c[i];
    cin >> x ; 
	for( i=0 ; i<n ;i++)
    {
       if(c[i]==x)
       {
       	  cout<<i;
       	  break;
       	  
       }
       
     
      
    }
    if (i==n)
    cout<<-1;
}