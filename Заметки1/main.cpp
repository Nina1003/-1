#include <iostream>
#include <fstream>

using namespace std;

int main() {
    setlocale(LC_ALL, "");
    srand(time(0) * time(0));
    cout << "Текстовый квест";
    cout << endl << endl;

    int num = 1;
    while (num == 1) {
        cout << "Хочешь сыграть в игру?:" << endl;
        cout << "1. Да" << endl;
        cout << "2. Нет" << endl;
        cin >> num;
        switch (num) {
        case 1: {
            int a;
            cout << "Ответьте на вопрос" << endl;
            cout << "Сколько дней в феврале?" << endl << endl;
            cin >> a;
            if (a == 28) {
                cout << "Ответ правильный!" << endl << endl;
            }
            else {
                cout << "Ответ не правильный" << endl << endl;
            }
            int b;
            cout << "Ответьте на вопрос" << endl << endl;
            cout << "Какой сейчас год?" << endl << endl;
            cin >> b;
            if (b == 2023) {
                cout << "Ответ правильный!" << endl << endl;
            }
            else {
                cout << "Ответ не правильный" << endl << endl;
            }
            int c;
            cout << "Ответьте на вопрос" << endl << endl;
            cout << "В каком году было отменено крепостное право?" << endl << endl;
            cin >> c;
            if (c == 1861) {
                cout << "Ответ правильный!" << endl << endl;
            }
            else {
                cout << "Ответ не правильный" << endl << endl;
            }
        }


        }
        
    }
    return 0;
}