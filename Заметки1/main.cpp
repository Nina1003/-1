#include <iostream>
#include <fstream>

using namespace std;

int main() {
    setlocale(LC_ALL, "");
    srand(time(0) * time(0));
    cout << "Текстовый квест" << endl;
    cout << "Данный квест состоит из пяти вопросов и подразумевает введение одного правильного ответа состоящего из целых цифр без пробелов" << endl;
    cout << "В случае введения неверного ответа, вопрос будет повторен до тех пор, пока ответ не будет верен" << endl;
    cout << endl << endl;

    int num = 1;
    while (num == 1) {
        cout << "Хочешь сыграть в игру?" << endl;
        cout << "1. Да" << endl;
        cout << "2. Нет" << endl;
        cin >> num;
        if (num == 1) {
            while (true) {
                int a;
                cout << "Ответьте на вопрос" << endl;
                cout << "Сколько дней в феврале?" << endl << endl;
                cin >> a;
                if (a == 28) {
                    cout << "Ответ правильный!" << endl << endl;
                    break;
                }
                else {
                    cout << "Ответ не правильный" << endl << endl;
                    continue;
                }
            }
            while (true) {
                int b;
                cout << "Ответьте на вопрос" << endl << endl;
                cout << "Какой сейчас год?" << endl << endl;
                cin >> b;
                if (b == 2023) {
                    cout << "Ответ правильный!" << endl << endl;
                    break;
                }
                else {
                    cout << "Ответ не правильный" << endl << endl;
                    continue;
                }
            }
            while (true) {
                int c;
                cout << "Ответьте на вопрос" << endl << endl;
                cout << "В каком году было отменено крепостное право?" << endl << endl;
                cin >> c;
                if (c == 1861) {
                    cout << "Ответ правильный!" << endl << endl;
                    break;
                }
                else {
                    cout << "Ответ не правильный" << endl << endl;
                    continue;
                }
            }
            while (true) {
                int c;
                cout << "Ответьте на вопрос" << endl << endl;
                cout << "Сколько месяцев в году?" << endl << endl;
                cin >> c;
                if (c == 12) {
                    cout << "Ответ правильный!" << endl << endl;
                    break;
                }
                else {
                    cout << "Ответ не правильный" << endl << endl;
                    continue;
                }
            }
            while (true) {
                int c;
                cout << "Ответьте на вопрос" << endl << endl;
                cout << "Сколько букв в русском алфавите?" << endl << endl;
                cin >> c;
                if (c == 33) {
                    cout << "Ответ правильный!" << endl << endl;
                    break;
                }
                else {
                    cout << "Ответ не правильный" << endl << endl;
                    continue;
                }
            }
        }
        else {
            cout << "Выход из игры";
        } 
    }
    return 0;
}