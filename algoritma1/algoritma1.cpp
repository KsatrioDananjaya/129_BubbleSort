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


int main()
{
    std::cout << "Hello World!\n";
}

