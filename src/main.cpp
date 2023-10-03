#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x,k,e;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter k: ";
    cin >> k;
    cout << "Enter e: ";
    cin >> e;
    double s = 1, // начальное значение y
    c = 0; // значение yi+1
    int i=0;

    while ( true) {
        c = s+(x/pow(s,k-1)-s)/k; // итерационная формула вычисления корня
        i++;
        if (fabs(s - c) < e )// условие окончание итерации
            break; // выход из цикла

        s = c; // сохраняем текущее значение y

    }
    cout << " Value x^1/k  "<< pow(x,1./k)<< endl<<" Iterative formula  "<<s << " get in iterative "<<i<<endl;
    system("pause");
    return 0;
}
