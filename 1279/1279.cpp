#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n;i++){
        string s;
        cin >> s;
        string::size_type pos = s.find("13");
        if(pos == string::npos)
            cout << "Case #" << i << ": Yes, I like it!" << endl;
        else
            cout << "Case #" << i << ": No, it's terrible!" << endl;
    }
    return 0;
}
