#include <string>
#include <iostream>

using namespace std;
int main(){

int aout = 0,bout = 0, run=0, n=0, result = 0;
string sign;
string a,b;

cin >> n;
cin.ignore();
 
while(run < n){

    getline(cin, a, ' ');
    getline(cin,sign, ' ');
    getline(cin, b);


    if(b == "I")
        bout = 1;
    else if(b == "II")
        bout = 2;
    else if(b == "III")
        bout = 3;
    else if(b== "IV")
        bout = 4;
    else if(b == "V")
        bout = 5;
    else if(b == "VI")
        bout = 6;
    else if(b == "VII")
        bout = 7;
    else if(b == "VIII")
        bout = 8;
    else if(b == "IX")
        bout = 9;
    else if(b == "X")
        bout = 10;

    if(a == "I")
        aout = 1;
    else if(a == "II")
        aout = 2;
    else if(a == "III")
        aout = 3;
    else if(a== "IV")
        aout = 4;
    else if(a == "V")
        aout = 5;
    else if(a == "VI")
        aout = 6;
    else if(a == "VII")
        aout = 7;
    else if(a == "VIII")
        aout = 8;
    else if(a == "IX")
        aout = 9;
    else if(a == "X")
        aout = 10;


    if(sign == "+")
        result = aout + bout;
    else if(sign == "-")
        result = aout - bout;

    cout << aout << sign << bout <<  "=" << result << '\n';
    run++;
    }

}
