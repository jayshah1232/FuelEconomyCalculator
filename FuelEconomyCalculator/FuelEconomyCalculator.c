#include <stdio.h>

int main(void)
{

	float gasUsed, distanceDriven, fuelEconomy, tickAmount, gasBefore, gasAfter, gasAdded, fullTank, tickCurrent;		/*initializes float variables - gasUsed is amount of gas used, distanceDriven is distance driven in kms,
																														fuelEconomy is fuel economy calculated in xL/100kms, tickAmount is amount of gas in L at a given tick count,
																														gasBefore and gasAfter are gas levels before and after pump vist respectively, gasAdded is amount in L added
																														during pump visit, fullTank is size of full tank in L, tickCurrent is current level of gas gauge*/

	int tickCountBefore, tickCountAfter, ticksAdded, userResponse;	/*initializes integer variables - tickCountBefore and tickCountAfter is gas bar level before and after pump visit respectively, ticksAdded is increase in gas bar
																	level, userResponse is user input choice for what they want to do*/

	char userResponseFill, y, n, gasUsedResponse;	/*initializes character variables - userResponseFill is user's response to if they filled the tank, y and n are user inputs for yes and no, gasUsedResponse is user input for how
													much gas was used in L*/

	fullTank = 50; //sets fullTank to 50 - full tank size is 50L

	printf("What would you like to do? \n"); //prompts user to decide what they want to do with instructions on next 2 lines
	printf("Enter 1 if you want to know how much gas you used since your last pump visit. \n");
	printf("Enter 2 if you want to find out your fuel economy. \n");
	scanf_s(" %d", &userResponse); //takes user's input in integer form, sets it to userResponse

	if (userResponse == 1) //if statement for if user inputs 1
	{
		printf("Do you fill the tank during your last visit? (y/n) \n"); //asks user if they filled their gas tank and prompts them to enter y or n for yes or no
		scanf_s(" %c", &userResponseFill); //takes user's input in character form, sets it to userResponsefIll

		if (userResponseFill == 'y') //if statement for if user inputs y
		{
			gasAfter = fullTank; //sets gasAfter to fullTank as gas level after pump visit is at full amount
			printf("How many ticks are you currently at? \n"); //asks user to input how many ticks they are currently at in their fuel gauge
			scanf_s(" %f", &tickCurrent); //takes user's input in float form, sets it to tickCurrent

			tickAmount = tickCurrent * 2.5; //sets tickAmount to tickCurrent times 2.5 as each tick represents 2.5L of gas; this equation calculates how much gas in L is currently in the car
			gasUsed = fullTank - tickAmount; //calculates amount of gas used in L and sets it to gasUsed

			printf("You currently have %.2f L of gas remaining and have used %.2f L since your last pump visit. \n", tickAmount, gasUsed); //prints statement with how much gas remains and how much was used since last pump visit using tickAmount and gasUsed
		}

		else if (userResponseFill == 'n') //else if statement for if user inputs n
		{
			printf("How many ticks was it at after visiting the pump? \n"); //asks user to input how many ticks the fuel guage is at after pump visit
			scanf_s(" %d", &tickCountAfter); //takes user's input in integer form, sets it to tickCountAfter

			gasAfter = 2.5 * tickCountAfter; //sets gasAfter to the gas level after pump visit by multiplying the 2.5L per tick to the amount of ticks
			//printf("gasAfter = %.2f \n", gasAfter);	//- this code exists for debugging purposes

			printf("How many ticks are you currently at? \n"); //asks user how many ticks the fuel guage is currently at
			scanf_s(" %f", &tickCurrent); //takes user's input in float form, sets it to tickCurrent

			tickAmount = tickCurrent * 2.5; //
			//printf("tickAmount = %.2f \n", tickAmount);
			gasUsed = gasAfter - tickAmount;
			//printf("gasUsed = %.2f \n", gasUsed);

			printf("You had %.2f L of gas after visiting the pump. You used %.2f L of gas since your last pump visit. \n", gasAfter, gasUsed); //prints out result using gasAfter, gasUsed
		}
	}

	else if (userResponse == 2) //else if statement if user wants to find out their fuel economy
	{
		printf("Do you know how much gas (in liters) you have used since your last pump visit? (y/n): \n"); //prompts user to input y or n to answer the question
		scanf_s(" %c", &gasUsedResponse); //takes user's input in char form, sets it to gasUsedResponse

		if (gasUsedResponse == 'y') //if statement if user replies with y (they do know how much gas in liters they have used)
		{
			printf("How much gas have you used in liters? \n");
			scanf_s(" %f", &gasUsed);//takes user's input in float form, sets it to gasUsed

			printf("How man kilometers have you driven since your last pump visit? \n");
			scanf_s(" %f", &distanceDriven);// takes user's input in float form, sets it to distanceDriven

			fuelEconomy = 100 * gasUsed / distanceDriven; //formula setting fuelEconomy to 100 times the amount of gas used divided by the distance driven
			printf("Your fuel economy is %.2fL/100km. \n", fuelEconomy); //prints the result of fuelEconomy
		}

		else if (gasUsedResponse == 'n') //else if statement if user replies with n (they do not know how much gas in liters they have used)
		{
			printf("Did you fill the tank during your last pump visit? (y/n)"); //prompts user to enter y or n to answer the question
			scanf_s(" %c", &userResponseFill); //takes user's input in char form, sets it to userReponseFill

			if (userResponseFill == 'y') //if statement if user replies with y (they did fill the tank)
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