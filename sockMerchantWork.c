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
	//int latest_array[n];
	//int latest_ar_count = 0;
	//int latest_ar_index = -1;
	int current_index = 0;
	int test_index = 0;
	//int nex_ar_index = 0;
	int init_ar_index = 0;
	int current;
	int test;
	int i = 0;
	printf("\n");
	//while((ar_count != 0) && (ar_count > -1)){		
	current = ar[current_index];
	test_index = current_index;
	++test_index;
	//nex_ar_index = ++cur_ar_index;
	test = ar[test_index];
	//	printf("initial index: %d\n", init_ar_index);

	while(i != ar_count){
		//for(int i = 0;i < ar_count; i++)	
		//	latest_ar_count = 0;
		//	latest_ar_index = -1;
		//	ar_index = 0;
		//	current = ar[cur_ar_index];
		//	printf("\ncurrent: %d\n", current);
		//init_ar_index = cur_ar_index;
		//nex_ar_index = ++cur_ar_index;
		//	ar_index = ++ar_index;

		//	test = ar[nex_ar_index];	
		//	printf("\ntest: %d\n", test);
		if((current == test) && (current != 0) && (test != 0)){
			ar[current_index] = 0;
			printf("current index: %d\n" , current_index);
			//	printf("initial index: %d\n", init_ar_index);
			printf("test index: %d\n", test_index);
			ar[test_index] = 0;
			++pair_count;
			printf("pair count: %d\n", pair_count);
			init_ar_index = ++init_ar_index;	
			printf("Pair found! current: %d\n", current);
			printf("Pair found! test: %d\n", test);
			//cur_ar_index = ++cur_ar_index;
			while(ar[current_index] == 0){
				++current_index;
			}
			//if(ar[current_index] != 0){
			printf("ar at init: %d\n", ar[init_ar_index]);
			current = ar[current_index];
			//cur_ar_index = ++init_ar_index;
			//	cur_ar_index = init_ar_index;
			test_index = current_index;	
			//nex_ar_index = ++cur_ar_index;
			//	printf("Hello! current index: %d\n", cur_ar_index);
			++test_index;
			while(ar[test_index] == 0){
				++test_index;
			}
			test = ar[test_index];	

			/*
			   if(ar[test_index] != 0){	
			   test = ar[nex_ar_index];	
			//	printf("Pair found! current: %d\n", current);
			//	printf("Pair found! test: %d\n", test);

			//	printf("current: %d\n", current);
			printf("init index: %d\n", init_ar_index);
			printf("next index: %d\n", nex_ar_index);

			}
			*/	
			//	}
			/*
			   for(i; i < 4; i++){
			   latest_array[++latest_ar_index] = ar[i];
			   ++latest_ar_count;
			   }
			   */
			//		ar_count-=2;
			//		printf("ar_count: %d\n", ar_count);
			printf("\n");
		}
		if(current != test){
			printf("Pair not found! current: %d\n", current);
			printf("Pair not found! test: %d\n", test);
			//latest_array[++latest_ar_index] = test;
			//++latest_ar_count;
			//	printf("ar count: %d\n", ar_count);
			//	printf("ar element %d\n ",test);
			//ar_count--;
			printf("\n");
			//nex_ar_index = init_ar_index;
			test = ar[++test_index];
	if(test <= 0){
current = ar[++current_index]; 
	}	
			//	printf("Pair not found! current: %d\n", current);
			//	printf("Pair not found! test: %d\n", test);
		}
		//	ar = latest_array;
		//	test = ar[++nex_ar_index];
		printf("array\n");
		for (int i = 0; i < ar_count; i++){
			printf("%d ", ar[i]);
		}
		printf("\n\n");
		/*
		   printf("\n\nlatest array\n");
		   for(int i = 0; i < ar_count; i++){
		   printf("%d ", latest_array[i]);
		   }
		   */
		i++;
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
//	int n  = 9;
	int n = 10;
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
//	int ar[] =  {10, 20, 20, 10, 10, 30, 50, 10, 20};
	int ar[] = {1, 1, 3, 1, 2, 1, 3, 3, 3, 3};	
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
