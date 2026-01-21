#include <iostream>
using namespace std;

int main() {
    int A[2][2], B[2][2], R[2][2];
    int choice;

    // Input Matrix A
    cout << "Enter elements of Matrix A (2x2):\n";
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
            cin >> A[i][j];

    // Input Matrix B
    cout << "Enter elements of Matrix B (2x2):\n";
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
            cin >> B[i][j];

    do {
        cout << "\n---- MENU ----\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Transpose of Matrix A\n";
        cout << "5. Transpose of Matrix B\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {

        case 1: // Addition
            cout << "\nAddition Result:\n";
            for(int i = 0; i < 2; i++) {
                for(int j = 0; j < 2; j++) {
                    R[i][j] = A[i][j] + B[i][j];
                    cout << R[i][j] << " ";
                }
                cout << endl;
            }
            break;

        case 2: // Subtraction
            cout << "\nSubtraction Result (A - B):\n";
            for(int i = 0; i < 2; i++) {
                for(int j = 0; j < 2; j++) {
                    R[i][j] = A[i][j] - B[i][j];
                    cout << R[i][j] << " ";
                }
                cout << endl;
            }
            break;

        case 3: // Multiplication
            cout << "\nMultiplication Result:\n";
            for(int i = 0; i < 2; i++) {
                for(int j = 0; j < 2; j++) {
                    R[i][j] = 0;
                    for(int k = 0; k < 2; k++) {
                        R[i][j] += A[i][k] * B[k][j];
                    }
                    cout << R[i][j] << " ";
                }
                cout << endl;
            }
            break;

        case 4: // Transpose A
            cout << "\nTranspose of Matrix A:\n";
            for(int i = 0; i < 2; i++) {
                for(int j = 0; j < 2; j++) {
                    cout << A[j][i] << " ";
                }
                cout << endl;
            }
            break;

        case 5: // Transpose B
            cout << "\nTranspose of Matrix B:\n";
            for(int i = 0; i < 2; i++) {
                for(int j = 0; j < 2; j++) {
                    cout << B[j][i] << " ";
                }
                cout << endl;
            }
            break;

        case 0:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while(choice != 0);

    return 0;
}