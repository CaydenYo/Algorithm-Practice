#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;

    while(!(cin>>n).eof())
    {  int k=2,j=0;
        //int i=n/2+1;
        //可能是本身
        int i=n;
        while(k<=i)
        {
            if(n%k==0)
            {
                n=n/k;j++;
                continue;
            }
            if(j>0&&n!=1)
                cout<<k<<"^"<<j<<"X";
            else if(j>0&&n==1)
                cout<<k<<"^"<<j;

            k++;j=0;
        }
        cout<<endl;

    }
    return 0;
}

/*#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    while(true){
        cin >> n;
        int count = 0;
        bool isfirst = true;
        while(n % 2 == 0){
                n = n/2;
                count++;
            }
        if(count > 0){
            if(!isfirst)
               cout << "X";
            cout << 2 << "^" << count;
            isfirst = false;
            count = 0;
        }
        for(int i = 3;i <= n;i+=2){
            while(n % i == 0){
                n = n/i;
                count++;
            }
            if(count > 0){
              if(!isfirst)
                cout << "X";
              cout << i << "^" << count;
              isfirst = false;
              count = 0;
            }
        }
        cout << endl;
    }
    return 0;
}
*/
