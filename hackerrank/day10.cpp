#include <bits/stdc++.h>

using namespace std;

// Complete the factorial function below.
int F=1;
int factorial(int n) {
     for(int i =1 ; i<=n;i++)
     {
         F=F*i;
     }
  return F;


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = factorial(n);

    fout << result << "\n";

    fout.close();

    return 0;
}