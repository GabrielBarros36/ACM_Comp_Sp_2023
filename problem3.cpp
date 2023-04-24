#include<iomanip>
#include<iostream>

using namespace std;

int main(){

    char filler, oP;
    int numRow, numLine, numOps, num, r1, c1, r2, c2, temp1 = -1, temp2;

    cin >> numRow >> numLine;

    int matrix[numRow][numLine];

    for(int i = 0; i < numRow; i++){
        for(int j = 0; j < numLine; j++){
            cin >> matrix[i][j];
        }
    }


    cin >> numOps;

    for(int i=0; i < numOps; i++){


        cin >> filler >> r1 >> filler >> c1 >> filler >> filler >> r2 >> filler >> c2 >> filler >> oP;

    //    cout << filler << r1 << filler << c1 << filler << r2 << filler << c2 << filler << oP;
        
        switch(oP){
            case'a':
                temp1 = (matrix[r1-1][c1-1] + matrix[r2-1][c2-1]);
                break; 
            case'b':
                temp1 = matrix[r1-1][c1-1] - matrix[r2-1][c2-1];
                break;
            case'c':
                temp1 = matrix[r1-1][c1-1] * matrix[r2-1][c2-1];
                break;
            case'd':
                temp1 = (matrix[r1-1][c1-1] == matrix[r2-1][c2-1]);
                break;
    
        }

        cout << temp1 << ' ';

    }


}
