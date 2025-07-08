#include <stdio.h>
int main()
{
    // file pointer declare
    FILE *shuvo;
    // shuvo = fopen("text.txt", "r");// reading mode
    shuvo = fopen("text.txt", "w");// write and create mode
    // checking whether file exist or not
    if (shuvo == NULL)
    {
        printf("File you want to read didn't exist!");
    } else{
        fputs("Hi! There, This is Shubrato your friend.\n", shuvo);
        // closing file
        fclose(shuvo);
    }
    return 0;
}

// #include <stdio.h>
// int main ()
// {
//  FILE *MyFile;
//  MyFile = fopen ("D:\Misc\Career Track\C Programming\myfile.txt","a");
//  if (MyFile!=NULL)
//  {
//      fputs ("Writing to a file using 'fopen' example.",MyFile);
//      fclose (MyFile);
//  }
//  return 0;
// }