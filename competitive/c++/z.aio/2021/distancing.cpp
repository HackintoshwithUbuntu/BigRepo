/*
 * Solution Template for Social Distancing
 * 
 * Australian Informatics Olympiad 2021
 * 
 * This file is provided to assist with reading and writing of the input
 * files for the problem. You may modify this file however you wish, or
 * you may choose not to use this file at all.
 */

#include <bits/stdc++.h>
using namespace std;

/* N is the number of meals. */
int N;

/* K is the minimum distance between hippos. */
int K;

/* D contains the locations of the meals. */
int D[100006];

int answer = 0;

int main(void) {
    /* Open the input and output files. */
    FILE *input_file = fopen("distin.txt", "r");
    FILE *output_file = fopen("distout.txt", "w");

    /* Read the value of N and K. */
    fscanf(input_file, "%d%d", &N, &K);

    /* Read the locations of the meals. */
    for (int i = 0; i < N; i++) {
        fscanf(input_file, "%d", &D[i]);
    }

    /*
     * TODO: This is where you should compute your solution. Store the maximum
     * number of hippos that can be invited into the variable answer.
     */

    vector<bool> meals(100006, false);
    for(int i = 0; i < N; i++){
        int val = D[i];
        meals[val] = true;
    }
    for(int i = 0; i < 100006; i++){
        bool val = meals[i];
        if(val == true){
            answer++;
            i+=K-1;
            continue;
        }
    }

    /* Write the answer to the output file. */
    fprintf(output_file, "%d\n", answer);

    /* Finally, close the input/output files. */
    fclose(input_file);
    fclose(output_file);

    return 0;
}
