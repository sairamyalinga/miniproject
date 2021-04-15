#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <ctype.h>
#include "/home/sairamya/Documents/mini/miniproject/3_Implementation/inc/main.h"
/**
 * @brief Get the player choice object
 * 
 * @return int 
 */
int get_player_choice()
{
  char* buffer;
  buffer = (char*)malloc(8 * sizeof(char));
  char *pos;

  for(;;)
  {
    printf("\nPlease choose rock, paper, scissor or quit: ");
    fgets(buffer,sizeof(buffer), stdin); 
    
    pos = strrchr(buffer, '\n');
    if (pos != NULL)
      *pos = '\0'; // remove trailing \n

    if (strcmp(buffer, "rock") == EQUAL)
      return ROCK;
    else if (strcmp(buffer, "scissor") == EQUAL)
      return SCISSOR;
    else if (strcmp(buffer, "paper") == EQUAL)
      return PAPER;
    else if (strcmp(buffer, "quit") == EQUAL)
      return QUIT;
  }
  free(buffer);
  return 0;
}
