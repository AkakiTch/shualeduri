#include <stdio.h>
#include <string.h>

#define MAX_STRING_LEN 1024

int main(){
  char str[MAX_STRING_LEN];
  while(scanf("%s",text)){
       
   }
  char longest_str[MAX_STRING_LEN];
  int len;
  int i, index = 0;
  int max_wlen = 0, wlen = 0;
  
  printf("Sheiyvanet Winadadeba: ");
  gets(str);
  
  len = strlen(str);
  
  for (i = 0; i <= len; i++) {
  
    if (str[i] != ' ' && str[i] != '\0') {
      wlen++;
      continue;
    }
    
    if (wlen > max_wlen) {
      max_wlen = wlen;
      index = i - max_wlen;
    }
    
    wlen = 0;
  }
  
  for (i = 0; i < max_wlen; i++) {
    longest_str[i] = str[index+i];
  }
  longest_str[i] = '\0';
  printf ("Yvelaze grdzeli sityva: %s.\n", longest_str);
  printf ("Sityvis simboloebis raodenoba: %d.\n", max_wlen);
  return 1;
}
