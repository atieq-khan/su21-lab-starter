#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "ex1.h"

int main(int argc, char **argv) {
    printf("Running tests...\n\n");
    /************ Part 1 Test Cases ************/
    char *str = "hello world!";

    int num_l = num_occurrences(str, 'l');
    assert(num_l == 3);

    int num_z = num_occurrences(str, 'z');
    assert(num_z == 0);

    /* TODO: Think of a scenario that is not tested by the current test cases. Create one additional test case to test this scenario. */
    char *str_test = ""; // Use the empty string for additional case.

    int num_a = num_occurrences(str_test, 'a'); // this will test for "a" in the empty string.
    assert(num_a == 0);    

    int num_b = num_occurrences(str_test, 'b'); // this will test for "b" in the empty string.
    assert(num_b == 0);    

    printf("Congrats! If you have made it to this line, your Part 1 Test cases are all passing!\n");

    /************ Part 2 Test Cases ************/
    DNA_sequence dna_seq_1;
    strcpy(dna_seq_1.sequence, "ACTTTGAAC");
    compute_nucleotide_occurrences(&dna_seq_1);
    assert(dna_seq_1.A_count == 3);
    assert(dna_seq_1.C_count == 2);
    assert(dna_seq_1.G_count == 1);
    assert(dna_seq_1.T_count == 3);

    DNA_sequence dna_seq_2;
    strcpy(dna_seq_2.sequence, "AAAACCC");
    compute_nucleotide_occurrences(&dna_seq_2);
    assert(dna_seq_2.A_count == 4);
    assert(dna_seq_2.C_count == 3);
    assert(dna_seq_2.G_count == 0);
    assert(dna_seq_2.T_count == 0);

    // Additional test case: DNA sequence with characters other than 'A', 'C', 'G', 'T'
    DNA_sequence dna_seq_3;
    strcpy(dna_seq_3.sequence, "AXYZCGTAA");
    compute_nucleotide_occurrences(&dna_seq_3);
    assert(dna_seq_3.A_count == 3);
    assert(dna_seq_3.C_count == 1);
    assert(dna_seq_3.G_count == 1);
    assert(dna_seq_3.T_count == 1);

    // Additional test case: DNA sequence at maximum length
    DNA_sequence dna_seq_4;
    strcpy(dna_seq_4.sequence, "ATCGATCGATCGATCGATCG");
    compute_nucleotide_occurrences(&dna_seq_4);
    assert(dna_seq_4.A_count == 5);
    assert(dna_seq_4.C_count == 5);
    assert(dna_seq_4.G_count == 5);
    assert(dna_seq_4.T_count == 5);

    printf("Congrats! If you have made it to this line, your Part 2 Test cases are all passing!\n");

    return 0;
}
