#include <iostream>
#include <cmath>

using namespace std;

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "Ошибка: деление на ноль!" << endl;
        return NAN;
    }
}

double power(double base, double exponent) {
    return pow(base, exponent);
}

double squareRoot(double num) {
    if (num >= 0) {
        return sqrt(num);
    } else {
        cout << "Ошибка: невозможно извлечь корень из отрицательного числа!" << endl;
        return NAN;
    }
}

int main() {
    double num1, num2;
    char operation;

    cout << "Введите первое число: ";
    cin >> num1;

    cout << "Введите операцию (+, -, *, /, ^, sqrt): ";
    cin >> operation;

    if (operation != 'sqrt') {
        cout << "Введите второе число: ";
        cin >> num2;
    }

    double result;

    switch (operation) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            result = divide(num1, num2);
            break;
        case '^':
            result = power(num1, num2);
            break;
        case 'sqrt':
            result = squareRoot(num1);
            break;
        default:
            cout << "Ошибка: некорректная операция!" << endl;
            return 0;
    }

    cout << "Результат: " << result << endl;

    return 0;
}
