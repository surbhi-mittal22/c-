#include <cstddef>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string a,b,d;
    cin>>a;
    cin>>b;
    cout<<a.size()<<" "<<b.size()<<endl; //size of string
     cout<<a+b<<endl;
     d[0]=a[0];    //swap 0th position of two string
     a[0] = b[0];
    b[0] = d[0];
    cout<<a<<" "<<b;
    
    
  
    return 0;
}