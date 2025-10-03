#include <stdio.h>  // printing
#include <string.h> // comparing string
#include <stdlib.h> // exit and other things
/**
 * if quiz -q --> all question
 * if quiz -q w/ # --> each question
 * if quiz -a # --> each answer
 * if quiz --help --> help info
 */
int main(int argc, char *argv[])
{
  // argc - how many arguments
  // argv - arguments

  char *question[] = {
      "what command changed directory?", "What functon is used to compare strings?", "What command sends commits to the repository?"};

  int number_questions = 3;
  char *answer[] = {
      "cd", "strcmp", "push"};

  if (strcmp(argv[1], "-q") == 0)
  {
    if (argc == 2)
    {
      printf("all questions");
    }
    else if (strcmp(argv[2], "1") == 0)
    {
      printf("%s\n",question[0]);
    }
    else if (strcmp(argv[2], "2") == 0)
    {
      printf("%s\n",question[1]);
    }
    else if (strcmp(argv[2], "3") == 0)
    {
      printf("%s\n",question[2]);
    }
    else
    {
      printf("Usage: quiz [-q] [-q <question number>] [-a <question number> <answer>]"
"Try 'quiz --help' for more informatio");
    }
  }

  // ANSWERS
  else if (strcmp(argv[1], "-a") == 0)
  {

    if (argc == 2)
    {
      printf("Usage: quiz [-q] [-q <question number>] [-a <question number> <answer>]"
"Try 'quiz --help' for more informatio");
    }
    else
    {
      if (strcmp(argv[2], "1") == 0)
      {
        if (strcmp(argv[3], answer[0]) == 0)
          printf("right\n");
        else
          printf("wrong\n");
      }

      else if (strcmp(argv[2], "2") == 0)
      {
        if (strcmp(argv[3], answer[1]) == 0)
          printf("right\n");
        else
          printf("wrong\n");
      }
      else if (strcmp(argv[2], "3") == 0)
      {
        if (strcmp(argv[3], answer[2]) == 0)
          printf("right\n");
        else
          printf("wrong\n");
      }
    }
  }
  // HELP
  else if (strcmp(argv[1], "--help") == 0)
  {
    printf("help instructions");
  }
  else
  {
    printf("Usage: quiz [-q] [-q <question number>] [-a <question number> <answer>]"
"Try 'quiz --help' for more informatio");
  }
}