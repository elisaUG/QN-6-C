#include <iostream>
using namespace std;

void bar(int* a) {
    for (int j = 0; j < 4; j++) {
        a[j] = j * 100;  // Assign each element as j * 100
    }
}

int main() {
    int a[4] = {10, 20, 30, 40};
    bar(a);  // Modify the array using the bar function

    // Print array in reverse order
    for (int i = 3; i >= 0; i--) {
        cout << a[i] << " ";
    }

    system("pause");
    return 0;
}
