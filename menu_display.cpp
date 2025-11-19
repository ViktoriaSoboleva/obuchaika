#include <iostream>
#include "menu_display.hpp"

void show_algebra_menu() {
    std::cout << "1 - Хочу научиться складывать!\n";
    std::cout << "2 - Хочу научиться вычитать!\n";
    std::cout << "3 - Хочу научиться умножать!\n";
    std::cout << "4 - Хочу научиться делить!\n";
    std::cout << "0 - Вернуться к выбору предметов.\n";
    std::cout << "Ваш выбор: ";
}

void show_analysis_menu() {
    std::cout << "1 - Хочу изучить дифференциальное исчисление!\n";
    std::cout << "2 - Хочу изучить интегральное исчисление!\n";
    std::cout << "0 - Вернуться к выбору предметов.\n";
    std::cout << "Ваш выбор: ";
}

void show_subject_menu() {
    std::cout << "1 - Хочу изучать алгебру!\n";
    std::cout << "2 - Хочу изучать математический анализ!\n";
    std::cout << "0 - Выйти в главное меню.\n";
    std::cout << "Ваш выбор: ";
}

void show_main_menu() {
    std::cout << "1 - Хочу учиться математике!\n";
    std::cout << "0 - Я лучше пойду полежу...\n";
    std::cout << "Ваш выбор: ";
}