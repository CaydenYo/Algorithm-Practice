/*#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    char x;
    int number = 0,al = 0,other = 0;
    while((x = getchar())!= EOF){
            if(x >= '0' && x <= '9')
                number++;
            else if(x >= 'a' && x <= 'z' || x >= 'A' && x <= 'Z')
                al++;
            else
                other++;
    }
    cout << number << " " << al << " " << other << endl;
    return 0;
}*/

#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{char x;
int a=0,b=0,c=0;
   while((x=getchar())!=EOF)
    {
      if(x<='z'&&x>='a'||x<='Z'&&x>='A')
         a++;
      else if(x<='9'&&x>='0')
       b++;
        else
        c++;
    }
    cout<<b<<" "<<a<<" "<<c<<endl;
    return 0;
}
