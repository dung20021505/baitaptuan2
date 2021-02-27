#include<iostream>
using namespace std;
	int main()
	{
	    double n, sum=0, t=1;
	    while(true)
	    {
	        cout << "Diem mon hoc thu " << t << ":";
	        cin >> n;
	        if(n>10) 
	        {
	            cout << "Nhap lai diem mon hoc " << t << ":";
	            cin >> n;
	        }
	        if(n>=0 && n<=10)
	        sum=sum+n;
	        if(n<0) break;
	        t++;
	    }
	    if(t==1) cout << "0";
	    else cout << "Diem trung binh cua " << t-1 << " mon hoc:" << sum/(t-1);
	    return 0;
	}

