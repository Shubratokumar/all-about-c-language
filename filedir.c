#include <stdio.h>
int main ()
{
 FILE *MyFile;
 MyFile = fopen ("D:\Misc\Career Track\C Programming\myfile.txt","a");
 if (MyFile!=NULL)
 {
     fputs ("Writing to a file using 'fopen' example.",MyFile);
     fclose (MyFile);
 }
 return 0;
}