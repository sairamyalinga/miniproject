#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <ctype.h>
#include "main.h"

int main(void)
{
  
  int player, computer, result;

  srand((unsigned)time(NULL));
  for(;;)
  {
    player = get_player_choice();
    if (player == QUIT)
      return 0;
    computer = get_computer_choice();
    result = get_result(player, computer);
    show_result(player, computer, result);
  }
  return 0;
}

/**
 * @brief Get the computer choice object
 * 
 * @return int 
 */
int get_computer_choice()
{
  return rand() % 3;
}

