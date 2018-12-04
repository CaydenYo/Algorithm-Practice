#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int Array[2][2];
    while(n--){
        //≥ı ºªØæÿ’Û
        for(int i = 0;i < 2;i++){
            for(int j = 0;j < 2;j++){
                cin >> Array[i][j];
            }
        }
        //’“°∞1°±
        int tempi,tempj;
        for(int i = 0;i < 2;i++){
            for(int j = 0;j < 2;j++){
                if(Array[i][j] == 1){
                    tempi = i;
                    tempj = j;
                }
            }
        }
        while(Array[tempi][tempj] != 2){
            if(tempi == 0 && tempj == 0){
                tempj += 1;
            }
            else if(tempi == 0 && tempj == 1){
                tempi += 1;
            }
            else if(tempi == 1 && tempj == 1){
                tempj -= 1;
            }
            else if(tempi == 1 && tempj == 0){
                tempi -= 1;
            }
            if(Array[tempi][tempj] == 2){
                cout << "YES" << endl;
            }
            if(Array[tempi][tempj] == 3){
                cout << "NO" << endl;
                break;
            }
        }
    }
    return 0;
}
