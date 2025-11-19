#include <iostream>
#include "menu_manager.hpp"
#include "menu_display.hpp"
#include "math_operations.hpp"

void handle_algebra_menu() {
    int choice;
    do {
        show_algebra_menu();
        std::cin >> choice;
        
        switch(choice) {
            case 1: svr::learn_addition(); break;
            case 2: svr::learn_subtraction(); break;
            case 3: svr::learn_multiplication(); break;
            case 4: svr::learn_division(); break;
            case 0: break;
            default: std::cout << "Неверный выбор\n";
        }
    } while(choice != 0);
}

void handle_analysis_menu() {
    int choice;
    do {
        show_analysis_menu();
        std::cin >> choice;
        
        switch(choice) {
            case 1: svr::learn_differential(); break;
            case 2: svr::learn_integral(); break;
            case 0: break;
            default: std::cout << "Неверный выбор\n";
        }
    } while(choice != 0);
}

void handle_subject_menu() {
    int choice;
    do {
        show_subject_menu();
        std::cin >> choice;
        
        switch(choice) {
            case 1: handle_algebra_menu(); break;
            case 2: handle_analysis_menu(); break;
            case 0: break;
            default: std::cout << "Неверный выбор\n";
        }
    } while(choice != 0);
}

void handle_main_menu() {
    int choice;
    do {
        show_main_menu();
        std::cin >> choice;
        
        switch(choice) {
            case 1: handle_subject_menu(); break;
            case 0: std::cout << "Выход из программы\n"; break;
            default: std::cout << "Неверный выбор\n";
        }
    } while(choice != 0);
}