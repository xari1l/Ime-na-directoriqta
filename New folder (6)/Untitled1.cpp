#include<iostream>
using namespace std;
int main()
{
    int a[10],n,sum,Sumkoloni,sumeven,sumodd,sumavg,even,avg;
    cout<<" redove";
    cin>>n;
    for(int i=0;i<n;i++)
    
    {
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"  ";
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
   		sum+= a[i];
	}
    cout<<"sumata e :"<<sum<<endl;
    
     for(int i=0;i<n;i++)
    {
    	if(a[i]%2==0)
    	sumeven+=a[i];
    
	}
	cout<<"suma chetni ="<<sumeven<<endl;
	for(int i=0;i<n;i++)
	{
		sumavg += a[i];
	}
	avg=sumavg/n;
	cout<<"average"<<avg<<endl;
    return 0;    
}
