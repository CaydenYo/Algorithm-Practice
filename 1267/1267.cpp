#include <iostream>

using namespace std;
typedef long long ll;
  int i,j,k;
 ll A[51][51][51];
ll f(int a,int b,int c)
{
    if(a<0||b<0||c<0)
        return 2;
    if(a>50||b>50||c>50)
        return 1;
    if(A[a][b][c]!=0)
        return A[a][b][c];
    A[a][b][c]=f(a+1,b+2,c+3)+f(a-3,b-2,c-1);
    return A[a][b][c];
}
int main()
{   int a,b,c;

     while(!(cin>>a>>b>>c).eof())
     {
         cout<<f(a,b,c)%10000007<<endl;
     }


    return 0;
}
