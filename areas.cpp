#include <iostream>
using namespace std;

// функция для находжения площади робма по диагоналям
float romb (float d1, float d2) {  
    float s = d1 * d2 / 2;
    return s;
} 

// функция для находжения площади эллипса
float ellipse (float r1, float r2) {
    float s = r1 * r2 * 3.14;
    return s;
}

// функция для находжения площади круга
float circle (float r) {
    float s = r * r * 3.14;
    return s;
}

//функция для нахождения площади треугольника по трем сторонам и радиусу вписанной окружности
float tr0 (float a, float b, float c, float r) {
    float s = r * (a + b + c) / 2;
    return s;
}

//функция для нахождения площади треугольника по стороне и высоте
float tr (float a, float h) {
    float s = a * h / 2;
    return s;
}

//функция для нахождения площади параллелограма по стороне и высоте к ней 
float parallelogram(float c, float h) {
    float s = c * h;
    return s;
}

//функция для нахождения площади трапеции по основаниям и высоте
float trapezoid(float c, float d, float h) {
    float s = (c + d) * h / 2;
    return s;
}

//основная программа
int main()
{
    int n = 0; //счетчик для цикла, позволяет ввести данные несколько раз при ошибке
    while (n < 4) {
        int type; //переменная для номера фигуры
        cin >> type;
        if (type == 0) {
            cout << "What data do you have?" << endl;
            cout << "If you have lengths of three sides and the radius of the inscribed circle, enter 0" << endl;
            cout << "If you have a side length and a height drawn to it, enter 1" << endl;
            int type1; //переменная для типа треугольника
            cin >> type1;
            if (type1 == 0) {
                int a, b, c, d;
                cin >> a >> b >> c >> d;
                cout << tr0 (a, b, c, d);
                n = 4; //площадь найдена, выходим из цикла
            }
            if (type1 == 1) {
                int a, b;
                cin >> a >> b;
                cout << tr (a, b);
                n = 4; //площадь найдена, выходим из цикла
            }
        }
        else if (type == 1) {
            int a, b;
            cin >> a >> b;
            cout << parallelogram (a, b);
            n = 4; //площадь найдена, выходим из цикла
        }
        else if (type == 2) {
            int a, b, c;
            cin >> a >> b >> c;
            cout << trapezoid (a, b, c);
            n = 4; //площадь найдена, выходим из цикла
        }
        else if (type == 3) {
            int a;
            cin >> a;
            cout << circle (a);
            n = 4; //площадь найдена, выходим из цикла
        }
        else if (type == 4) {
            int a, b;
            cin >> a >> b;
            cout << ellipse (a, b);
            n = 4; //площадь найдена, выходим из цикла
        }
        else if (type == 5) {
            int a, b;
            cin >> a >> b;
            cout << romb (a, b);
            n = 4; //площадь найдена, выходим из цикла
        }
        //случай. когда данные введены неверно
        else {
            if (n < 3) {
                n = n + 1; //считаем, сколько раз пользователь ввел данные неверно
                cout << "Something went wrong, let's try to enter your data again!" << endl;
            }
            //сообщение об ошибке и выход из цикла
            else {
                n = 4;
                cerr << "Are you serious?" << endl;
            }
        }
    }
    return 0;
}
