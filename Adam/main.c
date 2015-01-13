//
//  main.c
//  Adam
//
//  Created by Johnny on 2015-01-13.
//  Copyright (c) 2015 Empath Solutions. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>

//
// Constants
//

#define MAX_INPUT 255

#define TRUE (0==0)
#define FALSE (0==1)

//
// Types
//

typedef char bool;

//
// Helpers
//

bool isAllUpper(char *string) {
	for (int i = 0; i < strlen(string); i++) {
		if(islower(string[i])) return FALSE;
	}
	return TRUE;
}

int main(int argc, const char * argv[]) {
	
	printf("Adam App\n========\n");
	
	do {
		// Scan input
		char input[256];
		printf("You: ");
		scanf("%s", input);
		if (strcmp(input, "exit") == 0) break;
		
		// Print response
		char *response = "Whatever.";
		if (strchr(input, (int)'?') != NULL) response = "Sure";
		else if (isAllUpper(input))	response = "Woah, chill out!";
		else if (strcmp(input, "Adam") == 0) response = "Fine. Be that way!";
		// else if (strlen(input) == 0) response = "Fine. Be that way!";
		printf("Adam: %s\n", response);
		
	} while (TRUE);
	
	return 0;
}
