#include <bits/stdc++.h>
using namespace std;
bool f(int num, int *temp)
{
    if (num>=0 && num <=9){
        int lastdigit = (*temp)%10;
        (*temp) /= 10;
        return (num == lastdigit);
    }

    bool result = (f(num / 10, temp) && (num % 10) == ((*temp) % 10));
    (*temp) /= 10;
    return result;
}

int main()
{
    int num = 12621;
    int anotherNum = 12621;
    int *temp = &anotherNum;
    cout << f(num,temp);
    return 0;
}