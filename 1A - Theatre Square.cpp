#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long double a, n, m, temp;
    
    cin >> n >> m >> a;
    cout.precision(22);

    if (m < n){
        temp = m;
        m = n;
        n = temp;
    }

    if (a >= m){
        cout << ceil(n/a) << endl;
    }
    else{
        cout << ceil(m/a)*ceil(n/a) << endl;
    }
}