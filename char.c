#include<stdio.h>
int main()
{
  char a ;
  
 printf("Enter The Character You Want Check Vowel or Not\n\n");
  scanf("%c",&a);
  
  if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
  {
    printf("Character is Vowel \n");
  }
  else
  {
   printf("Character is Not Vowel\n\n");
 }
 return 0;
}
