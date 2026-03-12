#include <graphics.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

class MovingCircle {
private:
    int x, y;
    int dx, dy;
    int r;
    int color;

public:
    void init(int maxX, int maxY) {
        r = 10 + rand() % 20;
        x = rand() % (maxX - r);
        y = rand() % (maxY - r);

        dx = (rand() % 7) - 3;
        dy = (rand() % 7) - 3;

        if(dx == 0) dx = 1;
        if(dy == 0) dy = 1;

        color = rand() % 15 + 1;
    }

    void pindah(int maxX, int maxY) {
        x += dx;
        y += dy;

        if(x <= r || x >= maxX - r) dx = -dx;
        if(y <= r || y >= maxY - r) dy = -dy;
    }

    void draw() {
        setcolor(color);
        circle(x, y, r);
    }

    void makinbanyak(){

    }
};

int main() {

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    srand(time(NULL));

    const int N = 20;
    MovingCircle c[N];

    int maxX = getmaxx();
    int maxY = getmaxy();

    for(int i = 0; i < N; i++) {
        c[i].init(maxX, maxY);
    }

    while(!kbhit()) {

        cleardevice();

        for(int i = 0; i < N; i++) {
            c[i].pindah(maxX, maxY);
            c[i].draw();
        }

        delay(30);
    }

    closegraph();
}
