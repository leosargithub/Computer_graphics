// midpoint circle generation algorithm
#include<stdio.h>

#include<math.h>
#include<conio.h>
#include<graphics.h>
void draw_circle(int, int, int);
void  symmetry(int, int, int, int);
int main(){

int xc, yc, r;
int gd = DETECT, gm;
initgraph(&gd, &gm, NULL);
printf("Enter the center of circle:\n ");

scanf("%d%d", &xc, &yc);
printf("Enter the radius of circle:\n ");
scanf("%d", &r);
draw_circle(xc, yc, r);
getch();
//closegraph();
return 0;
}

//return 0;
    


void draw_circle(int xc, int yc, int r){
    int x  = 0;
    int y = r;
    int p = 1 - r;
    symmetry(x, y, xc, yc);
    for(x = 0; y > x; x++){
        if(p < 0){
            p = p + 2 * x + 3;
        }
        else{
            p = p + 2 * (x - y) + 5;
            y = y - 1;
        }
        symmetry(x, y, xc, yc);
        delay(50);
    }
}
void symmetry(int x , int y, int xc, int yc){
    putpixel(xc + x, yc + y, 2);
    putpixel(xc - x, yc + y, 2);
    putpixel(xc + x, yc - y, 2);
    putpixel(xc - x, yc - y, 2);
    putpixel(xc + y, yc + x, 2);
    putpixel(xc - y, yc + x, 2);
    putpixel(xc + y, yc - x, 2);
    putpixel(xc - y, yc - x, 2);
    delay(50);
}