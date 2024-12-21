#include<iostream>
using namespace std;
main()
{
	int t ;
	cin >> t ;
	char c[t];
	for(int i=0 ; i<t ;i++)
	 
		cin >> c[i];
	for(int i=0 ; i<t ;i++)
	{ 
	
		if(c[i] == 'c' || c[i] == 'o'|| c[i] == 'd' || c[i] == 'e'||c[i] == 'f' || c[i] == 'r'|| c[i] == 's')
		   cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
 
	 } 
	
}