#include<stdio.h>
#include<conio.h>
void main()
{
int i;
char ch;
char s[100];
clrscr();
printf("\n enter charecter:");
scanf("%c",&ch);
if(isalpha(ch))
{
printf("\n%c is alphabet",ch);
if(isupper(ch))
printf("\n%c is uppercase alphabet",ch);


 for (i = 0; s[i]!='\0'; i++) {
	  if(s[i] >= 'a' && s[i] <= 'z') {
		 s[i] = s[i] - 32;
	  }
   }
   printf("\nString in Upper Case = %s", s);
}

else if(islower(ch))
printf("is lowercase alphabet",ch);

 for (i = 0; s[i]!='\0'; i++) {
	  if(s[i] >= 'A' && s[i] <= 'Z') {
		 s[i] = s[i] + 32;
	  }
   }

   printf("\nString in Lower Case = %s", s);
}
 else if (isdigit(ch))
printf("\n%c digit",ch);

{
 else if(ispunct(ch))
printf("\n %c is a punctuation",ch);
getch();
}