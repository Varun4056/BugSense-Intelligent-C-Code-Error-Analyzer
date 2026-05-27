//Prperly Working
#include <stdio.h>

int main() {
    
    printf("Hello World!\n"); 
    return 0; 
}


// Lexer Error
int main() {
    int x = 10;
    printf("Hello World"); $
    return 0;
}


//Semantic Error
#include <stdio.h>
int main() {
    int a = 10, b = 20, c;
    a + b = c; 
    return 0;
}


// Both Lexer and Semantic Error
#include <stdio.h>

int main() {
    int 10val = 5;      
    char *s = "hello;  
    int x = 10 $ 5;     
    return 0;
}


// 
cd "C:\6th Sem\Compiler Design PBL 2.0\BugSense-main (1)\BugSense-main\backend"
mvn spring-boot:run