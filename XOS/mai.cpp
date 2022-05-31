#include "game.h"

using namespace std;

int main(){
    int x = 20, y = 50;
    int ChucNang = 0, CheDo = 0;
   gotoXY(15,30); cout << "Phong to va bam phim bat ki de bat dau";
   getch();
   system("cls");
   giaoDienBatDau();
   Menu(x, y, ChucNang, CheDo);
   return 0;
}
