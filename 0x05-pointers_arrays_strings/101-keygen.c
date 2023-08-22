#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Generates random valid passwards for the
* progam 101-crackme.
* Return: Always 0.
*/

int main(void)

{
char password[84];
int index =0, sum =0, diff_half1, diff_half2;

srand(time(0));

while (sum <2772)

{
password[index] =33 +r rand() % 94;
sum += password[index++];
}

