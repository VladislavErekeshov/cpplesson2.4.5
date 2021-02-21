/* Вводится одно натуральное трёхзначное число.Догадайтесь по двум открытым тестам, какую надо написать программу, чтобы она прошла все оставшиеся закрытые наборы исходных данных.
Sample Input 1:

542
Sample Output 1 :

80

Sample Input 2 :

293
    
Sample Output 2 :

108
    */

#include <iostream>
using namespace std;
int main()
{
    int x, a, b, c;
    cin >> x;
    a = x / 100;
    b = x / 10 % 10;
    c = x % 10;
    cout << a * b * c * 2;
    return 0;
}
