#include<iostream>
#include<cmath>
using namespace std;


bool isPalindrome(int n);
int makeReverse(int n);
int main(){
    int  count = 0, newn =0,  n, ncopy2,  ncopy, nsize = 0, divCoeff = 1, modCoeff = 10, nodDivCoeff;
    cin >> n;
    ncopy = n;

    ncopy2 = n;
    bool found = false;

    while(!isPalindrome(n) && count < 10){

        n +=  makeReverse(n);
        count++;

        found = isPalindrome(n);
    }



    if(found)
        cout << n;
    else
        cout <<"unknown";
}

bool isPalindrome(int n){


    int ncopy = n, ncopy2 = n, nsize = 0, newn = 0;

    while(n > 0){
        nsize++;
        n /=10;
    }

    for(int i = 0; i < nsize; i++){

        newn += (ncopy2%10 *  pow(10, nsize-i-1) );
        ncopy2 /=10;

    }

    return (ncopy == newn);
}

int makeReverse(int n){


    int ncopy = n, ncopy2 = n, nsize = 0, newn = 0;

    while(n > 0){
        nsize++;
        n /=10;
    }

    for(int i = 0; i < nsize; i++){

        newn += (ncopy2%10 *  pow(10, nsize-i-1) );
        ncopy2 /=10;

    }

    return (newn);

}
