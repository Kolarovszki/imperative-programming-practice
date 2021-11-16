#include <stdio.h>

main() {
   FILE *fp;
   
   /*
   r - Opens an existing text file for reading purpose.
   
   w - Opens a text file for writing. If it does not exist, then a new file is created.  	

   a - Opens a text file for writing in appending mode. If it does not exist, then a new file is created. 

   r+ - Opens a text file for both reading and writing.
 	
   w+ - Opens a text file for both reading and writing. It first truncates the file to zero length if it exists, otherwise creates a file if it does not exist.

   a+ - Opens a text file for both reading and writing. It creates the file if it does not exist. The reading will start from the beginning but writing can only be appended.

   */
   
   fp = fopen("/test.txt", "w+");
   fprintf(fp, "This is testing for fprintf...\n");
   fputs("This is testing for fputs...\n", fp);
   fclose(fp);
}