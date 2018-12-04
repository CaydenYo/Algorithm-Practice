#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;
int main()
{
    int i,j,k,length;
    int w,x,y,z;
    int count;
    int isPN;
    string num, temp;
    while(cin >> num)
    {
        count = 100;
        while(count)
        {
            isPN = 1;
            for(i = 0, length = num.size()-1; i < length; i++, length--)
            {
                if(num.at(i) != num.at(length))
                {
                    isPN = 0;
                    break;
                }
            }
            if(isPN == 1)
            {
                cout << num << endl;
                break;
            }
            else
            {
                cout << num << "--->";

                temp = "";
                z = 0;
                for(int j = num.size()-1; j>=0; j--)
                {
                    w = num.at(j) - '0';
                    x = num.at(num.size()-1 - j) - '0';
                    y = (w + x + z) % 10;
                    temp += (char)(y + '0');
                    z = (w + x + z) / 10;
                }
                if(z == 1)
                    temp += (z + '0');
                num = temp;
                reverse(num.begin(),num.end());
                count--;
            }
        }
    }
    return 0;
}
