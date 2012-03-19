#include <stdio.h>

#define SEATING_OPT "seating"

#define MAX_ROWS 8
#define MAX_SEATS 24

void seating_row(int max, int row[]);
void print_seating_plan();

int valid_seat(char seat[]);