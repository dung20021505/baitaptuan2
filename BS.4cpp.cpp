#include <iostream>
using namespace std;
	int main(){
	    long long a,b,ucln,t;
	    cout << "Nhap vao a va b : ";
	    cin >> a >> b;
	    t=a*b;
	    while (a != b)
		{
	if (a>b)
	a=a-b;
	else 
	b=b-a;
	}  
	ucln=a;
	    cout << "BCNN cua a va b la: ";
	    cout << t/ucln;
	}
