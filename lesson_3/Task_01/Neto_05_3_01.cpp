// Neto_05_3_01.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
#include <iostream>

#include "SmartArray.h"

int main(int argc, char** argv) {
    setlocale(LC_ALL, "rus");

    try {
        smart_array arr(6);
        arr.addElement(1);
        arr.addElement(4);
        arr.addElement(155);
        arr.addElement(14);
        arr.addElement(15);
        arr.addElement(22);
        //arr.printSmartArray();
        std::cout << arr.getElement(5) << std::endl;
    }
    catch (const std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }
    return 0;
}
