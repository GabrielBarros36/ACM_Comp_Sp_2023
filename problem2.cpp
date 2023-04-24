#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

int main(){


    double total = 0, n=0, iC = 0, cC = 0, pC = 0, sC = 0, sodaDiscount = 0;

    char b;
    int count = 0;
    cin >> n;
    cin.ignore(); 
    string a;

    while(count < n){
        //getline(cin, a, ' ');

        cin >> b; 

        if(b == 'I')
            iC++;
        else if(b == 'C')
            cC++;
        else if(b == 'P')
            pC++;
        else if(b == 'S')
            sC++;

        count++;
    }

    total = (3*iC) + (2.75*cC) + (7 * pC) + (1.5 * sC);

    if(pC > 2)
        total -=4;

    sC = static_cast<int>(sC/6);
    sodaDiscount = sC*2;

    total -= sodaDiscount;


    cout << '$' << fixed << setprecision(2) << total;

}
