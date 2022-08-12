#include <stdio.h>
#include <string.h>

/*!
 * Cowsay
 * 
 * $ gcc cowsay.c -o cowsay && ./cowsay Message
 *   _______
 * < Message >
 *   -------
 *      \  ^__^
 *       \ (oo)\_____
 *         (__)\     )\/\
 *            ||----w |
 *            ||     ||
 */
int main(int argc, char** argv) {
  if(argc == 1) {
    printf("Usage : cowsay [Message]\n");
    return 1;
  }
  
  // Word Length : Non-ASCII Characters Not Supported...
  int word_length = strlen(argv[1]);
  
  // Top Line
  printf("  ");
  for(int i = 0; i < word_length; i++) {
    printf("_");
  }
  printf("\n");
  
  // Text
  printf("< %s >\n", argv[1]);
  
  // Bottom Line
  printf("  ");
  for(int i = 0; i < word_length; i++) {
    printf("-");
  }
  printf("\n");
  
  // Cow
  printf("     \\  ^__^\n");
  printf("      \\ (oo)\\_____\n");
  printf("        (__)\\     )\\/\\\n");
  printf("           ||----w |\n");
  printf("           ||     ||\n");
  return 0;
}
