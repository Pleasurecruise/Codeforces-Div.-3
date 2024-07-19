/**
Accomplished using the JetBrains Academy plugin by JetBrains https://plugins.jetbrains.com/plugin/10081-jetbrains-academy

 To modify the template, go to Preferences -> Editor -> File and Code Templates -> Other
*/

#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    // Write your solution here
    int t;
    do
    {
        cin >> t;
    }while( t < 1 || t > 10000 );
    while(t--)
    {
        //输入
        int n,k;
        cin >> n >> k;
        int numbers[k];

        for(int i = 0; i < k; i++) {
            cin >> numbers[i];
        }

        //算法
        //取numbers[k]中的最大值
        int t,result;
        t = *max_element(numbers, numbers + k);
        result = (n - t)*2-k+1;
        cout << result << endl;
    }
    return 0;
}