#include <iostream>
using namespace std;

int main() {
    int a[10] = {1, 2, 3, 4};
    int n = 4;  

    // Traversal
    cout << "Traversal: ";
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    // Insertion
    int pos = 2, value = 25;
    for(int i = n; i > pos; i--)
        a[i] = a[i - 1];
    a[pos] = value;
    n++;

    cout << "After insertion: ";
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    // Deletion
    int delPos = 2;
    for(int i = delPos; i < n - 1; i++)
        a[i] = a[i + 1];
    n--;

    cout << "After deletion: ";
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    // Searching
   int key = 15;
        for(int i = 0; i < n; i++) {
    if(a[i] == key) {
        cout << "Found at position " << i << endl;
        return 0; 
    }
}
cout << "Not found" << endl;

    // Updating
    a[0] = 3;
    cout << "After updating: ";
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    return 0;
}