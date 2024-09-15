
#include <stdio.h>
#include <ctype.h>



int main(int argc, char const *argv[])
{
    char filepath[] = "D:\\DeviceDrivers\\Assignment1\\SET1\\inp.txt";
    FILE *fp = fopen(filepath, "r"); // Open file in read mode

    if (fp == NULL)
    {
        printf("Error opening file: %s\n", filepath);
        return -1; // Indicate error
    }

    int first_number;
    int chars_read = fscanf(fp, "%d", &first_number); // Read first integer

    fclose(fp); // Close the file

    if (chars_read != 1)
    {
        printf("Error reading number from file: %s\n", filepath);
        first_number = -1; // Indicate error (no integer found)
    }

    if (first_number != -1) {
    printf("The first number in the file is: %d\n", first_number);
  }
    return 0;
}
