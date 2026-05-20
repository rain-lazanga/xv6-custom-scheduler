#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#include "kernel/vmstats.h"
//#include "stdlib.h"

//char *NULLptr = '\0';
void displayStats(struct vmstat *);

int main() {
    struct vmstat *stats;
    stats = (struct vmstat*)malloc(sizeof(struct vmstat));

    vmstats(stats);
    displayStats(stats);

    int *ptr;
    
    ptr = (int*) malloc(32768 * sizeof(int));
    if(ptr) {
         printf("Memory successfully allocated using malloc.\n\n");
         vmstats(stats);
         displayStats(stats);

    }
    else {
        printf("Malloc failed, memory not allocated.\n\n");
        exit(0);
    }

    free(ptr);
    return 0;
}

void displayStats(struct vmstat *stats) {
    
    printf("Rabin Lazarte, xv6 Memory Stats\n");
    printf("Total Memory: %ld\n", stats->total_memory);
    printf("Free memmory: %ld\n", stats->free_memory);
    printf("Used memory: %ld\n", stats->used_memory);
    printf("Resident pages memory: %ld\n", stats->resident_pages);
    printf("Process memory: %ld\n\n", stats->process_memory);

    return;
}