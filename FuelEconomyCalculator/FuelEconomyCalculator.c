#include <stdio.h>

int main(void)
{

	float gasUsed, distanceDriven, fuelEconomy, tickAmount, gasBefore, gasAfter, gasAdded, fullTank, tickCurrent;
	int tickCountBefore, tickCountAfter, ticksAdded, userSelection, userResponse;
	char fillQ, userResponseFill, y, n, gasUsedResponse;

	fullTank = 50;

	printf("What would you like to do? \n");
	printf("Enter 1 if you want to know how much gas you used since your last pump visit. \n");
	printf("Enter 2 if you want to find out your fuel economy. \n");
	scanf_s(" %d", &userResponse);

	if (userResponse == 1)
	{
		printf("Do you fill the tank during your last visit? (y/n) \n");
		scanf_s(" %c", &userResponseFill);

		if (userResponseFill == 'y')
		{
			gasAfter = fullTank;
			printf("How many ticks are you currently at? \n");
			scanf_s(" %f", &tickCurrent);

			tickAmount = tickCurrent * 2.5;
			gasUsed = fullTank - tickAmount;

			printf("You currently have %.2f L of gas remaining and have used %.2f L since your last pump visit. \n", tickAmount, gasUsed);
		}

		else if (userResponseFill == 'n')
		{
			printf("How many ticks was it at after visiting the pump? \n");
			scanf_s(" %d", &tickCountAfter);

			gasAfter = 2.5 * tickCountAfter;
			//printf("gasAfter = %.2f \n", gasAfter);

			printf("How many ticks are you currently at? \n");
			scanf_s(" %f", &tickCurrent);

			tickAmount = tickCurrent * 2.5;
			//printf("tickAmount = %.2f \n", tickAmount);
			gasUsed = gasAfter - tickAmount;
			//printf("gasUsed = %.2f \n", gasUsed);

			printf("You had %.2f L of gas after visiting the pump. You used %.2f L of gas since your last pump visit. \n", gasAfter, gasUsed);
		}
	}

	else if (userResponse == 2)
	{
		printf("Do you know how much gas (in liters) you have used since your last pump visit? (y/n): \n");
		scanf_s(" %c", &gasUsedResponse);

		if (gasUsedResponse == 'y')
		{
			printf("How much gas have you used in liters? \n");
			scanf_s(" %f", &gasUsed);

			printf("How man kilometers have you driven since your last pump visit? \n");
			scanf_s(" %f", &distanceDriven);

			fuelEconomy = 100 * gasUsed / distanceDriven;
			printf("Your fuel economy is %.2fL/100km. \n", fuelEconomy);
		}

		else if (gasUsedResponse == 'n')
		{
			printf("Did you fill the tank during your last pump visit? (y/n)");
			scanf_s(" %c", &userResponseFill);

			if (userResponseFill == 'y')
			{
				gasAfter = fullTank;
				printf("How many ticks are you currently at? \n");
				scanf_s(" %f", &tickCurrent);

				printf("How many kilometers have you driven since your last pump visit?");

				tickAmount = tickCurrent * 2.5;
				gasUsed = fullTank - tickAmount;

				printf("You currently have %.2f L of gas remaining and have used %.2f L since your last pump visit. \n", tickAmount, gasUsed);
			}

			else if (userResponseFill == 'n')
			{
				printf("How many ticks was it at after visiting the pump? \n");
				scanf_s(" %d", &tickCountAfter);

				gasAfter = 2.5 * tickCountAfter;
				//printf("gasAfter = %.2f \n", gasAfter);

				printf("How many ticks are you currently at? \n");
				scanf_s(" %f", &tickCurrent);

				tickAmount = tickCurrent * 2.5;
				//printf("tickAmount = %.2f \n", tickAmount);
				gasUsed = gasAfter - tickAmount;
				//printf("gasUsed = %.2f \n", gasUsed);

				printf("You had %.2f L of gas after visiting the pump. You used %.2f L of gas since your last pump visit. \n", gasAfter, gasUsed);
			}
		}
	}

	/*printf("Did you fill the tank? (y/n)");
	scanf_s("%c", &fillQ);
	if (fillQ = n)
	{
		printf("How many ticks was it at before visiting the pump?");
		scanf_s("%d", &tickCountBefore);

		printf("How many ticks was it at after visiting the pump?");
		scanf_s("%d", &tickCountAfter);

		gasBefore = 2.5 * tickCountBefore;
		printf("You had %.2f L of gas before visiting the pump.", gasBefore);
		
		gasAfter = 2.5 * tickCountAfter;
		printf("You had %.2f L of gas after visting the pump.", gasAfter);
		
		gasAdded = gasAfter - gasBefore;
		printf("You added %.2f L of gas.", gasAdded);
	}
	else
	{
		printf("How many ticks was it at before visiting the pump?");
		scanf_s("%d", &tickCountBefore);

		gasBefore = 2.5 * tickCountBefore;

	}

	printf("Enter the amount of gas used in liters: ");
	scanf_s("%f", &gasUsed);

	printf("Enter the distance driven in kilometers: ");
	scanf_s("%f", &distanceDriven);

	fuelEconomy = 100 * gas / distanceDriven;

	printf("Your fuel economy is %.2f /100km.", fuelEconomy);

	return 0; */
}