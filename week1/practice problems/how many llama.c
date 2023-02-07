// Say we have a population of n llamas. Each year, n / 3 new llamas are born, and n / 4 llamas pass away.

// For example, if we were to start with n = 1200 llamas, then in the first year, 1200 / 3 = 400 new llamas would be born and
// 1200 / 4 = 300 llamas would pass away. At the end of that year, we would have 1200 + 400 - 300 = 1300 llamas.

// To try another example, if we were to start with n = 1000 llamas, at the end of the year, we would have 1000 / 3 = 333.33 new llamas.
// We can’t have a decimal portion of a llama, though, so we’ll truncate the decimal to get 333 new llamas born. 1000 / 4 = 250 llamas
// will pass away, so we’ll end up with a total of 1000 + 333 - 250 = 1083 llamas at the end of the year.

// this will take a llama starting population and ensure its 9 or more llamas
// if 9 or more llamas it will take a timeframe
// it will then run llama_population + (llama_population/3) llama_population - (llama_population/4) and return the amount of llamas 
// it will do this for each year in the specified timeframe

#include <stdio.h>

int main(void)
{
    int llama_born, llama_died, llama_population, llama_time, new_llama_population;
    printf("how many llama?\n");
    scanf("%d", &llama_population);

    if (llama_population >= 9)
    {
        printf("how many years you want to pass before llama population estimate?\n");
        scanf("%d", &llama_time);

        for (int llama_love = 1; llama_love <= llama_time; llama_love++)
        {
            llama_died = llama_population / 4;
            llama_born = llama_population / 3;
            llama_population = llama_population + llama_born - llama_died;
        }

    printf("The estimated llama population after %d years is %d\n", llama_time, llama_population);
    }

    else
        printf("thats not enough llama, try again?\n");

    return 0;
}
