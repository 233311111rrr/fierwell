#include <windows.h>
#include <stdio.h>

int main() {
    printf("Searching for problems...\n");

    int i, j;
    const int n = 100;
    const int width = 40;
    printf("Progress: ");
    for (i = 0; i <= n; i++) {
        float progress = ((float)i / (float)n) * 100.0f;
        int pos = (int)((float)width * ((float)i / (float)n));
        printf("\r[");
        for (j = 0; j < width; j++) {
            if (j < pos) printf("#");
            else if (j == pos) printf("_");
            else printf(" ");
        }
        printf("] %d%%", (int)progress);
        fflush(stdout);
        // do some work here
        Sleep(500);
    }
    printf("\nWe didn't find any problems :)\n");
    printf("Press Enter to continue...");
    fflush(stdout);
    getchar();

    return 0;
}
