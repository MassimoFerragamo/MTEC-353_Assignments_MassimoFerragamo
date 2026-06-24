#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int major_scale[] = {0, 2, 4, 5, 7, 9, 11};
int minor_scale[] = {0, 2, 3, 5, 7, 8, 10}; 
int pentatonic_scale[] = {0, 3, 5, 7, 10};

typedef enum Scale {
    MAJOR, 
    MINOR, 
    PENTATONIC
} Scale; 

typedef struct Note {
    int pitch;
    float duration; 
    int velocity;
} Note;

void generate_Melody(Note* melody, int length, Scale scale_type, int Root_Note){
    for(int i = 0; i < length; i++){
        int index = rand();
        int note = 0; 
        int velocity = rand() % (127 - 64) + 64;
        float duration = rand() % 4; 
        duration = pow(2.0, duration) * 0.25;

        switch(scale_type){
            case MAJOR:
                index = index % 8;
                note = major_scale[index];

                break;
            case MINOR:
                index = index % 8;
                note = minor_scale[index];
                break;
            case PENTATONIC:
                index = index % 6;
                note = pentatonic_scale[index];
                break;
            default: 
                printf("Invalid Scale, please choose MAJOR MINOR or PENTATONIC");
                break;
        };

        note = note + Root_Note; 

        (melody + i)->pitch = note; 
        (melody + i)->duration = duration; 
        (melody + i)->velocity = velocity; 
    };
    printf("\n");
};

int main(){
    srand(time(NULL));

    int length; 
    printf("how many Notes? ");
    scanf("%d", &length);
    printf("you printed %d notes \n", length);
    Scale scale = MINOR;
    int Root_Note = 60;

    Note notes[length]; 

    generate_Melody(notes, length, scale, Root_Note);

    printf("Generated Melody in C Major (%d notes): \n", length);
    for(int i = 0; i < length; i++){
        int note = notes[i].pitch;
        double freq = 440 * pow(2, (note - 69)/12.0f);
        printf("%.4f\n", freq);
        printf("%d\n", note);
        printf("%d\n", notes[i].velocity);
        printf("%.2f\n", notes[i].duration);
    }
}

