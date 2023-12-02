#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int sadnum[10];
int musicnum[10];
int charity[10];
int exciting[10];
int lifestyle[10];

void main(){
char yesno;
int sad_count = 0;
int music_count = 0;
int charity_count = 0;
int exict_count = 0;
int life_count = 0;
int total_likes_count = 0;

char* sad_list[] ={"99.9999 You Will Cry After Watching This Video", "Emotional & Sad Tik Toks That Made Me Cry to Sleep Part III", "Random Acts of Kindness That Will Make You Cry", "My poor dad - Heart touching short movies", "5.The Heart Touching Films Which Make You Feel So Emotional!", "6.TRY NOT TO CRY CHALLENGE [99.9999% WILL CRY!]", "7.Silence of Love", "8.Never Give Up | Award Winning Motivational Short Film","9. `The Snail is Chased by a Dangerous Bird!", "10.Sad short story"};
char* music_list[] = {"1.justin bieber- sorry", "2. Justin bieber- baby", "3.selena gomez- come and get it", "4. Selena gomez- calm down", "5.samir stha - thamnahaat", "6. Samir stha- herana", "7. Yabesh thapa - aakhale", "8. Yabesh thapa - ye mutu", "9. Heriye- arjit singh", "10. Arjit singh - jogiya"};
char* charity_list[] ={"Beast philanthropy", "Beast philanthropy", "Beast philanthropy", "Beast philanthropy", "Beast philanthropy", "Beast philanthropy", "Beast philanthropy", "Beast philanthropy", "Beast philanthropy", "Beast philanthropy", };
char* exict_list[] ={"drage race", "Ronaldo's skill to learn", "top 5 football skills from neymar", "Top 5 football skills from messi", "Best football passing skill", "drage race", "ronaldo's skill to learn", "top 5 football skills from messi", "basic football skills","5 football skills from neymar"};
char* life_list[] ={"Simple trick to avoid divorce", "My career as a male model", "Road trip to vegas", "Vegan tries meat for the first time", "Boxing strangers", "Stole my brother\s gf", "Super car ready for race", "Testing 5-start airlines", "Tested 1-star hotel", "Travelled 3000miles with 0.01 euro"};
    // Seed the random number generator with the current time
    srand(time(NULL));

    for (int i = 0; i < 10; i++) {
        // Generate a random number (0 or 1) to decide which array to use
        int random_index = rand() % 5;

        if (random_index == 0) {
            printf("%s\n", sad_list[i]);
            printf("Do you like it? (y/n): ");
            scanf(" %c", &yesno);
            if (yesno == 'y') {
                sad_count++;
            } else if (yesno == 'n') {
                printf(" ");
            } else {
                printf("Not a valid answer!");
            }
        } 
        else if(random_index == 1){
            printf("%s\n", charity_list[i]);
            printf("Do you like it? (y/n): ");
            scanf(" %c", &yesno);
            if (yesno == 'y') {
                charity_count++;
            } else if (yesno == 'n') {
                printf(" ");
            } else {
                printf("Not a valid answer!");
            }
        }
        else if(random_index == 2){
            printf("%s\n", exict_list[i]);
            printf("Do you like it? (y/n): ");
            scanf(" %c", &yesno);
            if (yesno == 'y') {
                exict_count++;
            } else if (yesno == 'n') {
                printf(" ");
            } else {
                printf("Not a valid answer!");
            }
        }
        else if(random_index == 3){
            printf("%s\n", life_list[i]);
            printf("Do you like it? (y/n): ");
            scanf(" %c", &yesno);
            if (yesno == 'y') {
                life_count++;
            } else if (yesno == 'n') {
                printf(" ");
            } else {
                printf("Not a valid answer!");
            }
        }
        else {
            printf("%s\n", music_list[i]);
            printf("Do you like it? (y/n): ");
            scanf(" %c", &yesno);
            if (yesno == 'y') {
                music_count++;
            } else if (yesno == 'n') {
                printf(" ");
            } else {
                printf("Not a valid answer!");
            }
        }
    }
    total_likes_count = sad_count + music_count + charity_count +exict_count + life_count;
    printf("\n you will like these following videos: \n");
    if(sad_count>music_count && sad_count>charity_count && sad_count>exict_count && sad_count>life_count){
        for(int i=0;i<10;i++){
            printf("%s\n",sad_list[i]);
        }
    }
    else if(music_count>sad_count && music_count>charity_count && music_count>exict_count && music_count>life_count){
        for(int i=0;i<10;i++){
            printf("%s\n",music_list[i]);
        }
    }
    else if(charity_count>sad_count && charity_count>music_count && charity_count>exict_count && charity_count>life_count){
        for(int i=0;i<10;i++){
            printf("%s\n",charity_list[i]);
        }
    }
    else if(exict_count>sad_count && exict_count>music_count && exict_count>charity_count && exict_count>life_count){
        for(int i=0;i<10;i++){
            printf("%s\n",exict_list[i]);
        }
    }
    else if(life_count>sad_count && life_count>music_count && life_count>exict_count && life_count>charity_count){
        for(int i=0;i<10;i++){
            printf("%s\n",life_list[i]);
        }
    }
}