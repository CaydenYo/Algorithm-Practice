#include <iostream>

using namespace std;

bool OddOnes(int x)
{
    int cnt = 0;
    while(x)
    {
        cnt++;
        x &= x-1;
    }
    return cnt & 1;
}

int main()
{
    char t[6];
    while(cin>>t)
    {
        int sum;
        sum=(t[0]-'0')*10+(t[1]-'0')+(t[3]-'0')*10+(t[4]-'0');


        if(OddOnes(sum))
           cout<<"Run!"<<endl;
        else cout<<"Stay~~"<<endl;
    }

    return 0;
}
