// Bresenham's line drawing algorithm
#include<stdio.h>
#include<graphics.h>
#include<math.h>
int main(){

int x, y, x1, y1, x2, y2, dx, dy, p, end;
int gd = DETECT, gm;
initgraph(&gd, &gm, NULL);
printf("Enter the value of x1 and y1 : ");
scanf("%d%d", &x1, &y1);
printf("Enter the value of x2 and y2: ");
scanf("%d%d", &x2, &y2);
x = x1;
y = y1;
dx = x2 - x1;
dy = y2 - y1;
putpixel(x, y, 2);
p = 2 * dy - dx;
while(x < x2){
    if(p < 0){

        x = x + 1;
        y = y + 1;

    }

else {
    
        x = x + 1;
        y = y + 1;
        p = p + 2 * dy - 2 * dx;
}
putpixel(x, y, 2);

}
getch();
// closegraph();
}