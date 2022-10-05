#include <iostream>
using namespace std;


const int MAX_N = 100;
int firstMatrix[MAX_N][MAX_N];
int secoundMatrix[MAX_N][MAX_N];
int firstRow, secoundRow, firstColumn, secounfColumn;

void MultipleMat(int firstMatrix[][MAX_N], int secoundMatrix[][MAX_N]) {
    int result[MAX_N][MAX_N];

    cout << "Multiplication of given two matrices is:\n";
    
    for (int i = 0; i < firstRow; i++) {
        for (int j = 0; j < secounfColumn; j++) {
            result[i][j] = 0;

            for (int k = 0; k < secoundRow; k++) {
                result[i][j] += firstMatrix[i][k] * secoundMatrix[k][j];
            }

            cout << result[i][j] << "\t";
        }

        cout << endl;
    }
}

void SumMat(int firstMatrix[][MAX_N], int secoundMatrix[][MAX_N]) {
    int rslt[MAX_N][MAX_N];

    cout << "summation of given two matrices is:\n";

    for (int i = 0; i < firstRow; i++) {
        for (int j = 0; j < firstColumn; j++) {
            rslt[i][j] = firstMatrix[i][j] + secoundMatrix[i][j];
            cout << rslt[i][j] << "\t";
        }

        cout << endl;
    }
}

int main() {
    cout << "Enter rows, columns of first matrix : " << endl;
    cin >> firstRow >> firstColumn;
    cout << "Enter rows, columns of second matrix : " << endl;
    cin >> secoundRow >> secounfColumn;

    cout << "Enter elements of first martix : \n";
    int i, j;
    for (i = 0; i < firstRow; i++) {
        for (j = 0; j < firstColumn; j++) {
            cin >> firstMatrix[i][j];
        }
    }

    cout << "Enter elements of second martix : \n";

    for (i = 0; i < secoundRow; i++) {
        for (j = 0; j < secounfColumn; j++) {
            cin >> secoundMatrix[i][j];
        }
    }
    clock_t start1, end1, start2, end2;

    start1 = clock();
    MultipleMat(firstMatrix, secoundMatrix);
    end1 = clock();
    double time_taken1 = double(end1 - start1) / double(CLOCKS_PER_SEC);
    cout << "time for multiplication : " << time_taken1 << " s" << endl;

    start2 = clock();
    SumMat(firstMatrix, secoundMatrix);
    end2 = clock();
    double time_taken2 = double(end2 - start2) / double(CLOCKS_PER_SEC);
    cout << "time for summation : " << time_taken2 << " s" << endl;

    cout << "difference in time : " << abs(time_taken2 - time_taken1) << " s\n";
    return 0;
}
