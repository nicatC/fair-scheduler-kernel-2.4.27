#include <stdio.h>
#include <unistd.h>
#include <errno.h>

int main() {
    int result;

    printf("setting scheduler mode to 1 (Fair-Share Scheduler\n");
    result = syscall(259, 0);
    if (result == 0) {
        printf(" scheduler mode setted to 1.\n");
    } else {
        perror("failed to set scheduler mode");
        return 1;
    }

    

    return 0;
}


