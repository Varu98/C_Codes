#include <stdio.h>
struct pubg
{
    int rank;
    char player_name[50];
    float KD;
    char leagueName[50];
};
int main()
{
    printf("PUBG Structure\n\n");
    struct pubg pubg1 = {10, "harsh", 8.09, "silver"};
    struct pubg pubg2 = {9, "CypherX", 10.5, "ace"};

    int *p;

    // printf("%d rank\n %s Player Name \n %f Kills Deaths Assists \n %s League Name\n\n", pubg1.rank, pubg1.player_name, pubg1.KD, pubg1.leagueName);

    // struct pubg *p;
    // struct pubg2 *p;

    for (int i = 0; i < 1; i++)
    {
        printf("%d rank\n %s Player Name \n %f Kills Deaths Assists \n %s League Name\n\n", pubg1.rank, pubg1.player_name, pubg1.KD, pubg1.leagueName);

        printf("%d rank\n %s Player Name \n %f Kills Deaths Assists \n %s League Name\n\n", pubg2.rank, pubg2.player_name, pubg2.KD, pubg2.leagueName);
    }

    return 0;
}