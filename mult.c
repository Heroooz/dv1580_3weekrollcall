#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    double result;
    if (is_number(argv[1] && is_number(argv[2]))){
        result = (int)argv[1] * (int)argv[2];
    }
    else{
        result = -1;
    }
  return result;
}

int is_number(const char *str) { 
    char *endptr; 
    double value = strtod(str, &endptr); 
 
    // Check if the entire string was a valid number 
    if (endptr == str) { 
        return 0; // Not a number 
    } 
 
    return 1; // Is a number 
} 
