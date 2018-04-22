#include<iostream>
using namespace std;
int sumaa(int n , int m,int sum, a[i][j])
{
	int suma;
	 for(int i=0;i<n;i++)
    {
    	for(int j=0;j<m;j++)
    	{
    		sum+= a[i][j];
		}
    	
	}
	return(suma);
}
int main()
{
    int a[10][20],n,m,sum,Sumkoloni;
    cout<<" redove";
    cin>>n;
    cout<<" koloni ";
    cin>>m;
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    {
        cout<<"a["<<i<<"]["<<j<<"]=";
        cin>>a[i][j];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        cout<<a[i][j]<<"  ";
        cout<<endl;
    }
    cout<<"sbor na otdelnite koloni"<<endl;
    for(int j=0;j<m;j++)
    {
        Sumkoloni=0;
        for(int i=0;i<n;i++)
        Sumkoloni=Sumkoloni+a[i][j];
        cout<<Sumkoloni<<" ";
    }
   
    cout<<"sumata e :"<<sumaa(int i , int j , int n , int m);
    return 0;
}
