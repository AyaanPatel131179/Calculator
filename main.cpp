/* Ayaan Patel, Calculator, 9/9/2025, EXTRA - POWER*/
#include <iostream>
#include <cmath>
using namespace std;


int main(){
    int x;
    int y;
    int sumplus;
    int summinus;
    int summulti;
    int sumdivide;
    int summodul;
    int suminc;
    int sumdec;
    double power;
    cout << "Enter two numbers" << endl;
    cin >> x >> y;
    sumplus = x + y;
    summinus = x - y;
    summulti = x * y;
    if (y != 0) {
    sumdivide = x / y;
    summodul = x % y;
    } else {
    sumdivide = 0;
    summodul = 0;
    cout << "Do not put zero's in modulus or divison" << endl;
    } 
    suminc = sumplus++;
    sumdec = sumplus--;
    power = pow(x, y);
    cout << "Calculation Results" << endl;
    cout << "Addition" << sumplus << endl;
    cout << "Subtraction" << summinus << endl;
    cout << "<Multipication" << summulti << endl;
    if (y != 0) {
        cout << "Divison" << sumdivide << endl;
        cout << "Modul" << summodul << endl;
    } else { cout << "Undefined Modul or Divison" << endl;}
    cout << "Increment" << suminc << endl;
    cout << "Decrement" << sumdec << endl;
     cout << "Power" << power << endl;





}
