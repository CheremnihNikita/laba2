#include <iostream>
#include <iomanip>
#include <clocale>
using namespace std;
double factorial(int n) {
    if (n == 0) return 1;
    else return n * factorial(n - 1);
}
double term(double x, int k) {
    return pow(x, 2.0 * k) / factorial(2 * k);
}
double sumSequence(double x, int n) {
    if (n == 1) return 1 + term(x, 1);
    return sumSequence(x, n - 1) + term(x, n);
}
int main() {
    setlocale(LC_ALL, "RU");
    double x;
    int n;
    double sum;
    cout << "Введите x: ";
    cin >> x;
    cout << "Введите n: ";
    cin >> n;
    if (n < 0) {
        cout << "n должно быть неотрицательным числом." << endl;
    }
    sum = sumSequence(x, n - 1);
    cout << "Сумма последовательности: " << sum << endl;
    return 0;
}

