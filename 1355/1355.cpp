#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,k,m,z;
    cin >> n;
    for(int i = 0;i < n;i++){
        int count = 0;
        cin >> k;
        int arr[k];
        for(int j = 0;j < k;j++){
            cin >> arr[j];
        }
        sort(arr,arr + k);
        cin >> m;
        for(z = k-1;z > 0;z--){
            if(arr[z] != arr[z - 1])
                count++;
            if(count == m)
                break;
        }
        cout << arr[z] << endl;
    }
}
