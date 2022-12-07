/*Create a program to help one improve their math skills*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void mathMultiplyQuestions();
void rightAnswer();
void wrongAnswer();


int main()
{

    char myUser[20];

    printf("\n-------------------------Welcome-------------------------\n\n");
    printf("\t\t   Before we begin...\n");
    printf("\n\t\t  What is your name?\n\n");
    scanf("\n\t\t%s", myUser);
    printf("\nOk %s, lets test your math.\n\n", myUser);

    mathMultiplyQuestions(myUser);

}

void rightAnswer(){

    printf("\nChecking for the answer...\n");
    printf("\nThat is correct! Good job.\n");

}


void wrongAnswer(){
	    
    printf("\nChecking for the answer...\n");
    printf("\nOops! That's not it. Let's try another one.\n");

}

void mathMultiplyQuestions(char myUser[20]){

    char adminQuestion1[] = "9 X 9 = ";
    char adminQuestion2[] = "2 X 2 = ";
    char adminQuestion3[] = "2 X 5 = ";
    char adminQuestion4[] = "7 X 7 = ";
    char adminQuestion5[] = "8 X 7 = ";
    /* char adminQuestion6[] = "12 X 12 = ";
    char adminQuestion7[] = "3 X 4 = ";
    char adminQuestion8[] = "5 X 6 = ";
    char adminQuestion9[] = "4 X 8 = ";
    char adminQuestion10[] = "6 X 6 = ";*/

    int adminAnswer1 = 81;
    int adminAnswer2 = 4;
    int adminAnswer3 = 10;
    int adminAnswer4 = 49;
    int adminAnswer5 = 56;
   /* int adminAnswer6 = 144;
    int adminAnswer7 = 12;
    int adminAnswer8 = 30;
    int adminAnswer9 = 32;
    int adminAnswer10 = 36;*/

    int userAnswer1;
    int userAnswer2;
    int userAnswer3;
    int userAnswer4;
    int userAnswer5;
   /*int userAnswer6;
    int userAnswer7;
    int userAnswer8;
    int userAnswer9;
    int userAnswer10;*/

    int total = 0;
    int score = 0;

    for (int i = 0; i > 1; i++)
    {
        total=i;
    }

    for (int i = 0; i > 1; i++)
    {
        score=i;
    }

    fflush(stdin);

    printf("%s", adminQuestion1);
    scanf("%d", &userAnswer1);
    score++;

    if (userAnswer1 != adminAnswer1) 
    {

       wrongAnswer();
 
    } else {
																            rightAnswer();
																            total++;
									            
    }

    printf("\n%s", adminQuestion2);
    scanf("%d", &userAnswer2);
    score++;

    if (userAnswer2!= adminAnswer2) {
													        
        wrongAnswer();
      
    } else {
												            
        rightAnswer();
        total++;

    }

    printf("\n%s", adminQuestion3);
    scanf("%d", &userAnswer3);
    score++;

    if (userAnswer3!= adminAnswer3) {
													        
        wrongAnswer();

    } else {
												            
        rightAnswer();
        total++;
    }

    printf("\n%s", adminQuestion4);
    scanf("%d", &userAnswer4);
    score++;

    if (userAnswer4!= adminAnswer4) {
			        
        wrongAnswer();
    } else {
												            
        rightAnswer();
        total++;
    }

    printf("\n%s", adminQuestion5);
    scanf("%d", &userAnswer5);
    score++;

    if (userAnswer5!= adminAnswer5) {
														        
        wrongAnswer();
    } else {
											            
        rightAnswer();
        total++;
    }

    /*printf("\n%s", adminQuestion6);
      scanf("%d", &userAnswer6);
      score++;
      if (userAnswer6!= adminAnswer6) {
          wrongAnswer();
      } else {
                           
         rightAnswer();
         total++;
      }
                             

      printf("\n%s", adminQuestion7);
      scanf("%d", &userAnswer7);
      score++;
 
      if (userAnswer7!= adminAnswer7) {
          wrongAnswer();
      } else {
                                                     
          rightAnswer();
          total++;
      }
 
      printf("\n%s", adminQuestion8);
      scanf("%d", &userAnswer8);
      score++;
      if (userAnswer8!= adminAnswer8) {
          wrongAnswer();
      } else {
                                                                                                         
          rightAnswer();
          total++;
      }
                                                                                                                                         printf("\n%s", adminQuestion9);
      scanf("%d", &userAnswer9);
      score++;
      if (userAnswer9!= adminAnswer9) {
                                                                                                                                             wrongAnswer();
                                                                                                                                         } else {
                                                                                                                                                                 
          rightAnswer();
          total++;
                                                                                                                                         }
                                                                                                                                         printf("\n%s", adminQuestion10);
      scanf("%d", &userAnswer10);
      score++;
      if (userAnswer10!= adminAnswer10) {
                                                                                                                                             wrongAnswer();
                                                                                                                                         } else {
                                                                                                                                                                                                                           
          rightAnswer();
                                                                                                                                             total++;
                                                                                                                                          }*/

      int score2 = total * 20; 
  
      printf("___________________________________________________________");

      /*Something to note in this line below is the use of character specifier %c, 37 to get the % sign printed out*/
      printf("\n\nSo...%s\n\nYou scored a %d out of %d. That's %d%c. ", myUser, total, score, score2, 37);

      if (total == 3)
      {
           printf("Good job!!!\n");
      }
      else if (total == 4)
      {
           printf("Well done!!!\n");
      }
      else if (total == 5)
      {
           printf("Fantastic job %s!!!\n \n\t\t\tGoodstuff!\n", myUser);
      }
      else if (total == 2)
      {
           printf("Don't give up just yet...\n");
      }
      else if (total == 1)
      {
           printf("Keep trying lad...\n");
      }
      else if (total == 0)
      {
           printf("\nThat's ok...You're going to be a champ one day.\n");
	   /*printf("\nWould you like to try again? y/n : ");
	   scanf("%s", su);
	   if (y == su)
	   {
	   main();
	   }
	   else (n == su)
	   {
	   printf("Ok. Saving data...");
           }*/
      }
                                                                                                                                         printf("\nThat was a warm up session...Get ready for round 2.\n\n");
                                                                                                                                                                              
                                                                                                                                         }

