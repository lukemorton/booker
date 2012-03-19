#include "booker.h"

// Seating plan
// process an order for tickets including purchasing and refunding tickets
// update seating plan with available seats indicated to allow availability checking
// saving all the records of bookngs and refunds
// producing summary reports for bookings

int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		if (strcmp(argv[1], SEATING_OPT) == 0)
		{
			print_seating_plan();
			return 0;
		}
		else if (strcmp(argv[1], BOOK_OPT) == 0)
		{
			if (argc != 3)
			{
				print_book_help();
				return 1;
			}

			book_seat(argv[2]);
			return 0;
		}
		else if (strcmp(argv[1], REFUND_OPT) == 0)
		{
			if (argc != 3)
			{
				print_refund_help();
				return 1;
			}

			refund_seat(argv[2]);
			return 0;
		}
		else if (strcmp(argv[1], SUMMARY_OPT) == 0)
		{
			print_summary();
			return 0;
		}
		else if (strcmp(argv[1], HELP_OPT) == 0)
		{
			print_help();
			return 0;
		}
		else
		{
			printf("Unknown command\n");
		}
	}
	else
	{
		printf("You must supply at least 1 argument\n");
	}
	
	print_usage();
	return 1;
}

void print_help()
{
	print_usage();
	printf("Booker can be used for coolness\n");
}

void print_usage()
{
	printf("Usage: booker (seating|book|refund|summary|help)\n");
}