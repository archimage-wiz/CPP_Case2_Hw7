#include <iostream>

#define MODE 1

#ifndef MODE
#error MODE Not Defined!
#endif // !MODE

#if MODE == 0
#define MACRO1 \
std::cout << "Работаю в режиме тренировки." << std::endl;

#elif MODE == 1
int addx(int x1, int x2) { return x1 + x2; }
#define MACRO1 \
std::cout << "Работаю в боевом режиме" << std::endl; \
int val1, val2; \
std::cout << "Введите число 1: "; \
std::cin >> val1; \
std::cout << "Введите число 2: "; \
std::cin >> val2; \
std::cout << "Результат сложения: " << addx(val1, val2) << std::endl; 

#else
#define MACRO1 \
std::cout << "Неизвестный режим. Завершение работы." << std::endl;
#endif 

int main() { setlocale(LC_ALL, "Ru");

    MACRO1

    return 0;
}

