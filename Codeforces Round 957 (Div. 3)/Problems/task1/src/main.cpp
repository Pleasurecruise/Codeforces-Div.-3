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
    }while( t < 1 || t > 1000 );
    while(t--)
    {
        int a,b,c;

        do
        {
            cin>>a>>b>>c;
        }while(a,b,c < 1 || a,b,c > 10);

        int numbers[3] = {a, b, c};

        sort(numbers, numbers + 3);

        for(int i = 0; i < 5; i++) {
            // 优先增加最小的数
            if(numbers[1] - numbers[0] > 0) {
                numbers[0]++;
            } else if(numbers[2] - numbers[1] > 0) {
                numbers[1]++;
            } else {
                numbers[2]++;
            }
        }
        int result = numbers[0] * numbers[1] * numbers[2];
        cout << result << endl;
    }
    return 0;
}