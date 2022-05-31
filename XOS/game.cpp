#include "game.h"
#include "botNhomKhac.h"

using namespace std;
long TC1[7] = {0, 3, 24, 192, 1536, 12288, 98304};
long PN[7] = {0, 1, 9, 81, 729, 6561, 59999};
long TC2[7] = {0, 1, 3, 9, 81, 12200, 90304};
void gotoXY(int x, int y){
    COORD coord;
    coord.X = y;
    coord.Y = x;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void gotoxy(int x, int y){
    int i = 4, j = 20;
    gotoXY(x*2 + i, y*2+ j);
}
void TextColor(int color){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
void giaoDienBatDau(){
    int x = 20, y = 30, d = 150;
    while(y < 150){
        gotoXY(x+8, 60);
        if(y % 3 == 0)  cout << "LOADING .      ";
        else    if(y % 3 == 1)  cout << "LOADING . .   ";
        else    cout << "LOADING . . .";
        dog(x, y, d, y/30 + 10);
    }
}
void dog(int x, int &y, int &d, int color){
            TextColor(color);
            gotoXY(x+1, y); cout << "                   ;~~,__";    gotoXY(x+1, y + strlen("                   ;~~,__") + d/12); TextColor(12); cout << "O"; TextColor(color);
            gotoXY(x+2, y); cout << "    :-....,-------'`-'._.'";
            gotoXY(x+3, y); cout << "     `-,,,  ,       ,'~~'";
            gotoXY(x+4, y); cout << "         ; ,'~.__; /";
            gotoXY(x+5, y); cout << "         :|      :|";
            gotoXY(x+6, y); cout << "        `-'     `-'";
            y+=1;
            d-=1;
            Sleep(600);

            gotoXY(x+1, y); cout << "                   ;~~,__";    gotoXY(x+1, y + strlen("                   ;~~,__") + d/12); TextColor(12); cout << "X"; TextColor(color);
            gotoXY(x+2, y); cout << "    :-....,-------'`-'._.'";
            gotoXY(x+3, y); cout << "     `-,,,  ,       ,'~~'";
            gotoXY(x+4, y); cout << "        ; ,'~.__; /--.";
            gotoXY(x+5, y); cout << "        :| :|   :|``(;";
            gotoXY(x+6, y); cout << "        `-'     `-'";
            y+=2;
            d-=2;
            Sleep(500);

            gotoXY(x+1, y); cout << "                   ;~~,__";    gotoXY(x+1, y + strlen("                   ;~~,__") + d/12); TextColor(12); cout << "O"; TextColor(color);
            gotoXY(x+2, y); cout << "    :-....,-------'`-'._.'";
            gotoXY(x+3, y); cout << "     `-,,,  ,       ,'~~'";
            gotoXY(x+4, y); cout << "       ,'_,'~.__; '--.";
            gotoXY(x+5, y); cout << "      //'       ````(;";
            gotoXY(x+6, y); cout << "     `-'";
            y+=3;
            d-=3;
            Sleep(400);

            gotoXY(x+1, y); cout << "               .--~~,__";      gotoXY(x+1, y + strlen("                   ;~~,__") + d/12); TextColor(12); cout << "X"; TextColor(color);
            gotoXY(x+2, y); cout << "   :-....,-------`~~'._.'";
            gotoXY(x+3, y); cout << "    `-,,,  ,_      ;'~U'";
            gotoXY(x+4, y); cout << "       ,'_,'~.__; '--.";
            gotoXY(x+5, y); cout << "     _,-' ,'`-__; '--.";
            gotoXY(x+6, y); cout << "    (_/'~~      ''''(;";
            y+=4;
            d-=4;
            Sleep(300);
}
void giaoDienThoat(){
    system("cls");
    int x = 10, y = 60;
    for(int i=0; i<10; i++){
        if(i % 3 == 0)  TextColor(7);
        if(i % 3 == 1)  TextColor(14);
        if(i % 3 == 2)  TextColor(11);
    gotoXY(x + 1, y); cout << "88888888888888888888888888888888888888888888888888888888888888888888888";
    gotoXY(x + 2, y); cout << "88.._|      | `-.  | `.  -_-_ _-_  _-  _- -_ -  .'|   |.'|     |  _..88";
    gotoXY(x + 3, y); cout << "88   `-.._  |    |`!  |`.  -_ -__ -_ _- _-_-  .'  |.;'   |   _.!-'|  88";
    gotoXY(x + 4, y); cout << "88      | `-!._  |  `;!  ;. _______________ ,'| .-' |   _!.i'     |  88";
    gotoXY(x + 5, y); cout << "88..__  |     |`-!._ | `.| |_______________||. '|  _!.;'   |     _|..88";
    gotoXY(x + 6, y); cout << "88   |`` ..__ |    |` ;.| i|_|           |_| | _!-|   |   _|..-|     88";
    gotoXY(x + 7, y); cout << "88   |      |``--..|_ | `;!|l|           |1|.'j   |_..!-'|     |     88";
    gotoXY(x + 8, y); cout << "88   |      |    |   |`-,!_|_|           |_||.!-;'  |    |     |     88";
    gotoXY(x + 9, y); cout << "88___|______|____!.,.!,.!,!|q|    ZERO   |p|,!,.!.,.!..__|_____|_____88";
    gotoXY(x + 10, y); cout << "88      |     |    |  |  | |_|     -     |_|| |   |   |    |      |  88";
    gotoXY(x + 11, y); cout << "88      |     |    |..!-;'i|r|    CN9    |r| |`-..|   |    |      |  88";
    gotoXY(x + 12, y); cout << "88      |    _!.-j'  | _!,'|_|           |_||!._|  `i-!.._ |      |  88";
    gotoXY(x + 13, y); cout << "88     _!.- |    | _. |  !;|1|           |l|`.| `-._|    |``-.._  |  88";
    gotoXY(x + 14, y); cout << "88..-i'     |  _. |  !-| ! |_|           |_|.|`-. | ``._ |     |`` ..88";
    gotoXY(x + 15, y); cout << "88   |      |.|    |.|  !| |u|           |n| |`. |`!   | ` .    |    88";
    gotoXY(x + 16, y); cout << "88   |  _.-'  |  .'  |.' |/|_|           |_|.! |`!  `,.|    |-._|    88";
    gotoXY(x + 17, y); cout << "88  _!  |     !. |  . | .'|[@]           [@] \ |  `.| `._  |   `-._   88";
    gotoXY(x + 18, y); cout << "88-'    |   .'   |.|  |/| /                 \|`.  |`!    |.|      |`- 88";
    gotoXY(x + 19, y); cout << "88      |_.'|   .' | .' |/                   \  \ |  `.  | `._-   |    88";
    gotoXY(x + 20, y); cout << "88     .'   | .'   |/|  /                     \ |`!   |`.|    `.  |   88";
    gotoXY(x + 21, y); cout << "88  _.'     !'|   .' | /                       \|  `  |  `.    |`.|   88";
    gotoXY(x + 22, y); cout << "88  _.'     !'|   .' |/                         \|  ` |   `.   |`.|   88";
    Sleep(500);
    }
}

//He thong
void Vien(int x, int y){
    TextColor(11);
    gotoXY(x+1, y); cout << " _ | | ___________________________________________ | | __";
    gotoXY(x+2, y); cout << "(__ _______________________________________________ _____)";
    gotoXY(x+3, y); cout << "   | |                                            | |";
    gotoXY(x+4, y); cout << "   | |                                            | |";
    gotoXY(x+5, y); cout << "   | |                                            | |";
    gotoXY(x+6, y); cout << "   | |                                            | |";
    gotoXY(x+7, y); cout << "   | |                                            | |";
    gotoXY(x+8, y); cout << "   | |                                            | |";
    gotoXY(x+9, y); cout << " _| | | _________________________________________| | | __";
    gotoXY(x+10, y); cout << "(__ ____________________________________________ __ ___)";
    gotoXY(x+11, y); cout << "   | |                                          | |";
    TextColor(12);
    gotoXY(x+12, y + 15); cout << "NHOM ZERO - K66 - DACLC2 - UET";
}
void Menu(int x, int y, int &ChucNang, int &CheDo){
    char dk;
    Thoat2:
    system("cls");
    Vien(x - 4, y - 20);
    TextColor(14);
    gotoXY(x + 1, y + 0); cout << " Hai nguoi choi ";
    gotoXY(x + 2, y + 0); cout << " Bot vs Bot ";
    gotoXY(x + 3, y + 0); cout << " Gioi thieu ";
    gotoXY(x + 4, y + 0); cout << " Thoat ";
    TextColor(11);
    gotoXY(x + 0, y + 0); cout << ">Choi voi may<";
    do{
        if(kbhit()){
            dk = getch();
            switch(dk){
                case 'w':{
                    ChucNang--;
                    if(ChucNang == -1)
                        ChucNang = 4;
                    break;
                }
                case 'x':{
                    ChucNang++;
                    if(ChucNang == 5)
                        ChucNang = 0;
                    break;
                }
                case 's':{
                    switch(ChucNang){
                        case 0:{
                            system("cls");
                            char d;
                            CheDo = 0;
                            TextColor(14);
                            gotoXY(x + 1, y); cout << " Kho ";
                            gotoXY(x + 2, y); cout << " Thoat ";
                            TextColor(11);
                            gotoXY(x, y); cout << ">De<";
                            do{
                                if(kbhit()){
                                    TextColor(14);
                                    gotoXY(x, y); cout << " De ";
                                    gotoXY(x + 1, y); cout << " Kho ";
                                    gotoXY(x + 2, y); cout << " Thoat ";
                                    d = getch();
                                    switch(d){
                                        case 'w':{
                                            CheDo--;
                                            if(CheDo == -1)
                                                CheDo = 2;
                                            break;
                                        }
                                        case 'x':{
                                            CheDo++;
                                            if(CheDo == 3)
                                                CheDo = 0;
                                            break;
                                        }
                                        case 's':{
                                            if(CheDo != 2)  VSBot(CheDo);
                                            goto Thoat2;
                                        }
                                    }
                                    TextColor(11);
                                    switch(CheDo){
                                        case 0:{
                                            gotoXY(x, y); cout << ">De<";
                                            break;
                                        }
                                        case 1:{
                                            gotoXY(x+1, y); cout << ">Kho<";
                                            break;
                                        }
                                        case 2:{
                                            gotoXY(x+2, y); cout << ">Thoat<";
                                            break;
                                        }
                                    }
                                }
                            }while(1);
                            break;
                        }
                        case 1:{
                            system("cls");
                            HaiNguoi();
                            system("cls");
                            break;
                        }
                        case 2:{
                            system("cls");
                            Bott();
                            system("cls");
                            break;
                        }
                        case 3:{
                            system("cls");
                            gotoXY(x, y); cout << "Thanh vien nhom Zero: ";
                            gotoXY(x + 1, y); cout << "Leader - Vu Trung Duc - 21021577";
                            gotoXY(x + 2, y); cout << "Member - Vu Phuong Nhi - 21021622";
                            gotoXY(x + 3, y); cout << "Member - Nguyen Van Hiep - 21021582";
                            gotoXY(x + 4, y); cout << "Member - Nguyen Phuong Anh - 21021557";
                            gotoXY(x + 5, y); cout << "Member - To Thanh Tung - 21020736";
                            gotoXY(x+6, y); cout << "Bam phim bat ki de thoat";
                            getch();
                            system("cls");
                            break;
                        }
                        case 4:{
                            giaoDienThoat();
                            return;
                        }
                    }
                    break;
                }
            }
            Vien(x - 4, y - 20);
            TextColor(14);
            gotoXY(x + 0, y + 0); cout << " Choi voi may ";
            gotoXY(x + 1, y + 0); cout << " Hai nguoi choi ";
            gotoXY(x + 2, y + 0); cout << " Bot vs Bot ";
            gotoXY(x + 3, y + 0); cout << " Gioi thieu ";
            gotoXY(x + 4, y + 0); cout << " Thoat ";
            TextColor(11);
            switch(ChucNang){
                case 0:{
                    gotoXY(x + 0, y + 0); cout << ">Choi voi may<";
                    break;
                }
                case 1:{
                    gotoXY(x + 1, y + 0); cout << ">Hai nguoi choi<";
                    break;
                }
                case 2:{
                    gotoXY(x + 2, y + 0); cout << ">Bot vs Bot<";
                    break;
                }
                case 3:{
                    gotoXY(x + 3, y + 0); cout << ">Gioi thieu<";
                    break;
                }
                case 4:{
                    gotoXY(x + 4, y + 0); cout << ">Thoat<";
                    break;
                }
            }
        }
    }while(1);
}

//======Game=====

// === Ban co, check Win
void BanCo(int x, int y, int a[30][50]){
    TextColor(6);
    for(int i=0; i<30; i++)
        for(int j=0; j<50; j++)
            a[i][j] = 0;
    for(int i=0; i<61; i++)
        for(int j=0; j<101; j++){
            gotoXY(x + i,y + j);
            if(j % 2 == 1 && i % 2 == 1)cout << char (196);
            if(i == 0 && j %2 == 0)     cout << char (194);
            if(i != 0 && i != 60 && j % 2 == 0 && i % 2 == 1) cout << char (197);
            if(i != 0 && i != 60 && j % 2 == 0 && i % 2 == 0) cout << char (179);
            if(i == 60 && j % 2 == 0)   cout << char (193);
        }
}
int CheckWin(int a[30][50]){
	char c;
	int d;
	for(int i=0; i<30; i++)
		for(int j=0; j<50; j++)
			if(a[i][j] != 0){
				if(a[i][j] == 1)	c = 'X';
				else	c = 'O';
				if(i + 5 < 30 && a[i][j] == a[i+1][j] && a[i][j] == a[i+2][j] && a[i][j] == a[i+3][j] && a[i][j] == a[i+4][j]
                    && i - 1 >= 0 ){
					for(int k=0; k<5; k++){
						if(k % 2 == 1)	d = 15;
						if(k % 2 == 0) d = 4;
						TextColor(d);
						gotoxy(i+0, j); cout << c;
						gotoxy(i+1, j); cout << c;
						gotoxy(i+2, j); cout << c;
						gotoxy(i+3, j); cout << c;
						gotoxy(i+4, j); cout << c;
						Sleep(1000);
					}
					return a[i][j];
				}
				if(j + 5 < 50 && a[i][j] == a[i][j+1] && a[i][j] == a[i][j+2] && a[i][j] == a[i][j+3] && a[i][j] == a[i][j+4]
                    && j -1 >= 0 ){
					for(int k=0; k<5; k++){
						if(k % 2 == 1)	d = 15;
						if(k % 2 == 0) d = 4;
						TextColor(d);
						gotoxy(i+0, j+0); cout << c;
						gotoxy(i+0, j+1); cout << c;
						gotoxy(i+0, j+2); cout << c;
						gotoxy(i+0, j+3); cout << c;
						gotoxy(i+0, j+4); cout << c;
						Sleep(1000);
					}
					return a[i][j];
				}
				if(i + 5 < 30 && j + 5 < 50 && a[i][j] == a[i+1][j+1] && a[i][j] == a[i+2][j+2] && a[i][j] == a[i+3][j+3] && a[i][j] == a[i+4][j+4]
                    && i - 1 >= 0 && j - 1 >= 0 ){
					for(int k=0; k<5; k++){
						if(k % 2 == 1)	d = 15;
						if(k % 2 == 0) d = 4;
						TextColor(d);
						gotoxy(i+0, j+0); cout << c;
						gotoxy(i+1, j+1); cout << c;
						gotoxy(i+2, j+2); cout << c;
						gotoxy(i+3, j+3); cout << c;
						gotoxy(i+4, j+4); cout << c;
						Sleep(1000);
					}
					return a[i][j];
				}
				if(i + 5 < 30 && j - 4 >= 0 && a[i][j] == a[i+1][j-1] && a[i][j] == a[i+2][j-2] && a[i][j] == a[i+3][j-3] && a[i][j] == a[i+4][j-4]
                    && i > 0 && j < 30 ){
					for(int k=0; k<5; k++){
						if(k % 2 == 1)	d = 15;
						if(k % 2 == 0) d = 4;
						TextColor(d);
						gotoxy(i+0, j+0); cout << c;
						gotoxy(i+1, j-1); cout << c;
						gotoxy(i+2, j-2); cout << c;
						gotoxy(i+3, j-3); cout << c;
						gotoxy(i+4, j-4); cout << c;
						Sleep(1000);
					}
					return a[i][j];
				}
			}
	return 0;
}

//===== Choi ===
void Player(int &x, int &y, int a[30][50], int &d){
    char dk;
    do{
        if(kbhit()){
            dk = getch();
            switch(dk){
                case 'w':{
                    x--;
                    if(x == -1)
                        x = 0;
                    break;
                }
                case 'x':{
                    x++;
                    if(x == 30)
                        x = 29;
                    break;
                }
                case 'a':{
                    y--;
                    if(y == -1)
                        y = 0;
                    break;
                }
                case 'd':{
                    y++;
                    if(y == 50)
                        y = 49;
                    break;
                }
                case 's':{
                    if(a[x][y] == 0){
                            cout << "\a";
                        return;
                    }
                    break;
                }
                case '0':{
                    d = 1;
                    return;
                }
            }
          gotoxy(x, y);
        }
    }while(1);
}
// ========== Bot===========
long DiemTC(int x, int y, int a[30][50], long *TC, long *PN, int u, int v, int player){
    long diemTong = 0;
	long diemTC = 0;
	int ta = 0, dich = 0;
	if(u == -1 && v == 1){
        for(int i=1; i< 6 && y + i < 50 && x - i >= 0; i++)
            if(a[x-i][y+i] == player){
                ta++;
            }else if(a[x-i][y+i] == -player){
                dich++;
                break;
            }else	break;

        for(int i=1; i< 6 && x + i < 30 && y - i >= 0; i++)
            if(a[x+i][y-i] == player){
                ta++;
            }else if(a[x+i][y-i] == -player){
                dich++;
                break;
            }else	break;
	}else{
        for(int i=1; i< 6 && y + v*i < 50 && x + u*i < 30; i++)
            if(a[x + u*i][y + v*i] == player){
                ta++;
            }else if(a[x + u*i][y + v*i] == -player){
                dich++;
                break;
            }else	break;

        for(int i=1; i< 6 && y - v*i >= 0 && x - u*i>= 0; i++)
            if(a[x - u*i][y - v*i] == 1){
                ta++;
            }else if(a[x - u*i][y - v*i] == -1){
                dich++;
                break;
            }else	break;
	}
	if(dich == 2)	return 0;
	diemTong -= PN[dich + 1];
	diemTong += TC[ta];
	return diemTong;
}
long DiemPN(int x, int y, int a[30][50], long *TC, long *PN, int u, int v, int player){
    long diemTong = 0;
	long diemTC = 0;
	int ta = 0, dich = 0;
	if(u == -1 && v == 1){
       for(int i=1; i< 6 && y + i < 50 && x - i >= 0; i++)
		if(a[x-i][y+i] == player){
			ta++;
			break;
		}else if(a[x-i][y+i] == -player){
			dich++;
		}else	break;

	   for(int i=1; i< 6 && y - i >= 0 && x + i < 30; i++)
		if(a[x+i][y-i] == player){
			ta++;
			break;
		}else if(a[x+i][y-i] == -player){
			dich++;
		}else	break;
	}else{
        for(int i=1; i< 6 && y + v*i < 50 && x + u*i < 30; i++)
		if(a[x + u*i][y + v*i] == player){
			ta++;
			break;
		}else if(a[x + u*i][y + v*i] == -player){
			dich++;
		}else	break;

	for(int i=1; i< 6 && y - v*i >= 0 && x - u*i >= 0; i++)
		if(a[x - u*i][y - v*i] == player){
			ta++;
			break;
		}else if(a[x - u*i][y - v*i] == -player){
			dich++;
		}else	break;
	}
	if(ta == 2)	return 0;
	diemTong += PN[dich];
	return diemTong;
}

void Bot(int a[30][50], int &x, int &y, long *TC, long *PN, int player){
    int max = 0;
	for(int i=0; i<30; i++)
		for(int j=0; j<50; j++)
			if(a[i][j] == 0){
				long AT = DiemTC(i, j, a, TC, PN, 0, 1, player) + DiemTC(i, j, a, TC, PN, 1, 0, player) + DiemTC(i, j, a, TC, PN, 1, 1, player) + DiemTC(i, j, a, TC, PN, -1, 1, player);
				long DF = DiemPN(i, j, a, TC, PN, 0, 1, player) + DiemPN(i, j, a, TC, PN, 1, 0, player) + DiemPN(i, j, a, TC, PN, 1, 1, player) + DiemPN(i, j, a, TC, PN, -1, 1, player);
				long diem = AT > DF ? AT : DF;
				if(max < diem){
					max = diem;
					x = i;
					y = j;
				}
			}
}
void VSBot(int CheDo){
    system("cls");
    int x = 12, y = 23;
    int BatDau = 0;
    int a[30][50];
    BanCo(4, 19, a);
    int stop = 0;
    do{
        TextColor(11);
        gotoXY(0, 50); cout << "X danh";
        if(BatDau == 0)
            BatDau = 1;
        else    Player(x, y, a, stop);
        if(stop == 1)   return;
        gotoxy(x, y); cout << "X";
        a[x][y] = 1;
        if(CheckWin(a) == 1){
            gotoXY(15, 50); cout << "X win";
            getch();
            return;
        }
        TextColor(12);
        gotoXY(0, 50); cout << "O danh";
        if(CheDo == 0)  Bot(a, x, y, TC2, PN, -1);
        else            Bot(a, x, y, TC1, PN, -1);
        gotoxy(x, y); cout << "O";
        a[x][y] = -1;
        if(CheckWin(a) == -1){
            gotoXY(15, 50); cout << "O win";
            getch();
            return;
        }
    }while(1);
}
void HaiNguoi(){
    system("cls");
    int x = 12, y = 23;
    int BatDau = 0;
    int a[30][50];
    BanCo(4, 19, a);
    int stop = 0;
    do{
        TextColor(11);
        gotoXY(0, 50); cout << "X danh";
        if(BatDau == 0)
            BatDau = 1;
        else    Player(x, y, a, stop);
        gotoxy(x, y); cout << "X";
        a[x][y] = 1;
        if(stop == 1)   return;
        if(CheckWin(a) == 1){
            gotoXY(15, 50); cout << "X win";
            getch();
            return;
        }
        TextColor(12);
        gotoXY(0, 50); cout << "O danh";
        Player(x, y, a, stop);
        if(stop == 1)   return;
        gotoxy(x, y); cout << "O";
        a[x][y] = -1;
        if(CheckWin(a) == -1){
            gotoXY(15, 50); cout << "O win";
            getch();
            return;
        }
    }while(1);
}
void BotKhac(int &x, int &y, int a[][50]){
    Point P = player_baseline(a, -1);
    x = P.x;
    y = P.y;
}
void BotVsBot(){
    int x = 12, y = 25;
    int BatDau = 0;
    int a[30][50];
    BanCo(4, 19, a);
    do{
        TextColor(11);
        gotoXY(0, 50); cout << "X danh";
        if(BatDau == 0)
            BatDau = 1;
        else    Bot(a, x, y, TC1, PN, 1);
        gotoxy(x, y); cout << "X";
        a[x][y] = 1;
        if(CheckWin(a) == 1){
            gotoXY(15, 50); cout << "X win";
            getch();
            return;
        }
        Sleep(1000);
        TextColor(12);
        gotoXY(0, 50); cout << "O danh";
        BotKhac(x, y, a);
        gotoxy(x, y); cout << "O";
        a[x][y] = -1;
        if(CheckWin(a) == -1){
            gotoXY(15, 50); cout << "O win";
            getch();
            return;
        }
    }while(1);
}

void Bott(){
    int x = 12, y = 25;
    int BatDau = 0;
    int a[30][50];
    bool turn_player1 = true;
    int turn_limit = 3000;
    int row, col, winner, repeat_pos;
    BanCo(4, 19, a);
    a[x][y] = -1;
    TextColor(12);
    gotoxy(x, y); cout << "O";
    do{
        turn_player1 = true;
        turn_limit = 3000;
            while(turn_limit > 0){
                repeat_pos = 5;
                if(turn_player1){
                    TextColor(11);
                    gotoXY(0, 50); cout << "X danh";
                    do{
                        Bot(a, x, y, TC1, PN, 1);
                        if(repeat_pos == 0){
                            gotoXY(30, 40);
                            cout << "Player 1 is so stupid";
                            return;
                        }
                        repeat_pos--;
                    }while(a[x][y] != 0);

                    a[x][y] = 1;
                    gotoxy(x, y); cout << "X";
                }else{
                    TextColor(12);
                    gotoXY(0, 50); cout << "O danh";
                    do{
                        BotKhac(x, y, a);
                        if(repeat_pos == 0){
                            gotoXY(30, 40);
                            cout << "Player 2 is so stupid";
                            return;
                        }
                        repeat_pos--;
                    }while(a[x][y] != 0);
                    a[x][y] = -1;
                    gotoxy(x, y); cout << "O";
                }
            winner = CheckWin(a);
            if(winner != 0){
                gotoXY(30, 40);
                cout << winner << " win";
                return;
            }
            turn_player1 = !turn_player1;
            turn_limit--;
            Sleep(500);
            }
    }while(1);
}
