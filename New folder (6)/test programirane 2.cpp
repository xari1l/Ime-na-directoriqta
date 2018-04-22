#include<iostream>
using namespace std;
int main()
{
    int i,j,a[10][20],n,m,sum,sumgd;
    cout<<"redove: ";
    cin>>n;
    cout<<"koloni: ";
    cin>>m;
    for(i=0;i<n;i++)
    for(j=0;j<m;j++)
    {
        cout<<"a["<<i<<"]["<<j<<"]=";
        cin>>a[i][j];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        cout<<a[i][j]<<"  ";
        cout<<endl;
    }
    for(int i=0; i<n; i++) 
       for(int j=0; j<m; j++)
           sum+=a[i][j];
    cout<<"Sumata za masiva e"<<sum<<endl;
    
    for (i=0;i<n;i++)
	{	
		for (j=0;j<m;j++) 
		{
			if (i>j) 
			sumgd +=a[i][j];
			
		}
	}
	cout<<sumgd;
    return 0;
}
   
