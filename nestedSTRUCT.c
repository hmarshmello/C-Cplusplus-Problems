//NESTED

#include <stdio.h>

struct point{
    int x;
    int y;
};
struct rectangle{
    struct point pt1;
    struct point pt2;
};
struct rectangle r, *rp;
rp = &r;
int main(){
    r.pt1.x;
    rp->pt1.x;
    (r.pt1).x;
    (rp->pt1).x; //But not rp->pt1->x (since pt1 is not a pointer to a point)
}