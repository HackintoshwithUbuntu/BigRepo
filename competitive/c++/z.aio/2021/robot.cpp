/*
 * Solution Template for Robot Vacuum
 * 
 * Australian Informatics Olympiad 2021
 * 
 * This file is provided to assist with reading and writing of the input
 * files for the problem. You may modify this file however you wish, or
 * you may choose not to use this file at all.
 */

#include <bits/stdc++.h>

/* K is the number of instructions. */
int K;

/* instrs contains the sequence of instructions. */
char instrs[100005];

int answer = 0;

int main(void) {
    /* Open the input and output files. */
    FILE *input_file = fopen("robotin.txt", "r");
    FILE *output_file = fopen("robotout.txt", "w");

    /*
     * Read the value of K and the sequence of instructions from the input file.
     */
    fscanf(input_file, "%d", &K);
    fscanf(input_file, "%s", instrs);

    /*
     * TODO: This is where you should compute your solution. Store the fewest
     * number of instructions you need to add to the end of the sequence into
     * the variable answer.
     */
    int right = 0;
    int down = 0;

    for(int i = 0; i < K; i++){
        char cchar = instrs[i];
        if(cchar == 'N')
            right += 1;
        else if(cchar == 'S')
            right -= 1;
        else if(cchar == 'E')
            down += 1;
        else if(cchar == 'W')
            down -= 1;
    }
    answer = abs(right) + abs(down);
    answer = abs(answer);


    /* Write the answer to the output file. */
    fprintf(output_file, "%d\n", answer);

    /* Finally, close the input/output files. */
    fclose(input_file);
    fclose(output_file);

    return 0;
}
