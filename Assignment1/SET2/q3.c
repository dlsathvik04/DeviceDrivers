#include <stdio.h>
#include <ctype.h> 

int count_e_occurrences(const char *str) {
  int count = 0;
  while (*str) {
    if (tolower(*str) == 'e') {
      count++;
    }
    str++;
  }
  return count;
}

int main() {
  char *s[] = {
    "We will teach you how to",
    "Move a mountain",
    "Level a building",
    "Erase the past",
    "Make a million",
    "...all through C!"
  };

  int total_e_count = 0;
  int num_strings = sizeof(s) / sizeof(s[0]);

  for (int i = 0; i < num_strings; i++) {
    total_e_count += count_e_occurrences(s[i]);
  }

  printf("Total number of 'e's: %d\n", total_e_count);

  return 0;
}