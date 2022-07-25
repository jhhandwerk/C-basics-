#include<stdio.h>
#include<stdlib.h>

struct {
    char *engine;
} car1, car2;

int main() {
    car1.engine = "big bad engine";
    car2.engine = "the little engine that could";
    printf("%s\n", car1.engine);
    printf("%s", car2.engine);
    return 0;
    
}