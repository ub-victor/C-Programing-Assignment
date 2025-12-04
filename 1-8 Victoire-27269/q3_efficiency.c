#include <stdio.h>

typedef struct {
    int truckId;
    char driverName[40];
    float distance[10];
    float fuelUsed[10];
    int tripCount;
    float avgKmPerLitre;
} Truck;

void computeAvg(Truck *t) {
    float totalD = 0, totalF = 0;
    for(int i = 0; i < t->tripCount; i++) {
        totalD += t->distance[i];
        totalF += t->fuelUsed[i];
    }
    t->avgKmPerLitre = totalD / totalF;
}

int main() {
    Truck t = {1, "Alex", {100,120}, {10,12}, 2, 0};
    computeAvg(&t);

    printf("Average: %.2f km/L\n", t.avgKmPerLitre);
    return 0;
}
