/******************************************************************************
 * Bubble Sort Algorithm
 * 
 * Not perfect, feel free to criticize in order to improve the program. :)
*******************************************************************************/

#include <stdio.h>
#include <string.h>
#define SIZE 10

void runner(void); // runner prototype

int main(void)
{
    
    // calls runner function
    runner();

    return 0;
}

/*
 Executes entire program
 */
void runner(void) {
    
    void bubbleSort(int * const array, const int size); // bubbleSort prototype 
    
    // initialize array
    int a[SIZE] = {0};
    
    // used to sort again 
    char dec[] = "";
    
    // counters
    int i, s;
    
    printf("%s", "Enter 10 numbers:\n");
    for (s = 0; s < 10; s++) {
        scanf("%d", &a[s]);
    }
    
    printf("%s", "Data items in original order:\n");
    
    // loops through array 'a'
    for (i = 0; i < SIZE; i++) {
        printf("%4d", a[i]);
    }
    
    bubbleSort(a, SIZE);
    
    printf("%s", "\nData items in ascending order:\n");
    
    // loops through sorted array (after bubbleSort)
    for (i = 0; i < SIZE; i++) {
        printf("%4d", a[i]);
    }
    
    puts(""); // newline 
    
    printf("%s", "\nWould you like to sort again (yes/no)?\n");
    scanf("%s", &dec);
    
    if (strncmp(dec, "no", 5)) {
        puts("-----------------------------------------");
        runner();
    } else if (strncmp(dec, "yes", 5)) {
        puts("Have a nice day!");
    }
    
}

/*
 Executes bubble sort algorithm 
 */
void bubbleSort(int * const array, const int size) {
    
    void swap(int *element1Ptr, int *element2Ptr); // swap prototype
    int pass; // pass counter
    int j; // comparison counter 
    
    // loop to control passes 
    for (pass = 0; pass < size - 1; pass++) {

            
            // loop to control comparisons during each pass 
            for (j = 0; j < size - 1; j++) {
                
                // swap adjacent elements if out of order 
                if (array[j] > array[j+1]) { // if out of order
                    swap(&array[j], &array[j+1]);
                } // end if
                
            } // end inner for 
            
        } // end outer for

} // end bubble sort 

/*
 Swaps elements in array by comparing to next 
 */
void swap(int *element1Ptr, int *element2Ptr) {
    
    int hold = *element1Ptr; // hold = array[j];
    *element1Ptr = *element2Ptr; // array[j] = array[j + 1];
    *element2Ptr = hold; // array[j + 1] = hold; 
    
}
