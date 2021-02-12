#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(int argc, char **argv) {
    assert(argc >= 2);
    int idx = atoi(argv[1]);
    char AAA[10], BBB[10], CCC[10];
    memset(AAA, 0, sizeof(AAA));
    memset(BBB, 0, sizeof(BBB));
    memset(CCC, 0, sizeof(CCC));
    int res = 0;
    char *p = AAA + idx;
    printf("AAA: %p\ny: %p\nz: %p\np: %p\n", AAA, BBB, CCC, p);

    return *(short*)(p) + BBB[argc % 2] + CCC[argc % 2];  // Boom! ... when argument is 9
}
