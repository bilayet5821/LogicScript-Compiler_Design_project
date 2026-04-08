#include <stdio.h>
#include <string.h>

int yyparse();
int yylex_destroy();

int main() {

    // Cyan header
    printf("\033[1;36m----------------------------------------------------------------\n");
    printf("           Welcome to LogicScript!                \n");
    printf("--------------------------------------------------------------------------\033[0m\n\n");

    // Blue section
    printf("\033[1;34mTeam Members:\033[0m\n");
    printf("  - ID: 221-15-5821\n");
    printf("  - Md. Bilayet Hossain\n\n");

    // Yellow section
    printf("\033[1;33mProject Summary:\033[0m\n");
    printf("  A lightweight mini interpreter built using Flex & Bison.\n\n");

    // Green section
    printf("\033[1;32mInstructions:\033[0m\n");
    printf("  - Write your code and end every statement with a semicolon (;)\n");
    printf("  - You can use variables, arithmetic, boolean logic, and colors\n");
    printf("  - Available print functions: print, print_red, print_green, print_blue\n\n");

    printf("\033[1;36m----------------------------------------------------------------\033[0m\n\n");

    while(1) {
        if (yyparse() != 0) {
            printf("\033[1;31mParse error. Restarting parser...\033[0m\n");
        }
        yylex_destroy();
    }

    return 0;
}
