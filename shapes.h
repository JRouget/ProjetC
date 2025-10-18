#include <stdio.h>

typedef struct map_s
{
    char map[100];
} map_t;

typedef struct circle_s
{
    char ellipse[100];
    char circle[100];
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
    // square
    char square[100];
    // simple rectangle
    char rectangle[100];
} rectangle_t;

typedef struct line_s
{
    int x1;
    int y1;
    int x2;
    int y2;
    char line[100];
} line_t;

typedef struct polygon_s
{
    int p1;
    int p2;
    int p3;
    int p4;
    char polygon[100];
} polygon_t;

typedef struct polyline_s
{
    int p1;
    int p2;
    int p3;
    int p4;
    char polyline[100];
} polyline_t;

typedef struct path_s
{
    int x;
    int y;
    int z;
    char path[100];
} path_t;

typedef struct group_s
{
    char group[150];
} group_t;

void map_create(FILE *create_file);

void modify(FILE *append_file);