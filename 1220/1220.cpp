#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    while(true){
        string keyword;
        string sentence;
        cin >> keyword;
        cin >> sentence;
        for(int i = 0;keyword[i];i++)
        {
           if(keyword[i] >= 'A'&&keyword[i] <= 'Z')
              keyword[i] += 32;
        }
        for(int i = 0;sentence[i];i++)
        {
           if(sentence[i] >= 'A'&&sentence[i] <= 'Z')
              sentence[i] += 32;
        }
        cout << keyword  << endl;
        cout << sentence << endl;
    }
    return 0;
}
