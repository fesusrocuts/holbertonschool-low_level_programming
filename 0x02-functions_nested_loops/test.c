#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
  
	int a = 0;
	int i = 5462;
	char s[20];
	
	sprintf(s, "%d", i);
	return (s[strlen(s)-1]);
}
