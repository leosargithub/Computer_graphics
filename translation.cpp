#include <stdio.h>
#include <graphics.h>

// Function to translate line
void translateLine(int P[][2], int T[]) {
    // Calculating translated coordinates
    P[0][0] = P[0][0] + T[0];
    P[0][1] = P[0][1] + T[1];
    P[1][0] = P[1][0] + T[0];
    P[1][1] = P[1][1] + T[1];
}

// Driver program
int main() {
    int gd = DETECT, gm, errorcode;
    initgraph(&gd, &gm, NULL);

    int P[2][2] = {{100, 100}, {200, 200}}; // Coordinates of the line segment
    int T[] = {50, 30}; // Translation factors

    // Drawing original line
    setcolor(RED);
    line(P[0][0], P[0][1], P[1][0], P[1][1]);

    // Performing translation
    translateLine(P, T);

    // Drawing translated line
    setcolor(GREEN);
    line(P[0][0], P[0][1], P[1][0], P[1][1]);

    getch();
    closegraph();
    return 0;
}
