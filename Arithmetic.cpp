#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>
using namespace std;
using namespace std;

int main()
{
    int num1, num2, op, result1, result2;//num1,num2操作数；op：运算符;
    
    int nummax, n; //n为题目个数；

    std::cout << "请输入最大数位数:" << "\n";
    cin >> nummax;
    cout << "请输入想要得到的个数:"<<"\n";
    cin >> n;
    cout << "请输入想要使用的运算符: (空格隔开)" << "\n";
    char Operator[5];
    int i = 0;
    do {
        cin >> Operator[i];
        i++;
    } while (getchar() !='\n');


    double num_max = nummax;
    while (n != 0) {
        n--;
        //随机过程的实现
        srand(time(NULL));                  //随机数种子初始化
        num1 = rand() * pow(10.0, num_max) / (RAND_MAX + 1);//生成运算数
        //or num1=rand()%10;
        num2 = rand() * pow(10.0, num_max) / (RAND_MAX + 1);//生成运算数
        op = rand() * i / (RAND_MAX + 1);   //生成运算符 0：+，1：-，2：*，3：/

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
