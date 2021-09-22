/*
 * Solution Template for Melody
 * 
 * Australian Informatics Olympiad 2021
 * 
 * This file is provided to assist with reading and writing of the input
 * files for the problem. You may modify this file however you wish, or
 * you may choose not to use this file at all.
 */

#include <bits/stdc++.h>
using namespace std;

/* N is the number of notes. */
int N;

/* K is the largest number which could be a note. */
int K;

/* S contains the sequence of notes forming the song. */
int S[100005];

int answer = 0;

int main(void) {
    /* Open the input and output files. */
    FILE *input_file = fopen("melodyin.txt", "r");
    FILE *output_file = fopen("melodyout.txt", "w");

    /* Read the value of N and K. */
    fscanf(input_file, "%d%d", &N, &K);

    /* Read each note in the song. */
    for (int i = 0; i < N; i++) {
        fscanf(input_file, "%d", &S[i]);
    }

    /*
     * TODO: This is where you should compute your solution. Store the smallest
     * possible number of notes Melody can change so that her song is nice into
     * the variable answer.
     */

    vector<int> firstcount(K+1, 0);
    vector<int> secondcount(K+1, 0);
    vector<int> thirdcount(K+1, 0);
    for(int i = 0; i < N; i+=3){
        int val = S[i];
        firstcount[val]++;
    }
    for(int i = 1; i < N; i+=3){
        int val = S[i];
        secondcount[val]++;
    }
    for(int i = 2; i < N; i+=3){
        int val = S[i];
        thirdcount[val]++;
    }
    int max1 = distance(firstcount.begin(), max_element(firstcount.begin(), firstcount.end()));
    int max2 = distance(secondcount.begin(), max_element(secondcount.begin(), secondcount.end()));
    int max3 = distance(thirdcount.begin(), max_element(thirdcount.begin(), thirdcount.end()));

    for(int i = 0; i < N; i+=3){
        int val = S[i];
        if(max1 != val)
            answer++;
    }
    for(int i = 1; i < N; i+=3){
        int val = S[i];
        if(max2 != val)
            answer++;
    }
    for(int i = 2; i < N; i+=3){
        int val = S[i];
        if(max3 != val)
            answer++;
    }

    /* Write the answer to the output file. */
    fprintf(output_file, "%d\n", answer);

    /* Finally, close the input/output files. */
    fclose(input_file);
    fclose(output_file);

    return 0;
}
