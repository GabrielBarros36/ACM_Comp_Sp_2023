#include<iostream>
#include<string>
#include<iomanip>

using namespace std;
void Insert(int  &b, string c[] , string y, string a);
void Remove(int &b, string c[], string a);
void Swap(int &b, string c[], string x, string y); 
int main(){

    int numInputs, numOps;


    char oP;

    cin >> numInputs;

    cin.ignore();
    string names[numInputs];

    for(int i = 0; i < numInputs - 1; i++ ){
        getline(cin, names[i], ' ');
        //cin.ignore();
    }
    getline(cin, names[numInputs-1], '\n');

    cin >> numOps;

    cin.ignore();

    string fnames[numInputs + numOps];
    int places[numInputs + numOps];

    for(int i = 0; i < numInputs; i++){
        fnames[i] = names[i];
    }

    for(int i =0; i < (numInputs + numOps); i++)
        places[i] = i;


string hold1, hold2;

    for(int i=0; i < numOps; i++){

        cin >> oP;
        //cin.ignore();

        getline(cin, hold1, ' ');
        getline(cin, hold2, '\0');


        switch(oP){
            case'I':
                Insert(numInputs, fnames, hold1, hold2);
                break;
            case'R':
                Remove(numInputs, fnames, hold1);
                break;
            case'S':
                Swap(numInputs, fnames, hold1, hold2);
                break;

        }
    }



    for(int i = 0; i<numInputs; i++){
        cout << fnames[i];
    }




    cout << endl << "funtest" << endl;

    Swap(numInputs, fnames, "evan", "gabe");


    for(int i =0; i<numInputs; i++)
        cout << fnames[i] << " ";


}

void Insert(int &numInputs, string names[], string a, string b){

    bool found = false;

    int nameIndex;

    for(int i=0; i<numInputs-1; i++){
        if(!found){
        if(names[i] == b ){
            found = true;
            for(int j=numInputs; j>i; j--){
                names[j] = names[j-1];
            }

            names[i] = a;
        }
        }

    }

    numInputs++;

}

void Remove(int &numInputs, string c[], string remove){

    bool found = false;
    for(int i=0; i < numInputs; i++){
        if(true){
        if(c[i] == remove){
            found = true;
            c[i] = "";
            for(int j=i; j < numInputs; j++){
                c[j] = c[j+1];  
            }
                
    }
    }

    //numInputs--;

    }


}

void Swap(int &numInputs, string c[], string x, string y)
{
    string temp = "";
    int xindex = 0, yindex = 0; 
    for(int i= 0; i < numInputs - 1; i++)
    {
        if(c[i] == x)
            xindex = i;
        if(c[i] == y)
            yindex = i; 
    }

    temp = c[xindex];
    c[xindex] = c[yindex];
    c[yindex] = temp; 

}
