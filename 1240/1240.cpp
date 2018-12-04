#include <iostream>

using namespace std;
int main()
{
    while(true){
      int n;
      cin >> n;
      int t = n,s =0;
      while(t)
      {
        s += t%10;
        t = t/10;
      }
      if(n%s==0)cout<<"yes"<<endl;
      else cout<<"no"<<endl;
   }
   return 0;
}
