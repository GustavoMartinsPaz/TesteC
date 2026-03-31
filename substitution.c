#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>  

// don't touch
typedef char* string;


int valid_key(string key) {

  // testing the key, change me!

  return 0;
  
}


char rotate(char c, string key) {

  // given a valid key and a char, return the encrypted char
  // respecting upper/lower case and keeping non-alphabetic
  // unchanged. Change me!

  return 'a';

}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }
    
    char *filename = argv[1];
    FILE *fp = fopen(filename, "r");
    
    if (!fp) {
        printf("Error: cannot open file %s\n", filename);
        return 1;
    }
    
    int nlines;
    char key[30];

    // reading the number of messages
    fscanf(fp, "%d\n", &nlines);

    // reading key 
    fgets(key, sizeof(key), fp);
    key[strcspn(key, "\n")] = '\0';

    // from here to the end, adapt the code 
    
    printf("%d %s %d\n", nlines, key, valid_key(key));
    
    char line[256];
    for (int i = 0; i < nlines; i++) {
      if (fgets(line, sizeof(line), fp)) {

	// convert the last char from \n to \0
	line[strcspn(line, "\n")] = '\0';
	
	printf("Line %d: %s\n", i, line);

      }
    }
    
    fclose(fp);
    return 0;
}