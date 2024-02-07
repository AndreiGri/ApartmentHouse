#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
    // Установка цвета фона терминала и цвета текста
    system("color 80");

    cout << endl;
    string surname[10];
    cout << " Enter surnames: " << endl;
    for (int i = 0; i < 10; i++) {
        cin >> surname[i];
    }

    while (true) {
        int number;
        cout << " Enter apartment number: " << endl;
        cin >> number;
        if (number < 1 || number>10) {
            cout << " Defoult date";
            break;
        }
        cout << surname[number - 1];
    }


    // Задержка окна консоли:
    system("pause > nul");

    return 0;
}