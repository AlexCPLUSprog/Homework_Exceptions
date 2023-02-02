#include "MyException.h"

int main()
{
    setlocale(LC_ALL, "ru");

    // 1. Страшно включать)

    /*const size_t SIZE = 3000000000ul;
    char* ptr = NULL;
    try
    {
        ptr = new char[SIZE];
        std::cout << "Память используется без сбоев.\n";
    }
    catch (std::bad_alloc& ba)
    {
        std::cout << "BA:" << ba.what() << std::endl;
        std::cout << "Исключение bad_alloc: невозможно разместить данные в памяти.\n";
    }
    delete[] ptr;
   */

    // ==============================

    try {
        func (0);
    }
    catch (const MyException& ex) {
        std::cerr << ex.what() << std::endl;
    }





    return 0;
}