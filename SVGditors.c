#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "shapes.h"
#include "ui.h"

int main(void)
{
    int choix = 0;
     while (choix != 4) {
    printf("1.Create the SVG file\n2.Modify to the SVG file\n3.Save changes\n4.Close\nYour choice: ");
    scanf("%d", &choix);
    choice(choix);
    }

    return 0;
}