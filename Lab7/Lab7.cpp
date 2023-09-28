// Lab7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
using namespace std;

int intGenerator() {
    if (rand()%3 == 1) {
        
        int result = -rand() / 100;
        cout << result << endl;
        return result;
    }
    else {
        int result = rand() / 100;
        cout << result << endl;
        return result;
    }
}


int main()
{
    int n;
    srand(time(0));
    cout << "Enter lenght of list:";
    cin >> n;
    while (n < 6) {
        cout << "Unacceptable lenght, try again" << endl;
        cin >> n;
    }
    cout << "Current data:" << endl;

    long int multiply = 1;
    int positiveCount = 0;
    int* nums = new int[n];
    for (int i = 0; i < n; i++) {
        nums[i] = intGenerator();
    }
    for (int i = 0; i < n; i++) {
        if (nums[i] > 0) {
            positiveCount +=1;
            switch (positiveCount)
            {
                case 1:
                    multiply *= nums[i];
                    break;
                case 3:
                    multiply *= nums[i];
                    break;
                case 6:
                    multiply *= nums[i];
                    break;

                default:
                    break;
            }
        }
    }
    cout << "Result: ";
    if (positiveCount >= 6) {
        cout << multiply << endl;
    }
    else {
        cout << "Sorry, but i can't count it (there are not enough positive elements, try again)" << endl;
    }
   
    delete[] nums;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
