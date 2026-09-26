//Оновные типы данных:
    // Целые знаковые:
        //short - целое, небольшой диапазон
        // int - целое число
        // long long - целое, очень большой диапазон
    // Целые беззнаковые:
        // unsigned int - не хранит отрцательные числа
    // Вещественные:
        // float - дробные числа
        // double - дробные числа, большая точность
    // Символьный:
        // char - один символ
    // Логический:
        // bool - true/false

// Переменная это именованная область памяти, в которой хранится значение. 
// У неё есть имя, тип (он определяет, какие значения можно хранить и сколько 
//места занимает переменная) и значение, которое можно менять по ходу программы.

// Знаковый тип хранит и положительные, и отрицательные числа (один бит отведён под знак),
// а беззнаковый только неотрицательные, зато с вдвое большим верхним пределом.


// sizeof(n) - сколько байт занимает n
// <limits> - стандратная библиотека, позволяет узнать пределы типов, min и max



# include <iostream>
# include <limits>

int main()
{
    int num = 66;                     // тип имя присвоить значение
    char c = 'A';                     // «выдели коробку типа char, назови её 'c', положи туда 'A'».
    short s = 6666;
    long long ll = 6666666666LL;      // LL в конце: число не влезает в int
    unsigned int u = 6666666666u;     // u в конце: число без знака
    float f = 6.66f;                  // f в конце: это float
    double d = 6.666666666;
    bool b = true;


    // формат строки: тип, значение, размер, мин и макс

    std::cout << "int num " 
                << num << " " 
                << sizeof(num) << " "
                << std::numeric_limits<int>::min() << " "
                << std::numeric_limits<int>::max()
                << std::endl;


    std::cout << "char " 
                << c << " " 
                << sizeof(c) << " "
                << static_cast<int>(std::numeric_limits<char>::min()) << " "
                << static_cast<int>(std::numeric_limits<char>::max())
                << std::endl;

    std::cout << "short "
                << s << " " 
                << sizeof(s) << " "
                << std::numeric_limits<short>::min() << " "
                << std::numeric_limits<short>::max() 
                << std::endl;


    std::cout << "long_long " 
                << ll << " " 
                << sizeof(ll) << " "
                << std::numeric_limits<long long>::min() << " "
                << std::numeric_limits<long long>::max() 
                << std::endl;

    std::cout << "unsigned_int "
                << u << " "
                << sizeof(u) << " "
                << std::numeric_limits<unsigned int>::min() << " "
                << std::numeric_limits<unsigned int>::max()
                << std::endl;

    std::cout << "float " 
                << f << " " 
                << sizeof(f) << " "
                << -std::numeric_limits<float>::max() << " "
                << std::numeric_limits<float>::max() 
                << std::endl;

    std::cout << "double " 
                << d << " " 
                << sizeof(d) << " "
                << -std::numeric_limits<double>::max() << " "
                << std::numeric_limits<double>::max() 
                << std::endl;

    std::cout << "bool " 
                << b << " " 
                << sizeof(b) << " " << 0 << " " << 1 
                << std::endl;

    return 0;

}   
