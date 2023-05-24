#include <stdio.h>

int main() {
    int totalBottles;
    int largeContainers = 0;
    int smallContainers = 0;

    printf("Enter the number of vaccine bottles to be shipped: ");
    scanf("%d", &totalBottles);

    largeContainers = totalBottles / 100;
    totalBottles %= 100;

    smallContainers = totalBottles / 48;
    totalBottles %= 48;

    if (totalBottles > 0)
        smallContainers++;

    if (largeContainers == 1 && smallContainers == 1) {
        printf("Minimum number of containers needed: %d large container and %d small container\n", largeContainers, smallContainers);
    } else if (largeContainers == 1) {
        printf("Minimum number of containers needed: %d large containers and %d small container\n", largeContainers, smallContainers);
    } else if (smallContainers ==1) {
        printf("Minimum number of containers needed: %d large containers and %d small container\n", largeContainers, smallContainers);
    } else {
        printf("Minimum number of containers needed: %d large containers and %d small containers\n", largeContainers, smallContainers);
    }

    return 0;
}
