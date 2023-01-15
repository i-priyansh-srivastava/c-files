#include <stdio.h>
#include<conio.h>

char board[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

void printBoard ();
int checkWin ();
void system ();
void main ()
{
  int player = 1, input, status = -1;
  char player1[100], player2[100];
  printf ("ENTER NAME OF THE FIRST PLAYERS\n ");
  scanf ("%s", player1);
  printf ("ENTER NAME OF THE SECOND PLAYERS\n ");
  scanf ("%s", player2);
  printBoard ();
  while (status == -1)
    {
      player = (player % 2 == 0) ? 2 : 1;
      char mark = (player == 1) ? 'X' : 'O';
      switch (player)
	{
	case 1:
	  printf ("%s please enter the CHOICE\n", player1);
	  break;
	case 2:
	  printf ("%s please enter the CHOICE\n", player2);
	  break;
	}
      printf ("\t");
      scanf ("%d", &input);
      if (input < 1 || input > 9)
	printf ("INVALID INPUT");


      board[input] = mark;
      printBoard ();
      int result = checkWin ();
      if (result == 1)
	{
	  switch (player)
	    {
	    case 1:
	      printf ("%s is the winner", player1);
	      break;
	    case 2:
	      printf ("%s is the winner", player2);
	      break;
	    }
	  int count_X = 0, count_O = 0;
	  for (int i = 1; i <= 9; i++)
	    {
	      if (board[i] == 'X')
		count_X++;
	      else if (board[i] == 'O')
	      count_O++;
	    }
	  switch (player)
	    {
	    case 1:
	      printf ("\n\n%s won in %d moves ", player1, count_X);
	      break;
	    case 2:
	      printf ("\n\n%s won in %d moves ", player2, count_O);
	      break;
	    }
	
	}
      else if (result == 0)
	{
	  printf ("MATCH IS DRAW");

	}
      player++;
    }

  }


void printBoard ()
{
    system("cls");
  printf ("\n\n");
  printf ("=== TIC TAC TOE ===\n\n");
  printf ("     |     |     \n");
  printf ("  %c  |  %c  |  %c  \n", board[1], board[2], board[3]);
  printf ("_____|_____|_____\n");
  printf ("     |     |     \n");
  printf ("  %c  |  %c  |  %c  \n", board[4], board[5], board[6]);
  printf ("_____|_____|_____\n");
  printf ("     |     |     \n");
  printf ("  %c  |  %c  |  %c  \n", board[7], board[8], board[9]);
  printf ("     |     |     \n");
  printf ("\n\n");
}

int
checkWin ()
{
  if (board[1] == board[2] && board[2] == board[3])
    return 1;
  if (board[4] == board[5] && board[5] == board[6])
    return 1;
  if (board[7] == board[8] && board[8] == board[9])
    return 1;
  if (board[1] == board[4] && board[4] == board[7])
    return 1;
  if (board[2] == board[5] && board[5] == board[8])
    return 1;
  if (board[3] == board[6] && board[6] == board[9])
    return 1;
  if (board[1] == board[5] && board[5] == board[9])
    return 1;
  if (board[3] == board[5] && board[5] == board[7])
    return 1;
  int count = 0;
  for (int i = 1; i <= 9; i++)
    {
      if (board[i] == 'X' || board[i] == 'O')
	{
	  count++;
	}
    }
  if (count == 9)
    {
      return 0;
    }


  return -1;
}