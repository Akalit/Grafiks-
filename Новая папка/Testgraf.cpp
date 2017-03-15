#include <graphics.h>

using namespace std;

void face () {
 int x = getmaxx();
 int y = getmaxy();

 setfillstyle(1,YELLOW);
 fillellipse(x/2,y/2,70,70);

 setfillstyle(1,BLACK);
 fillellipse(x/2-30,y/2-25,10,12);
 fillellipse(x/2+30,y/2-25,10,12);

 setcolor(BLACK);
 line(x/2,y/2-10,x/2,y/2+15);
}


int main() {

 int gdriver = DETECT, gmode, errorcode;
 initgraph(&gdriver,&gmode,"");

  int x = getmaxx();
 int y = getmaxy();

for(int q =0; q =6;q++) {


 face();
 arc (x/2,y/2,220,320,50);
 delay(1000);
 cleardevice();

 face();
 arc(x/2,y/2+75,45,135,45);
 delay(1000);
 cleardevice();

  face();
 line(x/2-30,y/2+40,x/2+30,y/2+40);
 delay(1000);
 cleardevice();

 face();
 setfillstyle(1,WHITE);
  pieslice(x/2,y/2+30,180,0,30);
  delay(1000);
  cleardevice();


 face();
 setfillstyle(1,WHITE);
  pieslice(x/2,y/2+50,0,180,30);
  delay(1000);
  cleardevice();
 }


 getch();
 closegraph();

return 0;}
