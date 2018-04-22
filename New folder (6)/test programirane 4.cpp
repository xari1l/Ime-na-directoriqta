#include <iostream> 
using namespace std;
long long int recurse (int i)
{
    if(i>1)
    return (i* recurse(i-1));
   else
return 1;
}
int main()
{
   int n;
   cout<< "n=";
   cin>> n;
    cout<< n<< "!="<< recurse(n);
   return 0;
}
