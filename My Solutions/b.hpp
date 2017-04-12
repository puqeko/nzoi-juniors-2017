#ifndef BATTLESHIP_HEADER
#define BATTLESHIP_HEADER

#include <iostream>
#include <queue>
#include <cstdlib>
#include <ctime>

#define BOARD_SIZE 10

char** generate_board();
void print_board(char** board);

char** generate_board() {
    srand(time(NULL));
    std::deque<int> ships;
    
    ships.push_back(5);
    ships.push_back(4);
    ships.push_back(3);
    ships.push_back(3);
    ships.push_back(2);
    
    char** board = new char*[BOARD_SIZE];
    
    for(int i = 0; i < BOARD_SIZE; i++) {
        board[i] = new char[BOARD_SIZE];
        
        for(int j = 0; j < BOARD_SIZE; j++) {
            board[i][j] = '.';
        }
    }
    
    char current_ship = 'a';
    while(!ships.empty()) {
        std::vector<std::pair<int, int> > to_place;
        
        int ship_length = ships.front();
        ships.pop_front();
        
        // should this ship be horizontal or vertical?
        bool vertical = rand() % 2;
        
        // okay, let's try and place this ship
        int x = rand()%BOARD_SIZE;
        int y = rand()%BOARD_SIZE;
        
        while(board[x][y] != '.') {
            x = rand()%BOARD_SIZE;
            y = rand()%BOARD_SIZE;
        }
        
        to_place.push_back(std::make_pair(x, y));
        
        int delta = rand()%2;
        if(delta == 0) delta = -1;
        
        int fails = 0;
        for(int i = 1; i < ship_length; i++) {
            if(vertical) {
                if(y+(delta * i) < BOARD_SIZE && y+(delta * i) >= 0 && board[x][y+(delta * i)] == '.')
                    to_place.push_back(std::make_pair(x, y+(delta * i)));
                else {
                    i = 0;
                    fails++;
                    delta *= -1;
                }
            } else {
                if(x+(delta * i) < BOARD_SIZE && x+(delta * i) >= 0 && board[x+(delta * i)][y] == '.')
                    to_place.push_back(std::make_pair(x+(delta*i), y));
                else {
                    i = 0;
                    fails++;
                    delta *= -1;
                }
            }
            if(fails >= ship_length) {
                ships.push_front(ship_length);
                break;
                
            }
        }
        
        if(fails >= ship_length) {
            
        } else {
            
            int n_placed = 0;
            for(std::vector<std::pair<int, int> >::iterator it = to_place.begin(); it != to_place.end(); it++) {
                std::pair<int, int> tp = *it;	
                if(n_placed >= ship_length) break;
                board[tp.first][tp.second] = current_ship;
                n_placed++;
            }
            current_ship++;
        }
    }
    
    return board;
}

void print_board(char** board) {
    for(int i = 0; i < BOARD_SIZE; i++) {
        for(int j = 0; j < BOARD_SIZE; j++) {
            std::cout << board[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void print_board(char board[][10]) {
    for(int i = 0; i < BOARD_SIZE; i++) {
        for(int j = 0; j < BOARD_SIZE; j++) {
            std::cout << board[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

#endif
