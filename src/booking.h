#include <stdio.h>

#define BOOK_OPT    "book"
#define REFUND_OPT  "refund"
#define SUMMARY_OPT "summary"

void book_seat(char seat[]);
void booked_seats();
void print_book_help();

void refund_seat(char seat[]);
void refunded_seats();
void print_refund_help();

void print_summary();