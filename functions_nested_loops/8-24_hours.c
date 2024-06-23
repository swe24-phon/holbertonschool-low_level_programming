#include "main.h"
#define ZERO 48
/**
 * jack_bauer - print out 24:00 hours
 *
 */

void jack_bauer(void)
{
	int hour_tenth = 0;
	int hour_unit;
	int minute_tenth;
	int minute_unit;

	while (hour_tenth <= 2)
	{
		int twofourhr_formatter = 9;
		if (hour_tenth == 2)
		{
			twofourhr_formatter = 3;
		}

                while (hour_unit <= twofourhr_formatter)
                {
		minute_tenth = 0;
                while (minute_tenth <= 5)
                {
		minute_unit = 0;
                while (minute_unit <= 9)
                {
			_putchar(ZERO + hour_tenth);
			_putchar(ZERO + hour_unit);
			_putchar(58);
			_putchar(ZERO + minute_tenth);
			_putchar(ZERO + minute_unit);
			_putchar('\n');
			minute_unit++;
		}
			minute_tenth++;	
		}
			hour_unit++;
		}
			hour_tenth++;
	}	

}
