/**
 Accomplished using the JetBrains Academy plugin by JetBrains https://plugins.jetbrains.com/plugin/10081-jetbrains-academy

 To modify the template, go to Preferences -> Editor -> File and Code Templates -> Other
*/

//个人初步思路：
//判断所有相邻Log之间的距离<=m
//当相邻Log之间的距离>m时，判断是否存在Crocodile
//如果不存在Crocodile，将所有>m的部分相加判断是否<=k
//不足：
//未考虑从L到W再到L（即使相邻Log之间的距离>m）

//BFS搜索
//不足：
//数值较大时，会超时或内存过大
// #include <iostream>
// #include <queue>
// #include <vector>
// #include <cstring>
// using namespace std;
//
// struct State {
//     int position;
//     int swum;
//     State(int p, int s) : position(p), swum(s) {}
// };
//
// bool canErnKorCross(int n, int m, int k, const string& river) {
//     vector<int> minSwims(n + 2, INT_MAX);
//     queue<State> q;
//
//     q.push(State(0, 0));
//     minSwims[0] = 0;
//
//     while (!q.empty()) {
//         State current = q.front();
//         q.pop();
//
//         if (current.position == n + 1) {
//             return true;
//         }
//
//         // Jump from logs or banks
//         if (current.position == 0 || (current.position > 0 && river[current.position - 1] == 'L')) {
//             for (int jump = 1; jump <= m; ++jump) {
//                 int newPos = current.position + jump;
//                 if (newPos > n + 1 || (newPos <= n && river[newPos - 1] == 'C')) {
//                     continue;
//                 }
//                 if (current.swum < minSwims[newPos]) {
//                     minSwims[newPos] = current.swum;
//                     q.push(State(newPos, current.swum));
//                 }
//             }
//         }
//
//         // Swim if in the water
//         if (current.position > 0 && current.position <= n && river[current.position - 1] == 'W' && current.swum < k) {
//             int newPos = current.position + 1;
//             if (newPos <= n && river[newPos - 1] == 'C') {
//                 continue;
//             }
//             if (current.swum + 1 < minSwims[newPos]) {
//                 minSwims[newPos] = current.swum + 1;
//                 q.push(State(newPos, current.swum + 1));
//             }
//         }
//     }
//
//     return false;
// }
//
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//
//     int t;
//     cin >> t;
//
//     while (t--) {
//         int n, m, k;
//         cin >> n >> m >> k;
//         string river;
//         cin >> river;
//
//         if (canErnKorCross(n, m, k, river)) {
//             cout << "YES\n";
//         } else {
//             cout << "NO\n";
//         }
//     }
//
//     return 0;
// }

//动态规划
#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+4;
signed main()
{
    string s;
    int m,t,n,k,c=0,p=1;
    cin>>t;
    while(t--){
        cin>>n>>m>>k;
        cin>>s;
        p=1;
        c=0;
        for(int i=0;i<n;i++){
            c++;
            if(s[i]=='L') {
                c=0;
            }
            if(c>=m){
                k--;
                if(s[i]=='C') p=0;
            }
        }
        if(k>=0&&p) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}