#include <stdio.h>

void printOriginScores(int scores[], int size); //元の配列を出力
void printSortScores(int scores[], int size);//ソート後の配列を出力

void sortScores(int scores[], int size){
    int number = 0;
    int max ; 
    int index ; 

    while((size - 1) - number){ 
        max = scores[number];
        index  = number;

        for(int i=0; i < (size - number); i++){
            if(max < scores[i + number]){ 
                max = scores[i + number];
                index = i + number;
            }
        }
        scores[index] = scores[number]; 
        scores[number] = max;
        number += 1;
    }

    printSortScores(scores, size);
    
}

void printOriginScores(int scores[], int size){
    printf("scores = ");
    for(int i=0; i < size; i++){
        printf("%d ", scores[i]);
    }
}

void printSortScores(int scores[], int size){
    printf("result = ");
    for(int i=0; i < size; i++){
        printf("%d ", scores[i]);
    }
}

int main(){
    const int SIZE = 5;         
    int scores[SIZE] = {50,70,60,10,80};

    printOriginScores(scores, SIZE);
    printf("\n");
    sortScores(scores, SIZE);
}