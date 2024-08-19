#include <iostream>
using namespace std;

int main()
{
    cout << "=======================================";
    cout << "\n\n";
    cout << "Tap - 2";
    cout << "\n\n\n\n";

    int number_two = 5;

    for (int i = 0; i < number_two; i++) {
        for (int j = 0; j < number_two; j++) {
            if (i == j) {
                cout << i + 1 << " ";
            }
            else {
                cout << "0 ";
            }
        }
        cout << endl;
    }
    cout << "\n\n\n";
    system("pause");
    cout << "\n\n\n";
    cout << "=======================================";
    cout << "\n\n";
    cout << "Tap - 2";
    cout << "\n\n\n\n";

    int number_2 = 3;

    for (int i = number_2; i >= 0; i--) {
        for (int j = number_2; j >= number_2 - i; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << "\n\n\n";
    system("pause");
    cout << "\n\n\n";
    cout << "=======================================";
}