#include <stdio.h>
#include <conio.h>
int main()
{
  FILE *fp;
  int ch;
  char name[3000];
  fp = fopen("FEEDBACK.txt ","w");

  if (fp == NULL)
{
printf("File cannont be opened");
return 1;
}
fprintf(fp,"Feedback of c programming \n");
fprintf(fp,"1. The entire process of learning is chotic and confusing\n");
fprintf(fp,"2. Visibilty to newer codes seems less frequent\n");
fprintf(fp,"3. Introducton to the usage of platforms like Github and Leetcode is confusing\n");
fprintf(fp,"4. Need lastest complier\n");
fprintf(fp,"5. Practical use of the language needs to be more frequewnt\n");

fclose(fp);
printf("Data written successfully");


fp = fopen("FEEDBACK.txt","a");
if (fp == NULL)
{
printf("File cannot be opened for appending\n");
return 1;
}
fprintf(fp, "\nFeedback of C Trainer\n");
fprintf(fp, "1. Much need interaction about the topic\n");
fprintf(fp, "2. Difficult to write a code\n");
fprintf(fp, "3. Need more clear explainations\n");
fprintf(fp, "4. The algorithm explaination is very clear\n");
fprintf(fp, "5. Unable to solve the error\n");

fclose(fp);
printf("\n Feedback appended successfully\n");

fp = fopen("FEEDBACK.txt","r");
if (fp==NULL)
{
printf("Error in file opening\n");
getch();
return 1;
}
printf("\n DISPLAY TOTAL FILE CONTENTS \n");
while((ch = fgetc(fp)) !=EOF)
{
putchar(ch);
}
fclose(fp);

printf("\nPress any key to return to the edit page\n");
getch();
return 0;
}
