#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std;

int main() {
    int i, n;
    cout << "Enter the number of integers: ";
    cin >> n;
    int *ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL) {
        cout << "Memory not available.";
        exit(1);
    }

    for (i = 0; i < n; i++) {
        cout << "Enter an integer: ";
        cin >> *(ptr + i);
    }

    cout << "Entered integers: ";
    for (i = 0; i < n; i++)
        cout << *(ptr + i) << " ";

    free(ptr); // Deallocate the dynamically allocated memory
    getch();
}
