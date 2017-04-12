#include "b.hpp"
#include <iostream>
#include <cctype>

using namespace std;

int main() {
    char** board = generate_board();
    char progress[10][10];
    
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            progress[i][j] = '.';
        }
    }
    
    while (1) {
        int x, y;
        cin >> x;
        
        if (x == -1)
            break;
        
        cin >> y;
        
        y = 10 - y;
        x -= 1;
        
        char loc = board[y][x];
        progress[y][x] = isalpha(loc) ? 'X' : '*';
        
        print_board(progress);
    }
}
