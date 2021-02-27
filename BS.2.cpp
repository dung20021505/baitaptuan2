#include<iostream>
using namespace std;
	int main()
	{
	    double x,a=1;
	    int y,i;
	      cout << "nhap  so thuc x va so nguyen  y: "; 
	      cin >> x >> y;
	    for(i=1;i<=y;i++)
	      a=x*a;
	      cout << "x^y = ";
	      cout << a;
	    return 0;
	}
