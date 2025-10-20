#include <stdio.h>

typedef struct map_s
{
    char map[100];
} map_t;

typedef struct circle_s
{
    int cx;
    int cy;
    int rx;
    int ry;
    int r;

} circle_t;

typedef struct rectangle_s
{
    int x;
    int y;
    int width;
    int height;
} rectangle_t;

typedef struct line_s
{
    int x1;
    int y1;
    int x2;
    int y2;
} line_t;

typedef struct polygon_s
{
    int p1;
    int p2;
    int p3;
    int p4;
} polygon_t;

typedef struct polyline_s
{
    int p1;
    int p2;
    int p3;
    int p4;
} polyline_t;

typedef struct path_s
{
    int x;
    int y;
    int z;
} path_t;

typedef struct group_s
{
    char group[150];
} group_t;

typedef struct shapes_s {
    int shape_choice;
    union {
        circle_t circle;
        rectangle_t rectangle;
        line_t line;
        polygon_t polygon;
        polyline_t polyline;
        path_t path;
        group_t group;
    } shapes_u;
    char fill[10];
    char stroke[10];
    int stroke_width;
} shapes_t;

void map_create(FILE *create_file);

void modify(FILE *append_file);