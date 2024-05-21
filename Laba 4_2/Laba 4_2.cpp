#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251); // встановлення кодування Windows-1251 в  потік введення
    SetConsoleOutputCP(1251); // встановлення кодування Windows-1251 в  потік виведення
    // Вихідне слово
    string word = "basketball";

    // Отримання слова "ball"
    string ball = word.substr(6, 4); // починаючи з індексу 6, довжиною 4 символи

    // Отримання слова "bath"
    string bath = word.substr(0, 1) + word.substr(1, 1) + word.substr(4, 1) + word.substr(8, 1); // "b" + "a" + "t" + "h"

    // Отримання слова "bank"
    string bank = word.substr(0, 1) + word.substr(1, 1) + word.substr(3, 1) + word.substr(2, 1); // "b" + "a" + "n" + "k"

    // Виведення результатів
    cout << "Слово 'ball': " << ball << endl;
    cout << "Слово 'bath': " << bath << endl;
    cout << "Слово 'bank': " << bank << endl;
    cout << "Проект: Шляхом вирізання та склеювання отримати зі слова „ basketball”, ball, bath, bank." << endl;
    cout << "Автор: Туна Деніз Мехметович" << endl;

    return 0;
}
