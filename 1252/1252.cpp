#include <iostream>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n,bits;
        cin>>n>>bits;
        bits %= n;
        int data[n],_data[n];
        for(int i = 0;i < n;i++){
            cin>>data[i];
            if(i+bits < n)
                _data[i+bits] = data[i];
        }
        for(int i = 0;i < bits;i++)
            _data[i] = data[i+n-bits];
        for(int i = 0;i < n;i++){
            cout<<_data[i];
            if(i != n-1)
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}

/*#include <iostream>
using namespace std;

int main()
{
    int n,j,k;
    int array1[1000];
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> j >> k;
        for(int m = 0;m < j;m++){
            cin >> array1[m];
        }
        int circum = k % j;
        while(circum--)
        {
          char temp = array1[j-1];
          for(int i = j-1;i>=1;i--)
          array1[i] = array1[i-1];
          array1[0] = temp;
        }
        for(int m = 0;m < j;m++){
            cout << array1[m];
            if(i != n-1)
                cout<<" ";
        }
        cout << endl;
    }
    return 0;
}*/
