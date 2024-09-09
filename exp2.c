#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{ 
  int textlength,patternlength,i,j,k,replacelength;
  char*text=(char*)malloc(sizeof(char));
  printf("enter the text:");
  scanf(" %[^\n]",text);
  char*patt=(char*)malloc(sizeof(char));
  printf("enter the pattern:");
  scanf(" %[^\n]",patt);
  char*rep=(char*)malloc(sizeof(char));
  printf("enter the replace:");
  scanf(" %[^\n]",rep);
  textlength=strlen(text);
  patternlength=strlen(patt);
  replacelength=strlen(rep);
  for(i=0;i<=textlength-patternlength;i++)
  { 
    for(j=0;j<patternlength;j++)
    { 
      if(text[i+j]!=patt[j])
      {
        break;
      }
      
      }
      if(j==patternlength)
      {
        printf("position found at %d\n",i);
        break;
       }
      }
      
if(patternlength==replacelength)
{
  for(k=0;k<replacelength;k++)
  {
   text[i]=rep[k];
   i++;
   }
   printf("\nupdated text is:%s",text);
 }
 else
 {
 printf("not possible");
 } 
 } 
  
  
