#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>
using namespace std;
using namespace std;

int main()
{
    int num1, num2, op, result1, result2;//num1,num2��������op�������;
    
    int nummax, n; //nΪ��Ŀ������

    std::cout << "�����������λ��:" << "\n";
    cin >> nummax;
    cout << "��������Ҫ�õ��ĸ���:"<<"\n";
    cin >> n;
    cout << "��������Ҫʹ�õ������: (�ո����)" << "\n";
    char Operator[5];
    int i = 0;
    do {
        cin >> Operator[i];
        i++;
    } while (getchar() !='\n');


    double num_max = nummax;
    while (n != 0) {
        n--;
        //������̵�ʵ��
        srand(time(NULL));                  //��������ӳ�ʼ��
        num1 = rand() * pow(10.0, num_max) / (RAND_MAX + 1);//����������
        //or num1=rand()%10;
        num2 = rand() * pow(10.0, num_max) / (RAND_MAX + 1);//����������
        op = rand() * i / (RAND_MAX + 1);   //��������� 0��+��1��-��2��*��3��/

        cout << num1 << Operator[op] << num2 << "=" << endl;
        cin >> result1;
        switch (Operator[op]) {
        case '+':
            if (result1 == num1 + num2) cout << "You are right!" << endl;
            else cout << "You are wrong!" << endl;
            break;
        case '-':
            if (result1 == num1 - num2) cout << "You are right!" << endl;
            else cout << "You are wrong!" << endl;
            break;
        case '*':
            if (result1 == num1 * num2) cout << "You are right!" << endl;
            else cout << "You are wrong!" << endl;
            break;
        case '/':
            if (result1 == num1 / num2) cout << "You are right!" << endl;
            else cout << "You are wrong!" << endl;
            break;
        }

    }
    return 0;
}
