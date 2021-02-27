#include <iostream>
using namespace std;
	int main()
	{
	    int n,i,j,k;
	    cin >> n;
	    for (int i = 1; i <= n; i++)
	     
	    {
	    	for ( k = 1; k < i ; k++){
			
	            cout << " ";
	    }
	        for ( j=2*n+1-2*i; j > 0; j--)
	        {
	            cout << "*";
	        }
	        cout << endl;
	    }
	}
	
