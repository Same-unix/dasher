#include <stdio.h>
#include <stdlib.h>

#define true 1

void help() {
    printf("1    shows more commands");
}

int main()
{
    char a[100];
    int choice = 0;

    printf("welcome to tiny termianal\n type 1 to see more commands\n\n");

    
        printf(">>>");
        fflush(stdin);
        scanf("%s", a);

        switch (choice) {
            case 1:
                help();
                break;
        }

    return 0;
    
}
