#include <stdio.h>

int calculateWeightLiftedInSet(int currentWeight, int maxWeight);
int calculateNextWeight(int currentWeight);

main()
{

    int bar = 45;
    // int weights[] = {5, 10, 25, 35, 45};

    int maxFromToday = 225;

    int numSets = 1;
    int setWeight = bar;
    int totalWeight = calculateWeightLiftedInSet(bar, maxFromToday);

    printf("\n\n");

    while (setWeight <= maxFromToday)
    {
        int weightLiftedThisSet = calculateWeightLiftedInSet(setWeight, maxFromToday);
        printf("set: %4d\tlb/rep: %4d\tlb/set: %4d\tlbt: %4d\n", numSets, setWeight, weightLiftedThisSet, totalWeight);

        if (setWeight == maxFromToday)
            break;

        setWeight = calculateNextWeight(setWeight);
        totalWeight += weightLiftedThisSet;
        numSets++;
    }

    printf("\n\nsets: %d\ntotalWeight: %d\n", numSets, totalWeight);
}

int calculateWeightLiftedInSet(int currentWeight, int maxWeight)
{
    int repsInStandardSet = 8;
    int repsInMaxSet = 2;

    int reps = (currentWeight == maxWeight) ? repsInMaxSet : repsInStandardSet;

    return currentWeight * reps;
}

int calculateNextWeight(int currentWeight)
{
    return (currentWeight % 45) == 0 ? currentWeight + 30 : currentWeight + 20;
}