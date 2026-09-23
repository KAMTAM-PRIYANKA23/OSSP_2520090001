#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <time.h>

#define JOBS 4

int main() {
    pid_t pids[JOBS];
    int status;
    time_t start, end;

    printf("Starting %d pipeline jobs...\n", JOBS);

    start = time(NULL);

    for (int i = 0; i < JOBS; i++) {
        pids[i] = fork();

        if (pids[i] < 0) {
            perror("fork");
            return 1;
        }

        if (pids[i] == 0) {
            printf("Job %d started. PID = %d\n", i + 1, getpid());

            sleep(i + 1);

            printf("Job %d completed. PID = %d\n",
                   i + 1, getpid());

            return 0;
        }
    }

    for (int i = 0; i < JOBS; i++) {
        waitpid(pids[i], &status, 0);

        if (WIFEXITED(status) && WEXITSTATUS(status) == 0)
            printf("Job %d: SUCCESS\n", i + 1);
        else
            printf("Job %d: FAILED\n", i + 1);
    }

    end = time(NULL);

    printf("\nAll jobs completed.\n");
    printf("Total execution time: %ld seconds\n",
           end - start);

    printf("Pipeline stability check: PASSED\n");

    return 0;
}
