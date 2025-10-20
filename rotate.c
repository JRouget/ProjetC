#include <stdio.h>
#include <stdlib.h>

int rotate(void) {
    int ask_yes_no;
    int ask_for_rotate;
    printf("Rotate ?\n0.y / 1.n\n");
    scanf("%d", &ask_yes_no);

    if (ask_yes_no == 0) {
        printf("Choose angle :\n");
        scanf("%d", &ask_for_rotate);
        
        return ask_for_rotate;
    }
    else {
        return 0;
    }
}