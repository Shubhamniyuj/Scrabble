#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define SIZE 255
int compute_score();

int main()
{
  
  char word1[SIZE];
  int score1=0,score2=0;  
  char word2[SIZE];
 
  printf("Player 1:");
  scanf("%s",word1);
  
  printf("Player 2:");
  scanf("%s",word2);

  score1=compute_score(word1);
  score2=compute_score(word2);

  if(score1>score2)
  printf("Player 1 wins!\n");
 
  else if(score1<score2)
  printf("Player2 wins!\n");

  else
  printf("Tie!\n");

}
 
int compute_score(char *word)
{
  int score=0,tmp;
  int points[]={1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
  int n = strlen(word);
  for(int i=0; i<n; i++)
  {
   if(isupper(word[i]))
   tmp= points[word[i]-65];
      
   else if(islower(word[i]))
   tmp= points[word[i]-97];
   
   else
   {
    tmp= 0;
   }

 score+=tmp;
  }
  return score;
}



