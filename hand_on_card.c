#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Total_Swites 4
#define Total_Ranks 13
int main(void)
{
    const char Swites[Total_Swites] = {'S', 'D', 'H', 'C'};
   const char Ranks[Total_Ranks] = {'2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K', 'A'};

    int Issue_Card_Status[Total_Swites][Total_Ranks] = {0};
    int card_needed;
    int Card_Issued = 0;
    printf("Hou many card you need : ");
    scanf("%d", &card_needed);
    srand((unsigned)time(NULL));
    int index_Swites;
    int index_Ranks;
    while (Card_Issued < card_needed)
    {
        index_Swites= rand() % Total_Swites;
        index_Ranks= rand() % Total_Ranks;
        if (Issue_Card_Status[index_Swites][index_Ranks] == 0)
        {
            Issue_Card_Status[index_Swites][index_Ranks] = 1;
            Card_Issued++;
            printf("%c%c  ", Ranks[index_Ranks],Swites[index_Swites]);
        }
    }
    printf("\n Finished \n");
    return 0;
}