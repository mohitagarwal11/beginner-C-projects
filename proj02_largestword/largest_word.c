#include<stdio.h>
#include<string.h>
#define MAX 200

void largestword(const char sentence[]){
    int length_max=0, length_current=0;
    char word_max[MAX];
    char word_current[MAX];

    for(int i=0 ; sentence[i] != '\0'; i++){
        if(sentence[i] != ' '){
            word_current[length_current++] = sentence[i]; 
        }else if(length_current > length_max){ 
                length_max = length_current;
                word_current[length_current] = '\0'; 
                strcpy(word_max, word_current); 
                length_current = 0; 
                word_current[0] = '\0'; 
        }else{
            length_current = 0; 
            word_current[0] = '\0'; 
        }
    }
    printf("The largest word is: %s\n", word_max);
}

int main(){
    char sentence[MAX];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);//will take the user input and will stop when newline is pressed
    sentence[strcspn(sentence, "\n")] = ' ';//since fgets has a \n char at end we remove it here or replace it with a null char

    largestword(sentence);

    return 0;
}