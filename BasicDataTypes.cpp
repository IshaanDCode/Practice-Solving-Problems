#include <cstdio>

int main() {
    int i;
    long l;
    char c;
    float f;
    double d;

    // Reading input
    scanf("%d %ld %c %f %lf", &i, &l, &c, &f, &d);

    // Printing output with required precision
    printf("%d\n", i);
    printf("%ld\n", l);
    printf("%c\n", c);
    printf("%.3f\n", f);
    printf("%.9lf\n", d);

    return 0;
}
