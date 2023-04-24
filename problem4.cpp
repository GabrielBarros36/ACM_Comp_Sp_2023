#include<iostream>
#include<string>

using namespace std;

int main(){

    int n, tempInt;
    cin >> n;
    cin.ignore();

    string tempS;



    string names[n];
    int ranks[n];


    for(int i=0; i<n; i++){

        getline(cin,  names[i], ' ');
        cin >> ranks[i];
        cin.ignore();


    }


    for(int i=0; i<n-1; i++){
        for(int j=0; j < n-1; j++){
            if(ranks[j] < ranks[j+1]){

                tempInt = ranks[j];
                tempS = names[j];

                ranks[j] = ranks[j+1];
                names[j] = names[j+1];

                ranks[j+1] = tempInt;
                names[j+1] = tempS;

            }
            else if(ranks[j] == ranks[j+1])
                if(names[j] > names[j+1]){


                tempInt = ranks[j];
                tempS = names[j];

                ranks[j] = ranks[j+1];
                names[j] = names[j+1];

                ranks[j+1] = tempInt;
                names[j+1] = tempS;

                }
        }
    }

    for(int i=0; i < n; i++)
        cout << names[i] << "\n";


}
