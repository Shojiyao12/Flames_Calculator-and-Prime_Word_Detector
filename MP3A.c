/*Programmer's Block
Program Name: MP3A
Developer and Date of Submission: Shaw Jie Yao, November 6, 2021
Description of the program: Presents a Flame Calculator for Choice A and Presents a Prime Word Detector for Choice B.     
Student Number: 2021-12467
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void);
char MainMenu(void);
int UserInput(char);
void FlamesCalc(char);
void PrimeWord(char);
int PrimeCombiner(char);

int main(){
  char choice, FC, PW;

  do{
    choice = MainMenu();
    
    switch (choice){
      case 'A': 
      case 'a':
          FC = UserInput(choice);
          FlamesCalc(FC);
          break;
        
      case 'B':
      case 'b':
          PW = PrimeCombiner(choice);
          PrimeWord(PW);
          break;

      case 'C':
      case 'c':
          printf("\nThank You for using Word MANIPULATION!");
          break;

      default:
          printf("\nEnter Valid Choice (A, B, C) only.");
    }

  } while (choice != 'C' && choice != 'c');
  
  return 0;
}


char MainMenu (){
  char choice;

  printf("\n\nWord MANIPULATION");
  printf("\n A.FLAMES Calculator");
  printf("\n B.Prime Word Detector");
  printf("\n C.Exit");
  printf("\nEnter your choice: ");
  scanf(" %c", &choice);    
  
  return choice;
}


int UserInput(char CHOICE){
  int word;

  if(CHOICE == 'A') {
    printf("FLAMES Calculator\n");
  } if(CHOICE == 'a') {
      printf("FLAMES Calculator\n");
    }

  if(CHOICE == 'B') {
    printf("Prime Word Detector:\n");
  } if(CHOICE == 'b') {
      printf("Prime Word Detector:\n");
    } 
    scanf("%c", &word);
  
  return word;
}


int PrimeCombiner(char CHOICE){
  int s;

  if(CHOICE == 'B') {
    printf("Prime Word Detector:\n");
    printf("     Input Word: ");
  } if(CHOICE == 'b') {
      printf("Prime Word Detector:\n");
      printf("     Input Word: ");
    } 
    scanf("%c", &s);
  
  return s;
}


void FlamesCalc(char FC){
  int sum = 0, i, len, sum1 = 0,sum2 = 0, SUM, dig, num;
  int add = 0, input, length, sum3 = 0, sum4 = 0, ADD, DIG, NUM;
  double percent, final, ADD1, SUM1;
  char words[30];
  char words2[30];

  if(FC < 100) {
    printf("   Input First Name: ");
    scanf("%s", &words);
    printf("   Input Second Name: ");
    scanf("%s", &words2);

    len = strlen(words);
    
    for (i = 0; i < len; i++) {
      if(words[i]>=65 && words[i]<=90) {
        sum = sum + (words[i]-64);
      } else if(words[i]>=97 && words[i]<=122) {
          sum1 = sum1 + (words[i]-96);
        }
    }

    sum2=sum+sum1;
    num=sum2;
    
    do { 
      SUM = 0;
      while(num!=0) {
        dig=num%10; 
        SUM+=dig; 
        num/=10;
      } 
      num=SUM; 
    }
    
    while (num/10!=0); 
      
    printf("\nResult of Calculation:");
    printf("\n   [%s]: %d", words, SUM);

    length = strlen(words2);

    for (input = 0; input < length; input++) { 
      if(words2[input]>=65 && words2[input]<=90) {
        add = add + (words2[input]-64);
      } else if(words2[input]>=97 && words2[input]<=122) {
          sum3 = sum3 + (words2[input]-96);
        }
    }

    sum4=add+sum3;
    NUM=sum4;

    do { 
      ADD = 0;
      
      while(NUM!=0) {
        DIG=NUM%10; 
        ADD+=DIG; 
        NUM/=10;
      } 
      NUM=ADD; 
    }

    while(NUM/10!=0); 
      
    printf("\n   [%s]: %d", words2, ADD);

    SUM1=SUM;
    ADD1=ADD;

    if (SUM1 >= ADD1) {
      percent = ADD1/SUM1;
    } else {
        percent = SUM1/ADD1;
      } 
      final = percent*100;
  }
  
  printf("\n   Percentage of Success: %0.2lf%%", final);
}


void PrimeWord(char PW){
  char s[2000], sort;
  int  i,j, count=0, n, total=0, num, dig, sum, checker=0, l, arrange, arrange2, I;
  
  scanf("%s",&s);
  I = strlen(s);
  
  if(PW < 100) {
    printf(" In the word %s the following characters' frequency is prime: ", s);
    
    for (arrange = 0; arrange < I-1; arrange++) {
      for(arrange2 = arrange+1; arrange2 < I; arrange2++) {
        if (s[arrange] > s[arrange2]) {
          sort = s[arrange];
          s[arrange] = s[arrange2];
          s[arrange2] = sort;
        }
      }
    }

    for (j=0;s[j];j++);
    
    n=j; 
 
    for (i=0;i<n;i++) {
      count=1;
      checker=0;
      
      if(s[i]) {
        for(j=i+1;j<n;j++) {
          if(s[i]==s[j]) {
            count++;
            s[j]='\0';
          }
        }

        for(l = 2; l<=count/2; l++) {
          if (count%l == 0) {
            checker=1;
            break;
          }
        }
        
        if (checker==0 && count>1) {
          printf("%c",s[i]);
          total=total+count;
        }
      } 
    }
    
    num=total;
    
    do {
      sum = 0;
      
      while(num!=0) {
        dig=num%10; 
        sum+=dig; 
        num/=10;
      } 
      num=sum;
    }
    
    while(num/10!=0);

    if (total==0) {
      printf("Empty");
    }
    printf(", which gives the word a value of %d.", sum);
  }
}