  
#include <iostream>
using namespace std;
int main(){
    int n,i,j;
    cout << "Nhap vao n: ";
    cin >> n;
		for (  i = 0; i< n; i++)
		{
			for (  j = 0; j < n; j++)
			{
				if ( j < i) { cout << " ";}
				else { cout << "*";}
			}
		cout << endl;
		}
}
