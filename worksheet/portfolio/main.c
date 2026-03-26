#include <stdio.h>
#include <stdbool.h>
#include "shapes.h"

int main() {
    Point p1 = makePoint(0, 0);
    Point p2 = makePoint(3, 4);

    Line l = makeLine(p1, p2);
    printf("Length: %.2f\n", lineLength(l));

    Triangle t = makeTriangle(p1, p2, makePoint(0, 4));
    printf("Area: %.2f\n", triangleArea(t));

    return 0;
}