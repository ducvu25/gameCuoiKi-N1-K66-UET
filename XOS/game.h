#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <unistd.h>
//============ Thiet lap======
void gotoXY(int x, int y);
void gotoxy(int x, int y); // danh co
void TextColor(int color);

//He thong
void dog(int x, int &y, int &d, int color);
void giaoDienBatDau();
void Vien(int x, int y);
void Menu(int x, int y, int &ChucNang, int &CheDo);
void giaoDienThoat();

//======Game=====
void VSBot(int CheDo);
void HaiNguoi();
void BotKhac(int &x, int &y, int a[][50]);
void Bott();
// === Ban co, check Win
void BanCo(int x, int y, int a[30][50]);
int CheckWin(int a[30][50]);
// ==== Choi======
void Player(int &x, int &y, int a[30][50], int &d);
// ==== Bot======
// Ngang:   u = 0, v = 1;
// Doc:     u = 1, v = 0;
// Cheo Xuoi: u = v = 1;
// Cheo Nguoc: u = -1. v = 1;
long DiemTC(int x, int y, int a[30][50], long *TC, long *PN, int u, int v, int player);
long DiemPN(int x, int y, int a[30][50], long *TC, long *PN, int u, int v, int player);
void Bot(int a[30][50], int &x, int &y, long *TC, long *PN, int player);
void BotVsBot();
