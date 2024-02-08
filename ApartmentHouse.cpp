#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
    // Установка цвета фона терминала и цвета текста
    system("color 80");

    cout << endl;
    string surname[10];                                          // Объявляем стринговый массив
    cout << " Enter surnames: " << endl;                         // Запрашиваем фамилии жильцов
    for (int i = 0; i < 10; i++) {                               // В цикле заполняем массив фамилиями жильцов
        cout << " " << (char)1 << " ";
        cin >> surname[i];
    }

    while (true) {                                               // Бесконечный цикл для запроса номера квартиры
        int number;                                              // и вывода фамилии жильца таковой
        cout << " Enter apartment number: " << endl;
        cout << " " << (char)35 << " ";
        cin >> number;
        if (number < 1 || number>10) {                           // Если введён недопустимый номер квартиры
            cout << " Invalid apartment number entered" << endl; // выводим сообщение об этом и выходим из программы
            break;
        }
        cout << " " << (char)2 << " " << surname[number - 1] << endl;
    }


    // Задержка окна консоли:
    system("pause > nul");

    return 0;
}