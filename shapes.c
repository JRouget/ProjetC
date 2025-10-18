#include <stdio.h>
#include <stdlib.h>
#include "shapes.h"
#include "colors.h"

void map_create(FILE *create_file) {
    /*fill = colors_choice();  [WIP]*/
    fprintf(create_file, "<svg viewBox='0 0 1000 1000' xmlns='http://www.w3.org/2000/svg'>\n");
    /*fprintf(create_file, "<svg viewBox='0 0 1000 1000' xmlns='http://www.w3.org/2000/svg' fill='%9s'>\n", fill);  [WIP]
    free(fill);*/
}

void modify(FILE *append_file)
{
    int stroke_width = 0;
    int shape;
    printf("1.Ellipse\n2.Circle\n3.Simple Rectangle\n4.Line\n5.Square\n6.Polygon\n7.Poly Lines\n8.Path\n9.Group\nYour choice:");
    scanf("%d", &shape);

    switch (shape)
    {

    // ellipse
    case 1:
        fill = colors_choice();
        stroke = stroke_color();
        stroke_width = stroke_choice();
        circle_t shape_ellipse = {0};
        printf("choose x,\n");
        scanf("%d", &shape_ellipse.cx);
        printf("choose y\n");
        scanf("%d", &shape_ellipse.cy);
        printf("choose width\n");
        scanf("%d", &shape_ellipse.rx);
        printf("choose height\n");
        scanf("%d", &shape_ellipse.ry);
        fprintf(append_file, "  <ellipse cx='%d' cy='%d' rx='%d' ry='%d' fill='%9s' stroke='%9s' stroke-width='%d' />\n", shape_ellipse.cx, shape_ellipse.cy, shape_ellipse.rx, shape_ellipse.ry, fill, stroke, stroke_width);
        free(fill);
        free(stroke);
        break;
    // circle
    case 2:
        fill = colors_choice();
        stroke = stroke_color();
        stroke_width = stroke_choice();
        circle_t shape_circle = {0};
        printf("choose x,\n");
        scanf("%d", &shape_circle.cx);
        printf("choose y\n");
        scanf("%d", &shape_circle.cy);
        printf("choose rayon\n");
        scanf("%d", &shape_circle.r);
        fprintf(append_file, "<circle cx='%d' cy='%d' r='%d' fill='%9s' stroke='%9s' stroke-width='%d' />\n", shape_circle.cx, shape_circle.cy, shape_circle.r, fill, stroke, stroke_width);
        free(fill);
        free(stroke);
        break;
    // simple rectangle
    case 3:
        fill = colors_choice();
        stroke = stroke_color();
        stroke_width = stroke_choice();
        rectangle_t rectangle = {0};
        printf("choose x,\n");
        scanf("%d", &rectangle.x);
        printf("choose y\n");
        scanf("%d", &rectangle.y);
        printf("choose width\n");
        scanf("%d", &rectangle.width);
        printf("choose height\n");
        scanf("%d", &rectangle.height);
        fprintf(append_file, "<rect x='%d' y='%d' width='%d' height='%d' fill='%9s' stroke='%9s' stroke-width='%d'\n", rectangle.x, rectangle.y, rectangle.width, rectangle.height, fill, stroke, stroke_width);
        free(fill);
        free(stroke);
        break;
    // line
    case 4:
        fill = colors_choice();
        stroke = stroke_color();
        stroke_width = stroke_choice();
        line_t line = {0};
        printf("choose x1\n");
        scanf("%d", &line.x1);
        printf("choose y1\n");
        scanf("%d", &line.y1);
        printf("choose x2\n");
        scanf("%d", &line.x2);
        printf("choose y2\n");
        scanf("%d", &line.y2);
        fprintf(append_file, "<line x1='%d' y1='%d' x2='%d' y2='%d' fill='%9s' stroke='%9s' stroke-width='%d' />\n", line.x1, line.y1, line.x2, line.y2, fill, stroke, stroke_width);
        free(fill);
        free(stroke);
        break;
    // square
    case 5:
        fill = colors_choice();
        stroke = stroke_color();
        stroke_width = stroke_choice();
        rectangle_t square = {0};
        printf("choose x\n");
        scanf("%d", &square.x);
        printf("choose y\n");
        scanf("%d", &square.y);
        printf("choose width\n");
        scanf("%d", &square.width);
        printf("choose height\n");
        scanf("%d", &square.height);
        fprintf(append_file, "<rect x='%d' y='%d' width='%d' height='%d' fill='%9s' stroke='%9s' stroke-width='%d' />\n", square.x, square.y, square.width, square.height, fill, stroke, stroke_width);
        free(fill);
        free(stroke);
        break;
    // polygon
    case 6:
        /*stroke_color(append_file);
        polygon_t polygon = {0};
        printf("choose x1\n");
        scanf("%d", &line.x1);
        printf("choose x2\n");
        scanf("%d", &line.x2);
        printf("choose y1\n");
        scanf("%d", &line.y1);
        printf("choose y2\n");
        scanf("%d", &line.y2);
        fprintf(append_file, "<polygon points='0,100 50,25 50,75 100,0'/>\n", polygon);
        break;
    // poly line
    case 7:
        stroke_color(append_file);
        polyline_t polyline = {0};
        printf("choose x1\n");
        scanf("%d", &line.x1);
        printf("choose x2\n");
        scanf("%d", &line.x2);
        printf("choose y1\n");
        scanf("%d", &line.y1);
        printf("choose y2\n");
        scanf("%d", &line.y2);
        fprintf(append_file, "<polyline fill='none' stroke='black' points='40,200 40,60 70,80 100,20' />\n", polyline);
        break;
    // path
    case 8:
        stroke_color(append_file);
        path_t path = {0};
        printf("choose x1\n");
        scanf("%d", &line.x1);
        printf("choose x2\n");
        scanf("%d", &line.x2);
        printf("choose y1\n");
        scanf("%d", &line.y1);
        printf("choose y2\n");
        scanf("%d", &line.y2);
        fprintf(append_file, "<path d='M 100 100 L 300 100 L 200 300 z'\n     fill='red' stroke-width='3' />\n</svg>"", path);
        break;
    // group
    case 9:
        stroke_color(append_file);
        group_t group = {0};
        printf("choose x1\n");
        scanf("%d", &line.x1);
        printf("choose x2\n");
        scanf("%d", &line.x2);
        printf("choose y1\n");
        scanf("%d", &line.y1);
        printf("choose y2\n");
        scanf("%d", &line.y2);
        fprintf(append_file, "<g fill='white' stroke='green' stroke-width='5'>\n<circle cx='40' cy='40' r='25' />\n<circle cx='60' cy='60' r='25' />\n</g>\n", group);
        break;*/
    }
}