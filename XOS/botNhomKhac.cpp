#include "botNhomKhac.h"

using namespace std;
int WIDTH = 50;
int HEIGHT = 30;
Point player_rand(int board_game[][50], int player_id)
{
    int row, col;
    row = rand() % HEIGHT;
    col = rand() % WIDTH;
    return Point(row,col);
}

Point player_baseline(int board_game[][50], int player_id){
    Point p = check_win(board_game, player_id);
    if(p.x != -1 && p.y != -1)
            return p;
     else {
        p = defend(board_game, player_id);
        if(p.x != -1 && p.y != -1){

            return p;
        } else {
            return attack(board_game, player_id);
        }
    }
}

Point check_win(int board_game[][50], int player_id)
{
    return check_n_tile(board_game, player_id, 4);
}
Point defend(int board_game[][50], int player_id)
{
    Point p = check_n_tile(board_game, -player_id, 3);
    if(p.x != -1 && p.y != -1)
        return p;
     return Point(-1,-1);
}
Point attack(int board_game[][50], int player_id)
{
    Point p = check_n_tile(board_game, player_id, 3);
    if(p.x != -1 && p.y != -1)
        return p;

    p = check_n_tile(board_game, -player_id, 3);
    if(p.x != -1 && p.y != -1)
        return p;

    p = check_n_tile(board_game, player_id, 2);
    if(p.x != -1 && p.y != -1)
        return p;

    p = check_n_tile(board_game, -player_id, 2);
    if(p.x != -1 && p.y != -1)
        return p;

    p = check_n_tile(board_game, player_id, 1);
    if(p.x != -1 && p.y != -1)
        return p;

    p = check_n_tile(board_game, -player_id, 1);
    if(p.x != -1 && p.y != -1)
        return p;


    return player_rand(board_game,player_id);
}
Point check_n_tile(int board_game[][50], int player_id, int n)
{
    int score = 0;
    for(int i=0; i<HEIGHT; i++)
        for(int j=0; j<WIDTH; j++)
        {
            if(board_game[i][j] == 0)
            {
                // check 12h
                for(int k = 1; k<=n && i-k>=0 ; k++)
                {
                    if(board_game[i-k][j] != player_id)
                        break;
                    else score ++;
                }
                if(score == n) return Point(i,j);
                else score = 0;

                // check 1h
                for(int k = 1; k<=n && i-k >= 0 && j+k < WIDTH ; k++)
                {
                    if(board_game[i-k][j+k] != player_id)
                        break;
                    else score ++;
                }
                if(score == n) return Point(i,j);
                else score = 0;

                // check 3h
                for(int k = 1; k<=n && j+k < WIDTH; k++)
                {
                    if(board_game[i][j+k] != player_id)
                        break;
                    else score ++;
                }
                if(score == n) return Point(i,j);
                else score = 0;

                // check 5h
                for(int k = 1; k<=n && i+k < HEIGHT && j+k < WIDTH ; k++)
                {
                    if(board_game[i+k][j+k] != player_id)
                        break;
                    else score ++;
                }
                if(score == n) return Point(i,j);
                else score = 0;

                // check 6h
                for(int k = 1; k<=n && i+k < HEIGHT; k++)
                {
                    if(board_game[i+k][j] != player_id)
                        break;
                    else score ++;
                }
                if(score == n)
                {
                    return Point(i,j);
                }
                else score = 0;

                // check 7h
                for(int k = 1; k<=n && i+k < HEIGHT && j-k >= 0; k++)
                {
                    if(board_game[i+k][j-k] != player_id)
                        break;
                    else score ++;
                }
                if(score == n) return Point(i,j);
                else score = 0;

                // check 9h
                for(int k = 1; k<=n && j-k >= 0; k++)
                {
                    if(board_game[i][j-k] != player_id)
                        break;
                    else score ++;
                }
                if(score == n) return Point(i,j);
                else score = 0;

                // check 11h
                for(int k = 1; k<=n && i-k>=0 && j-k >=0; k++)
                {
                    if(board_game[i-k][j-k] != player_id)
                        break;
                    else score ++;
                }
                if(score == n) return Point(i,j);
                else score = 0;
            }
        }
    if(score == 0) return Point(-1,-1);
}

