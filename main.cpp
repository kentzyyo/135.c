#include <iostream>
using namespace std;

int main() {

    // declare variables
    const int row = 2;
    const int col = 3;
    double grades[row][col], search;
    bool   found = false;

    // accept user inputs
    cout << "Please input 6 grades:" << endl;
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cin >> grades[i][j];
        }
    }
    cout << "Please input grade to search: ";
    cin  >> search;

    // perform linear search
    for(int i=0; i<row && !found; i++) {
        for(int j=0; j<col && !found; j++) {
            if(search == grades[i][j]) {
                cout << "Searched grade is found at grades[" << i << "][" << j << "].";
                found = true;
            }
        }
    }

    // check if found
    if(!found)
        cout << "Grade not found!";

    return 0;
}