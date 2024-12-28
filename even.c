#include <stdio.h>
int main() {
int distanceInMeters = 1000;
while (distanceInMeters > 0) {
printf("Driver is %d meters away...\n", distanceInMeters);
distanceInMeters -= 200; // Assuming the driver covers 200 meters every iteration.
}
printf("Your Uber has arrived!");
return 0;
}
