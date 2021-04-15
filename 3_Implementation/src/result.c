#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <ctype.h>
#include "//home/sairamya/Documents/mini/miniproject/3_Implementation/inc/main.h"
/**
 * @brief Get the result object
 * 
 * @param player 
 * @param computer 
 * @return int 
 */

int get_result(int player, int computer)
{
  int idx;

  REQUIRE(player >= 0 && player <= 2);
  REQUIRE(computer >= 0 && computer <= 2);

  for (idx = 0; idx < NUM_RESULTS; ++idx)
  {
    if (results[idx].player == player && results[idx].computer == computer)
      break;
  }
  ENSURE(idx >= 0 && idx < NUM_RESULTS);

  return results[idx].result;
}
void show_result(int player, int comp, int result)
{
  const char *result_names[] = {"Computer won", "Player won", "Draw"}; 
  const char *choises[] = {"Paper", "Rock", "Scissor"};

  REQUIRE(result >= COMPUTER_WON && result <= DRAW);
  REQUIRE(player >= PAPER && player <= SCISSOR);
  REQUIRE(comp >= PAPER && comp <= SCISSOR);

  printf("\nYou chose: %s", choises[player]);
  printf("\nComputer choose: %s", choises[comp]);
  printf("\nResult: %s", result_names[result - 4]);
}
