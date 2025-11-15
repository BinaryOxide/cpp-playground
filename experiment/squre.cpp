#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    setfillstyle(SOLID_FILL, YELLOW);
    bar(100, 100, 200, 200);

    getch();
    closegraph();
    return 0;
}
