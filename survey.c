#include <stdio.h>
#include <string.h>

int main() {

    char buffer[1000];
    char lines[30][1000];
    int i = 0;

    //while loop that gets each line in file and checks if it is a comment, if not, it adds it to the 2D array
    while (fgets(buffer, 1000, stdin) != NULL) {
        if (buffer[0] != '#') {
            strcpy(lines[i], buffer);
            i += 1;

        }
    }


    for (int j = 0; j < i; j++) {
        printf("%d\n", j);
        printf("%s", lines[j]);
    }

    printf("%s", lines[12]);

    return 0;



}
