// Marty 0.0.0-beta
// (C) Copyright 2024 Adryan Arsov. GNU GPL V3

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

const char* version = "0.0.0-beta";

int parse(char* file_txt_contents) {
    char* file_lines[] = strtok(file_txt_contents, "\0"); // \0 for line endings
    
    int linen = 1;
    
    for (int i = 0; i < sizeof(file_lines); i++) {

        char s = '0' + linen;

        printf("line %s: %s\n", s, file_lines[i]);
        linen++;
    }
}