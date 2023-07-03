// EnumStructD.A.2
#include <Windows.h>
#include <iostream>
using std::string;
using std::cin;
using std::cout;
using std::endl;

struct BankAccount {
 int account_num;
 string name;
 double balance;
 };

 void change_balance(BankAccount &dat);//прототип функции изменения счета

int main()
{
    
    setlocale(LC_ALL,"Russian");//тут работает только вывод русского в кавычках  типа "Дима"
    //настраиваем русский язык для ввода-вывода:
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);


    BankAccount data;
    cout << "Введите номер счета: "; cin >> data.account_num;
    cout << "Введите имя владельца: "; cin >> data.name;
    cout << "Введите баланс счета: "; cin >> data.balance;

    change_balance(data);

    cout << "Ваш счёт: ";std::cout << data.name << ", " << data.account_num << ", " << data.balance << endl;

    return 0;
}
//функция релиз
void change_balance(BankAccount &dat) {
    cout << "Введите новый баланс: ";
    cin >> dat.balance;
}

