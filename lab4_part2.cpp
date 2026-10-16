/* Вариант 3.2
Ввести цифру N, при помощи оператора switch вывести название цифры
Предусмотреть обработку ошибочного ввода N.
*/

#include <iostream>
#ifdef _WIN32 // «мы на Windows»; на других системах этот кусок пропустится
#include <windows.h> // нужен для функций настройки консоли (SetConsoleOutputCP)
#endif
using namespace std;

int main() {
    #ifdef _WIN32
        SetConsoleOutputCP(CP_UTF8); // CP = code page (кодовая страница); консоль выводит русский текст без кракозябр
        SetConsoleCP(CP_UTF8);       // то же самое для ввода
    #endif

    int N; // int, а не char: нужно поймать и ошибочные значения вроде 42 или -3

    cout << "Введите цифру N (от 0 до 9): ";
    cin >> N;

    if (cin.fail()) { // fail = «неудача»: cin не смог прочитать число (например, ввели букву)
        cout << "Ошибка: нужно ввести число, а не символ" << endl;
        return 1;
    }

    switch (N) { // switch сравнивает N с каждым case и прыгает к подходящему
        case 0:
            cout << "ноль" << endl;
            break; // break = «выйти из switch», иначе выполнится и следующий case
        case 1:
            cout << "один" << endl;
            break;
        case 2:
            cout << "два" << endl;
            break;
        case 3:
            cout << "три" << endl;
            break;
        case 4:
            cout << "четыре" << endl;
            break;
        case 5:
            cout << "пять" << endl;
            break;
        case 6:
            cout << "шесть" << endl;
            break;
        case 7:
            cout << "семь" << endl;
            break;
        case 8:
            cout << "восемь" << endl;
            break;
        case 9:
            cout << "девять" << endl;
            break;

        default: // сработает, если ни один case не подошёл: это и есть обработка ошибочного ввода N
            cout << "Ошибка: N должно быть цифрой от 0 до 9" << endl;
            break;
    }

    return 0;
}