#include <stdio.h>
#include <time.h>

int main() {
    clock_t begin = clock();

    printf("Hello, World!\n");
    char brett[10][50] = {"was gehts ab sdf dsfsfd   ",
                          "was gehts ab sdf dsfsfd   ",
     "was gehts ab sdf dsfsfd   ",
       "was gehts ab sdf dsfsfd   ",
      "was gehts ab sdf dsfsfd   ",
      "was gehts ab sdf dsfsfd   ",
      "was gehts ab sdf dsfsfd   ",
     "was gehts ab sdf dsfsfd",
     "was gehts ab sdf dsfsfd   ",
      "§was gehts ab sdf dsfsfd   "
    };

    int i, j, count = 0;


    for (i = 0; i < 9; i++) {
        for (j = 0; brett[i][j] != '\0'; j++) {
            printf("%c",brett[i][j]);
            if(brett[i][j] == ' '){
                count++;
                printf("%i",count);
            }
        }
        printf("\n");
    }
    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("%f", time_spent);
    return 0;


}

