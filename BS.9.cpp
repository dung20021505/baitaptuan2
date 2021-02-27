#include<iostream>
using namespace std;
	int main()
	{
	    int a;
	    cin >> a;
	    int sum=0,d;
	    while(a>0)
	    {
	        d=a%10;
	        a=a/10;
	        sum=sum+d;
	    }
	    cout << "Tong cac chu so cua so ban da nhap la: ";
	    cout << sum;
	    return 0;
	}
