#include<iostream>
#include<math.h>
using namespace std ;

int main() {
    int n , ans ;
    cin >> n ;
    ans = (pow(1.618 , n) - pow(-1.618 , -n))/(sqrt(5)) ;
    cout << ans << endl ;
}
