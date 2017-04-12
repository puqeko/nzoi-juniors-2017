#include <cstdio>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> q;
    while(true) {
        int x; scanf("%d", &x);
        if(x == -1) {
            if(q.empty()) break;
            printf("%d\n", q.top());
            q.pop();
        }
        if(x >= 0) {
            q.push(x);
        }
    }
}
