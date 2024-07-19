/**
Accomplished using the JetBrains Academy plugin by JetBrains https://plugins.jetbrains.com/plugin/10081-jetbrains-academy

 To modify the template, go to Preferences -> Editor -> File and Code Templates -> Other
*/

#include <iostream>
#include <vector>
using namespace std;
int main() {
    // Write your solution here
    //输入

    int t,n,m,k;
    cin >> t;

    while(t--)
    {
        cin >> n >> m >> k ;

        //算法
        vector<int> number(m);
        for(int i=0;i<m;++i)
        {
            number[i] = i+1;
        }
        vector<int> number2(n-m);
        for(int j=0;j<n-m;++j)
        {
            number2[j] = n-j;
        }

        vector<int> result;
        result.insert(result.end(),number2.begin(), number2.end());
        result.insert(result.end(),number.begin(),number.end());
        for(int k=0;k<n;++k)
        {
            cout << result[k] << " ";
        }
    }

    return 0;
}