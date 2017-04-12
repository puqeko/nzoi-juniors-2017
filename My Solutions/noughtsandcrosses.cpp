#include <iostream>

using namespace std;

int main() {
    char board[3][3]; // col, row
    
    // get input
    for (int row = 0; row < 3; row++)
        for (int col = 0; col < 3; col++)
            cin >> board[col][row];
    
    char mid = board[1][1];
    
    // diagonal
    if (mid != '_' && board[0][0] == mid && board[2][2] == mid) {
        
        cout << mid << " wins" << endl;
        return 0;
    } else if (mid != '_' && board[0][2] == mid && board[2][0] == mid) {
        
        cout << mid << " wins" << endl;
        return 0;
    } else {
        
        // across for rows
        for (int i = 0; i < 3; i++) {
            mid = board[1][i];
            
            if (mid != '_' && mid == board[0][i] && mid == board[2][i]) {
                cout << mid << " wins" << endl;
                return 0;
            }
        }
        
        // down for cols
        for (int i = 0; i < 3; i++) {
            mid = board[i][1];
            
            if (mid != '_' && mid == board[i][0] && mid == board[i][2]) {
                cout << mid << " wins" << endl;
                return 0;
            }
        }
    }
    
    // sadness
    cout << "No wins" << endl;
}
