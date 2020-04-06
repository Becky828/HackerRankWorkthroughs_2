#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//char* readline();
//char** split_string(char*);
// Complete the sockMerchant function below.
int sockMerchant(int n, int ar_count, int* ar) {
	int pair_count = 0;
	int latest_ar_size;
	//int latest_array[latest_ar_size];
	int latest_array[n];
	//int *latest_array, *latest_array_trimmed;
	//	int *latest_array=NULL;
	//size_t latest_ar_size, trimmed_ar_size; 
	//	int *latest_array;// = (int*)malloc(latest_ar_size*sizeof(int));
	int latest_ar_count = 0;
	int latest_ar_index = 0;
	int current;
	int test;
	int i_loop_count = 0;
	int j_loop_count = 0;
	int k_loop_count = 0;
	int l_loop_count = 0;
	int m_loop_count = 0;
	int o_loop_count = 0;
	//int j;
	//int k;
	//	int* current;
	//	int* marked;
	for (int i = 0; i < n; i++) {
		printf("i loop: %d\n", ++i_loop_count);
		if(ar_count != 0){
			current = ar[i];
			for(int j = i+1; j < n; j++){
				printf("j loop: %d\n", ++j_loop_count);
				test = ar[j];
				if(current == test){
					latest_ar_size = n-2;
				}
				if(current != test){
					latest_ar_size = n-1;
				}
				//latest_array = (int*)malloc(latest_ar_size);
				//latest_array=int[latest_ar_size];
				if(latest_array == NULL){
					printf("Could not allocate memory.");
					exit(1);
				}
				//latest_array =(int*)malloc(latest_ar_size*sizeof(int));
			}	
			for(int k = i+1; k < n; k++){
				printf("k loop: %d\n", ++k_loop_count);
				//	printf("i%d\n", i);
				//	printf("k%d\n", k);
				//	printf("n%d\n", n);
				test = ar[k];
				if(current == test){
					pair_count++;
					for (int l = k+1; l < n; l++){
						printf("l loop: %d\n", ++l_loop_count);
						latest_array[latest_ar_index] = ar[l];
						latest_ar_count++;
						latest_ar_index++;
					}
				}
				if(current != test){
					latest_array[latest_ar_index] = test;
					latest_ar_count++;
					latest_ar_index++;
				}
			}
		//		ar_count--;
		ar_count = latest_ar_count;
		//	k = n;
		//	n = ar_count;
		//	ar = NULL;
		for(int m = 0; m < n; m++){
			ar[m] = 0;
		}
		ar[ar_count];
		for(int o = 0; o < ar_count; o++){
			printf("o loop: %d\n", ++o_loop_count);
			ar[o] = latest_array[o];

		}
		printf("new ar\n");
		//	n = ar_count;
		printf("n%d\n", n);
		printf("\n");
		
		}

	}
	return pair_count;
}
int main()
{
	/*  FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");
	    char* n_endptr;
	    char* n_str = readline();
	    int n = strtol(n_str, &n_endptr, 10);
	    if (n_endptr == n_str || *n_endptr != '\0') { exit(EXIT_FAILURE); }
	    char** ar_temp = split_string(readline());
	    int* ar = malloc(n * sizeof(int));
	    for (int i = 0; i < n; i++) {
	    char* ar_item_endptr;
	    char* ar_item_str = *(ar_temp + i);
	    int ar_item = strtol(ar_item_str, &ar_item_endptr, 10);
	    if (ar_item_endptr == ar_item_str || *ar_item_endptr != '\0') { exit(EXIT_FAILURE); }
	 *(ar + i) = ar_item;
	 }
	 */
	int n  = 9;
	/*
	   char* ar_temp = split_string(str, "10 20 20 10 10 30 50 10 20");
	   int* ar = malloc(n * sizeof(int));
	   for (int i = 0; i < n; i++) {
	   char* ar_item_endptr;
	   char* ar_item_str = *(ar_temp + i);
	   int ar_item = strto1(ar_item_str, &ar_item_endptr, 10);
	   if (ar_item_endptr == ar_item_str || *ar_item_endptr != '\0')
	   {
	   exit(EXIT_FAILURE);
	   }
	 *(ar + i) = ar_item;
	 }
	 */
	int ar[] =  {10, 20, 20, 10, 10, 30, 50, 10, 20};
	int ar_count = n;
	int result = sockMerchant(n, ar_count, ar);
	//	fprintf(fptr, "%d\n", result);
	printf("%d\n", result);
	//	fclose(fptr);
	return 0;
}
/*
   char* readline() {
   size_t alloc_length = 1024;
   size_t data_length = 0;
   char* data = malloc(alloc_length);
   while (true) {
   char* cursor = data + data_length;
   char* line = fgets(cursor, alloc_length - data_length, stdin);
   if (!line) { break; }
   data_length += strlen(cursor);
   if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }
   size_t new_length = alloc_length << 1;
   data = realloc(data, new_length);
   if (!data) { break; }
   alloc_length = new_length;
   }
   if (data[data_length - 1] == '\n') {
   data[data_length - 1] = '\0';
   }
   data = realloc(data, data_length);
   return data;
   }
   char** split_string(char* str) {
   char** splits = NULL;
   char* token = strtok(str, " ");
   int spaces = 0;
   while (token) {
   splits = realloc(splits, sizeof(char*) * ++spaces);
   if (!splits) {
   return splits;
   }
   splits[spaces - 1] = token;
   token = strtok(NULL, " ");
   }
   return splits;
   }*/
