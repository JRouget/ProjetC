#include <stdio.h>
#include <stdlib.h>
#include "ui.h"
#include "shapes.h"
#include "colors.h"

void map(FILE *create_file) {
    map_create(create_file);
}

void choice(int choix) {

     switch (choix)
    {
    case 1:
        FILE *create_file = fopen("a.svg", "w");
        map(create_file);
        if (!create_file)
        {
            perror("Error creating file\n\n");
            break;
        }
        printf("SVG file created successfully.\n\n");
        fclose(create_file);
        break;

    case 2:
        FILE *append_file = fopen("a.svg", "a");
        modify(append_file);
        if (!append_file)
        {
            perror("Error opening file\n\n");
            break;
        }
        fclose(append_file);
        break;

    case 3:
        FILE *saving_file = fopen("a.svg", "a");
        fprintf(saving_file, "</svg>");
        fclose(saving_file);
        break;
        
    case 4:
        printf("closing the menu...\n\n");
        break;
    }
}