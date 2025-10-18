#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "shapes.h"

char *fill = NULL;
char *stroke = NULL;

int stroke_choice() {
    int stroke_width;
    printf("Choose a width for it : \n");
    scanf("%d", &stroke_width);

    return stroke_width;
}

char *colors_choice() {
    char *tmp = malloc(10 * sizeof(char));
        printf("Choose a color between red, blue, yellow, green, purple, black, white, silver and maroon to fill with : \n");
        scanf("%9s", tmp);

        return tmp;
}

char *stroke_color() {
    char *tmp = malloc(10 * sizeof(char));
        printf("Choose a color between red, blue, yellow, green, purple, black, white, silver and maroon for the stroke : \n");
        scanf("%9s", tmp);

        return tmp;
}