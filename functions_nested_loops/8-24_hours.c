#include "main.h"

/**
 * jack_bauer - print out 24:00 hours
 *
 */

void jack_bauer(void)
{
	int hour_tenth = 0;
	int hour_unit = 0;
	int minute_tenth = 0;
	int minute_unit = 0;

	if (hour_tenth <= 2)
	{
		while (hour_tenth <= 2)
		{
	if (hour_unit <= 4)
	{
                while (hour_unit <= 4)
                {
	if (minute_tenth <= 5)
        {
                while (minute_tenth <= 5)
                {
	if (minute_unit <= 9)
        {
                while (minute_unit <= 9)
                {
			_putchar(hour_tenth);
			_putchar(hour_unit);
			_putchar(58);
			_putchar(minute_tenth);
			_putchar(minute_unit);
			minute_tenth++;
		}
	}
		}
			minute_tenth++;	
	}
		}
			hour_unit++;
	}	
		}
			hour_tenth++;
	}	

	_putchar('\n');
}
