#include "booking.h"

void book_seat(char seat[])
{
	printf("Booking seat: %s\n", seat);
	printf("Booked.\n");
}

void booked_seats()
{
	printf("Getting booked seats...\n");
}

void print_book_help()
{
	printf("In order to book a seat you must enter: \n");
	printf("\n");
	printf("\t./bin/booker book <row><seat>\n");
	printf("\n");
}

void refund_seat(char seat[])
{
	printf("Refunding seat: %s\n", seat);
	printf("Refunded.\n");
}

void refunded_seats()
{
	printf("Getting refunded seats...\n");
}

void print_refund_help()
{
	printf("In order to refund a seat you must enter: \n");
	printf("\n");
	printf("\t./bin/booker refund <row><seat>\n");
	printf("\n");
}

void print_summary()
{
	printf("Summary:\n");
}