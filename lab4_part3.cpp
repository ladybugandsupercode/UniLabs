/* Вариант 3.3
Переменная x может принимать 2 значения: -1 и 1.
Если -1, то вывести в консоль “Negative number”,
если положительное - “Positive number”.
Предложить вариант программы и объяснить свой выбор.
*/

#include <iostream>
#ifdef _WIN32 // _WIN32 = «мы на Windows»; на других системах этот кусок пропустится
#include <windows.h> // нужен для настройки кодировки консоли
#endif
using namespace std;

int main() {
    #ifdef _WIN32
        SetConsoleOutputCP(CP_UTF8); // чтобы русский текст приглашения не превратился в кракозябры;)
        SetConsoleCP(CP_UTF8);
    #endif

    int x; // int, потому что значение -1 отрицательное, unsigned его не вместит

    cout << "Введите x (-1 или 1): ";
    cin >> x;

    if (cin.fail()) { // cin не смог прочитать введенное (например, ввели букву)
        cout << "Ошибка: нужно ввести число" << endl;
        return 1;
    }

    // if / else выбран, потому что исходов ровно два и они противоположны
    if (x == -1) {
        cout << "Negative number" << endl;
    }
    else if (x == 1) {
        cout << "Positive number" << endl;
    }
    else { // по условию x только -1 или 1, но защита от других значений не помешает
        cout << "Ошибка: x должно быть -1 или 1" << endl;
    }

    return 0;
}