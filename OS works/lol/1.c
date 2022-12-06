#include <stdio.h>
#include <string.h>

char tracks[][80] = {
  "Arlekino",
  "Antoshka",
  "V lesu rodilas' elochka",
  "Temnaya noch",
  "Vintovka - eto prazdnik",
};

void find_track(char search_for[])
{
  int i;
  for (i = 0; i < 5; i++)
  {
    if (strstr(tracks[i], search_for))
    {
      printf("Pesnya nomer %i: '%s\n'",i,tracks[i]);
    }
  }
}

int main() {
  char search_for[80];
  printf("Poisk: ");
  fgets(search_for, 80, stdin);
  search_for[strlen(search_for) - 1] = '\0';
  find_track(search_for);
  return 0;
}