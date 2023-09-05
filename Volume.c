#include <stdio.h>

int main() {
    // Declare variables to store length, width, and height
    float length, width, height;

    // Prompt the user for input
    printf("Enter the length of the cuboid: ");
    scanf("%f", &length);

    printf("Enter the width of the cuboid: ");
    scanf("%f", &width);

    printf("Enter the height of the cuboid: ");
    scanf("%f", &height);

    // Calculate the volume of the cuboid
    float volume = length * width * height;

    // Display the result
    printf("The volume of the cuboid is: %.2f cubic units\n", volume);

    return 0;
}
