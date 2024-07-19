/**
Accomplished using the JetBrains Academy plugin by JetBrains https://plugins.jetbrains.com/plugin/10081-jetbrains-academy

 To modify the template, go to Preferences -> Editor -> File and Code Templates -> Other
*/

#include <iostream>
using namespace std;
int main() {
    // Write your solution here
    int t;
    cin >> t;
    while(t--)
    {
        int x1,x2,x3;
        cin >> x1>>x2>>x3;

        int max = x1;
        int min = x1;

        if(x2>max)max=x2;
        if(x2<min)min=x2;

        if(x3>max)max=x3;
        if(x3<min)min=x3;

        int result = max-min;
        cout << result << endl;
    }

    return 0;
}