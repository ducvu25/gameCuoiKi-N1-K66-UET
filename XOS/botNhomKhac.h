#include "game.h"

using namespace std;
struct Point{
    int x;
    int y;
    Point(int a, int b){
        x = a;
        y = b;
    }
};


Point check_win(int board_game[][50], int player_id);
Point defend(int board_game[][50], int player_id);
Point attack(int board_game[][50], int player_id);
Point check_n_tile(int board_game[][50], int player_id, int n);
Point player_baseline(int board_game[][50], int player_id);
Point player_rand(int board_game[][50], int player_id);
