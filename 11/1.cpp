#include <graphics.h>
#include <conio.h>
using namespace std;

main () {
int gd = DETECT,gm;

initgraph(&gd,&gm,"");

int x = getmaxx();
int y = getmaxy();

int mas [10] = {150,550,750,550,650,300,250,300,150,550};

setfillstyle(INTERLEAVE_FILL, RED);
setcolor(RED);
fillpoly(5,mas);

setcolor(WHITE);
rectangle(200,550,700,1015);

rectangle(530,750,650,1015);
setcolor(RED);
line(200,550,700,550);
setcolor(WHITE);
rectangle(250,650,400,820);

line(330,650,330,820); line(330,730,400,730);

 setfillstyle(SOLID_FILL,YELLOW);
 setcolor(YELLOW);
circle(1830,100,80);
floodfill(1829,100,YELLOW);

//setfillstyle(INTERLEAVE_FILL, BROWN);
 setfillstyle(SOLID_FILL,GREEN);
setcolor(GREEN);
ellipse (1330, 1200, 0, 180, 650, 380);
floodfill(1330,1000,GREEN);
 setcolor(YELLOW);
//arc (1570,130,100,280,40); //line(1570,85,1700,140);
setfillstyle(SOLID_FILL,YELLOW);
 setcolor(YELLOW);
pieslice(1570,130,100,290,40);
setfillstyle(SOLID_FILL,YELLOW);
 setcolor(YELLOW);
line(1580,167,1700,100);line(1560,91,1700,100);
floodfill(1600,100,YELLOW);

setfillstyle(SOLID_FILL,YELLOW);
 setcolor(YELLOW);

pieslice(1600,280,120,300,40);
line(1580,245,1720,200); line(1616,316,1720,200);
floodfill(1600,250,YELLOW);

getch();
closegraph();
}
