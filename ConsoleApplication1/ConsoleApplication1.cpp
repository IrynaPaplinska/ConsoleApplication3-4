#include <iostream>
#include <cmath>   
#include <iomanip> 
#include <windows.h> 


double calculate_y(double x) {
   
    double argument = x * x + 4.0 * std::abs(x - 1.0);
   
    return std::cos(argument);
}

int main() {
   
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    const double a = -1.0;
    const double b = 4.5;

    int k; 

   
    std::cout << "--- Завдання 2: Табулювання функції ---\n";
    std::cout << "Функція: y = cos(x^2 + 4|x-1|)\n";
    std::cout << "Відрізок: [" << a << "; " << b << "]\n\n";
    std::cout << "Введіть натуральне число k (кількість інтервалів): ";

    if (!(std::cin >> k) || k <= 0) {
        std::cout << "\nПомилка: Некоректне введення. Будь ласка, введіть додатне ціле число k.\n";
        return 1;
    }

    double h = (b - a) / static_cast<double>(k);

    std::cout << std::fixed << std::setprecision(4);

    std::cout << "\n--- Результати табулювання ---\n";
    std::cout << std::setw(10) << "x" << std::setw(15) << "y\n";
    std::cout << "---------------------------\n";
    for (int i = 0; i <= k; ++i) {
        double current_x = a + static_cast<double>(i) * h;
        double current_y = calculate_y(current_x);
        std::cout << std::setw(10) << current_x
            << std::setw(15) << current_y << "\n";
    }

    std::cout << "---------------------------\n";
    std::cout << "Табулювання завершено.\n";

    return 0;
}
