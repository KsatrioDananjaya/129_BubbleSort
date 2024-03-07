#include <iostream>
using namespace std;

int a[20];
int n;

void input() {
    while (true) {
        cout << "Masukkan banyaknya elemen pada array : ";
        cin >> n;
        if (n <= 20)
            break;
        else {
            cout << "n\Array dapat mempunyai masimal 20 elemen.\n";
        }
    }
    cout << endl;
    cout << "================" <<endl;
    cout << "Masukkan Elemen Array" <<endl;
    cout << "================" <<endl;

    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> a[i];
    }
}

void display() {
    cout << endl;
    cout << "======================" << endl;
    cout << "Elemen Array yang telah tersusun" << endl;
    cout << "======================" << endl;
    for (int j = 0; j < n; j++) {
        cout << "Data Ke-" << j + 1 << ": ";
        cout << a[j] << endl;
    }
    cout << endl;
}

void bubbleSortArray() {
    int pass = 1;

    for (pass; pass <= n - 1; pass + 1) {
        for (int j = 0; j <= n - 1 - pass; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main()
{
    input();
    bubbleSortArray();
    display();
    return 0;
}

