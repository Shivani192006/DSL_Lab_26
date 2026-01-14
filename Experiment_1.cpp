#include <iostream>
using namespace std;

int main() {
    int a[50], b[50], c[100];
    int n, m, choice, pos, key;

    cout << "Enter number of elements in first array: ";
    cin >> n;
    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++)
        cin >> a[i];

    cout << "\nEnter number of elements in second array: ";
    cin >> m;
    cout << "Enter elements:\n";
    for(int i = 0; i < m; i++)
        cin >> b[i];

    do {
        cout << "\n\n--- ARRAY OPERATIONS MENU ---";
        cout << "\n1. Traversal";
        cout << "\n2. Insertion";
        cout << "\n3. Deletion";
        cout << "\n4. Searching";
        cout << "\n5. Sorting";
        cout << "\n6. Merging";
        cout << "\n7. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice) {

        // Traversal
        case 1:
            cout << "Array elements: ";
            for(int i = 0; i < n; i++)
                cout << a[i] << " ";
            break;

        // Insertion
        case 2:
            cout << "Enter position and element: ";
            cin >> pos >> key;
            for(int i = n; i >= pos; i--)
                a[i] = a[i - 1];
            a[pos - 1] = key;
            n++;
            cout << "Element inserted";
            break;

        // Deletion
        case 3:
            cout << "Enter position to delete: ";
            cin >> pos;
            for(int i = pos - 1; i < n - 1; i++)
                a[i] = a[i + 1];
            n--;
            cout << "Element deleted";
            break;

        // Searching
        case 4:
            cout << "Enter element to search: ";
            cin >> key;
            for(int i = 0; i < n; i++) {
                if(a[i] == key) {
                    cout << "Element found at position " << i + 1;
                    break;
                }
                if(i == n - 1)
                    cout << "Element not found";
            }
            break;

        // Sorting
        case 5:
            for(int i = 0; i < n - 1; i++) {
                for(int j = i + 1; j < n; j++) {
                    if(a[i] > a[j]) {
                        int temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;
                    }
                }
            }
            cout << "Sorted array: ";
            for(int i = 0; i < n; i++)
                cout << a[i] << " ";
            break;

        // Merging
        case 6:
            for(int i = 0; i < n; i++)
                c[i] = a[i];
            for(int i = 0; i < m; i++)
                c[n + i] = b[i];

            cout << "Merged array: ";
            for(int i = 0; i < n + m; i++)
                cout << c[i] << " ";
            break;

        case 7:
            cout << "Program ended";
            break;

        default:
            cout << "Invalid choice";
        }

    } while(choice != 7);

    return 0;
}