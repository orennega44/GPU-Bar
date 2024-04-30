#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// functions names
void showBar(int *graph, int *vol, int *shadow, int capacity);
int setGraphic();
int setShadow();
int setVolume();

int main()
{
    int capa = 0;
    // wellcoming the user

    printf("## GPU BAR ##\n");
    printf("please enter your gpu capacity: \n");
    scanf("%d", &capa);

    int *tempVol = setVolume();
    int *tempdow = setShadow();
    int *tempgraph = setGraphic();

    // show the bar
    showBar(&tempgraph, &tempVol, &tempdow, capa);

    return 0;
}
void showBar(int *graph, int *vol, int *shadow, int capacity)
{

    int count = 0;

    count += *graph + *vol + *shadow;

    printf("your bar is [");

    for (int i = 0; i < count * 0.02; i++)
    {

        printf("#");
    }
    printf("] = %d/%d", count, capacity);
}

int setGraphic()
{

    int num;

    printf("please enter you graphic setting:\n");
    scanf("%d/n", &num);

    return num;
}

int setShadow()
{
    int num;

    printf("please enter you shadow setting:\n");
    scanf("%d/n", &num);

    return num;
}
int setVolume()
{

    int num;

    printf("please enter you volume setting:\n");
    scanf("%d/n", &num);

    return num;
}