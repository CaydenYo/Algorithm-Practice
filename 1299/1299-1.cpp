#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    while(getline(cin,str)){
        string temp = "",ans ="";
        for(int i = 0;i < str.length();i++){
            if((str[i] <= 'z' && str[i] >= 'a') || (str[i] <= 'Z' && str[i] >= 'A')){
                temp += str[i];
            }else{
                reverse(temp.begin(),temp.end());
                ans += temp;
                ans += str[i];
                temp = "";
            }
        }
        cout << ans <<endl;
    }
    return 0;
}
