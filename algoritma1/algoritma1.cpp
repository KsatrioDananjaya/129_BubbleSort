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
}


int main()
{
    std::cout << "Hello World!\n";
}

