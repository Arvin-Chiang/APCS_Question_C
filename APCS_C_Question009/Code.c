#include <stdio.h>
#include <math.h>

typedef struct {
    double x;
    double y;
} Point;

int main() {
    int n;
    scanf("%d", &n);

    Point pts[100];
    for (int i = 0; i < n; i++) {
        scanf("%lf %lf", &pts[i].x, &pts[i].y);
    }

    double area = 0;
    for (int i = 0; i < n; i++) {
        int j = (i + 1) % n; 
        area += pts[i].x * pts[j].y - pts[j].x * pts[i].y;
    }

    area = fabs(area) / 2.0;

    printf("%.2lf\n", area);

    return 0;
}
