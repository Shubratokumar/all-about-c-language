#include <stdio.h>

int main ()
{
 FILE *MyFile; // file declare as a pointer
 MyFile = fopen("myfile.txt","w"); // open a file & write
 if (MyFile!=NULL)
     {
         fputs ("Writing to a file using 'fopen' example.",MyFile); // writing something inside file
         fclose (MyFile); // close a file
     }
 return 0;
}