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
      "Name?", "age?", "year?"};

  int number_questions = 3;
  char *answer[] = {
      "keshvi", "12", "1997"};

  if (strcmp(argv[1], "-q") == 0)
  {
    if (argc == 2)
    {
      printf("all questions");
    }
    else if (strcmp(argv[2], "1") == 0)
    {
      printf("question 1");
    }
    else if (strcmp(argv[2], "2") == 0)
    {
      printf("question 2");
    }
    else if (strcmp(argv[2], "3") == 0)
    {
      printf("question 3");
    }
    else
    {
      printf("invalid number");
    }
  }

  // ANSWERS
  else if (strcmp(argv[1], "-a") == 0)
  {

    if (argc == 2)
    {
      printf("need to enter ans as well");
    }
    else
    {
      if (strcmp(argv[2], "1") == 0)
      {
        if (strcmp(argv[3], answer[0]) == 0)
          printf("right");
        else
          printf("wrong");
      }

      else if (strcmp(argv[2], "2") == 0)
      {
        if (strcmp(argv[3], answer[1]) == 0)
          printf("right");
        else
          printf("wrong");
      }
      else if (strcmp(argv[2], "3") == 0)
      {
        if (strcmp(argv[3], answer[2]) == 0)
          printf("right");
        else
          printf("wrong");
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
    printf("enter valid ans");
  }
}