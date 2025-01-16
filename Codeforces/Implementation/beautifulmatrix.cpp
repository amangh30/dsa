#include <iostream>
using namespace std;

int main() {
    int matrix[5][5];
    int row=2;
    int col=2;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
            if(matrix[i][j] == 1){
                row = i;
                col = j;
            }
        }
    }
    int d = 0;
    d = abs(row-2);
    d += abs(col-2);
    cout<<d<<endl;
    return 0;
}
