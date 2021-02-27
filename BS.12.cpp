#include<iostream>
#include<math.h>
using namespace std;
		int main()
	{
	    int a;
	    do{
	    cout << "nhap vao ban phim 1 so nguyen duong: ";
	    cin >> a;
	    }
	    while(a<=0);
	    if(sqrt(a)*sqrt(a)==a)
	    cout << a << " day la so chinh phuong ";
	    else cout << a << " khong  phai so chinh phuong ";
	    return 0;
	}
