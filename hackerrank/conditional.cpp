#include <bits/stdc++.h>

#include<string>

using namespace std;



int main()
{
    int n;
    std::string units[]={"Greater than 9","one","two","three","four","five","six","seven","eight","nine"};
  
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if(n>=1 && n<=9)
      {
         
         cout<<units[n]<<endl;
      }
    else
     {
        cout<<units[0]<<endl;
     }


   
    return 0;
}