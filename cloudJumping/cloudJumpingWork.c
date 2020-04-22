#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();

// Complete the jumpingOnClouds function below.
int jumpingOnClouds(int c_count, int* c) {
	int i = 0;
	int jumps = 0;
	int min = 0;
	int end_point = 0;
	int fir_pos_last_jump = 0;
	int sec_pos_last_jump = 0;
	int array_count;
	int current_index = 0;
	int test_index = 0;
	int next_even_index = 0;
	int next_next_even_index = 0;
	int next_odd_index = 0;
	int next_next_odd_index = 0;
	const char *type[c_count];
	//    while(i < c_count){
	fir_pos_last_jump = c_count-=2;
	sec_pos_last_jump = ++c_count;
	end_point = c_count; 
++c_count;
min = 2;
	printf("endpoint test: %d\n\n", end_point);
	for(i = 0; i < c_count; i++){
	if(c_count == min){

++jumps;
i = c_count;
	}
		//    for(i = 0; i < end_point; i++){
		//	printf("i: %d\n", i);
		/*
		   current_index = i;
		   if((current_index % 2) == 0){
		   type[i] = "even";
		   current_index = i;
		   if((current_index+=2) <= c_count){
		   next_even_index = current_index;
		   current_index = i;
		   printf("current index: %d next even index: %d\n\n", current_index, next_even_index);
		   }
		   if((++current_index) <= c_count){    
		   next_odd_index = current_index;
		   current_index = i;
		   printf("current index: %d next odd index: %d\n\n", current_index, next_odd_index);
		   }
		   if((current_index+=4) <= c_count){
		   next_next_even_index = current_index;
		   current_index = i;
		   printf("current index: %d next next even index: %d\n\n", current_index, next_next_even_index);
		   }    
		   if((current_index+=3) <= c_count){
		   next_next_odd_index = current_index;
		   current_index = i;
		   printf("current index: %d next next odd index: %d\n\n", current_index, next_next_odd_index);
		   }

		   }
		   else {
		   current_index = i;
		   type[i] = "odd";
		   if(++current_index <= c_count){
		   next_even_index = current_index;
		   current_index = i;
		   printf("current index: %d next even index: %d\n", current_index, next_even_index);
		   }
		   if((current_index+=2) <= c_count){    
		   next_odd_index = current_index;
		   current_index = i;
		   printf("current index: %d next odd index: %d\n", current_index, next_odd_index);
		   }
		   if((current_index+=3) <= c_count){
		   next_next_even_index = current_index;
		   current_index = i;
		   printf("current index: %d next next even index: %d\n", current_index, next_next_even_index);
		   }    
		   if((current_index+=4) <= c_count){
		   next_next_odd_index = current_index;
		   current_index = i;
		   printf("current index: %d next next odd index: %d\n", current_index, next_next_odd_index);
		   }
		   }
		//    i = current_index;


		if(((current_index % 2) == 0) && (c[current_index] != 1)){
		printf("valid even index\n");
		++jumps;
		//    current_index =    ++i;
		//++i;
		printf("ai: %d jumps: %d\n", i, jumps);

		if(c[next_even_index] == 1){
		//    ++i;
		//    i = current_index;
		if(c[next_odd_index] != 1){
		++jumps;
		printf("bi: %d jumps: %d\n", i, jumps);
		//    i = current_index;


		++i;


		if(c[next_next_odd_index] != 1){
			++jumps;
			++i;
			//i = current_index;
			printf("ci: %d jumps: %d\n", i, jumps);
		}

	}

	}

	}
	if(((current_index % 2) != 0)){
		printf("valid odd index\n");
		//    ++i;
	}

	++i;

	current_index = i;
	array_count = c_count;
	printf("current index: %d\n", current_index);
	if((type[i] == "even") && (c[i] == 0)){
		if(i < (--c_count)){
			++jumps;
			//    array_count = c_count;
		}
		++c_count;
	}
	if((type[i] == "even") && (c[i] == 1)){
		//++i;
		printf("next odd index: %d\n", next_odd_index);

		if(c[++i] == 0){
			if(i < (c_count-=3)){    
				//c_count+=3;
				array_count = c_count;

				if(c[next_even_index] != 1){
					jumps+=3;
				}
				if(c[next_even_index] == 1){
					++jumps;
				}


			}
			c_count+=3;
			if(( i < (c_count-=1)) && (i > (c_count-=3))){
				array_count = c_count;
				jumps+=2;
				//c_count+=3;
			}

			c_count+=4;

		}
		--i;
		//    if(i < (c_count-4)){

		if(c[i+=3] == 0){
			//    if(i < (c_count-1)){
			i-=3;
			++jumps;
			//    }
		}
		*/
			//    }
			//}
	else{
			current_index = i;
		printf("a Jumped from current index: %d\n\n", current_index);
		if((i % 2) == 0){
			i = current_index;
			current_index+=2;
			printf("a Jumped to current index: %d\n\n", current_index);
			//	printf("this i and endpoint: %d\t%d\n\n", i, end_point);
			if(current_index < c_count){
				//    if(i < end_point){
				//    if(current_index < end_point){
				//    ++c_count;
				//printf("\n\nJumped from current index: %d\n\n", current_index);
				if(c[current_index] == 0){
					//    if(c[current_index] == 0){
					printf("a jumps: %d\n\n",++jumps);
					while(c[current_index] == 0){
						printf("\n\nc Jumped from current index: %d\n\n", current_index);
						i+=2;
						current_index+=2;
						printf("d Jumped to current index: %d\n\n", current_index);
						printf("first possible last jump: %d\tsecond possibe last jump: %d\n\n", fir_pos_last_jump, sec_pos_last_jump);
						if(((current_index <= fir_pos_last_jump) || (current_index <= sec_pos_last_jump)|| (current_index <= c_count)) && (c[current_index] == 0)){
							printf("b jumps: %d\n\n",
									++jumps);
							/*
							   if(current_index == c_count){
							   ++current_index;
							   }
							   }
*/
					}	
						if(current_index == c_count){
								++jumps;
								++current_index;
							}
						//}
						//if(current_index == c_count){
						//     i-=3;
						//}
						/*	if((current_index > fir_pos_last_jump) || (current_index > sec_pos_last_jump)){
						*/
						if(current_index > c_count){


							// ++jumps;
							i = c_count;
							break;
						}
						//if(i <  end_point){
						//    i+=2;
						//    current_index+=2;
						/*
						   printf("a i: %d\tcurrent index: %d\n\n", i, current_index);
						   */
						//    }
						//++i;
					}
					/*
					   if(c[current_index] == 1){
					   printf("while loop a stopped at current_index: %d\ti: %d\n\n", current_index, i);
					   i-=3;
					   }
					   */    
					}
					//    }
					/*
					   printf("i test 1: %d\n\n", i);    
					   printf("current index test 1: %d\n\n", current_index);
					   printf("c[current_index] test 1: %d\n\n", c[current_index]);    
					   */
					//    if(c[i] == 1){
					if(c[current_index] == 1){
						printf("\n\ne Jumped from current index: %d\n\n", current_index-=2);
						i-=2;
						//    if((i % 2) == 1){
						//    printf("b jumps: %d\n\n", ++jumps);
						//    if(c[++i] == 0){

						//	if(c[--current_index] == 0){
						//	printf("b jumps: %d\n\n", ++jumps);
						printf("f Jumped to current index: %d\n\n", ++current_index);		
						printf("c jumps: %d\n\n", ++jumps);
						++i;
						while((c[current_index]) != 1){
							printf("\n\ng Jumped from current index: %d\n\n", current_index);
							i+=2;
							current_index+=2;
							printf("h Jumped to current index: %d\n\n", current_index);
							if(((current_index <= fir_pos_last_jump) || (current_index <= sec_pos_last_jump)|| (current_index <= c_count)) && c[current_index] == 0){
								printf("d jumps: %d\n\n", ++jumps);
								/*
								   if(current_index == end_point){
								   ++current_index;
								   }
								   */
							}
								if(current_index == c_count){
									++jumps;
									++current_index;
								}
							
							/*
							   if((current_index > fir_pos_last_jump) || (current_index > sec_pos_last_jump)){
							   */	
							// ++jumps;
							if(current_index > c_count){	
								i = c_count;
								break;
							}
							// if(current_index == c_count){
							//   i-=3;
							//}
							//    if(i < end_point){
							//    i+=2;
							//    current_index+=2;
							/*
							   printf("b i: %d\tcurrent index: %d\n\n", i, current_index);
							   */
							//    }

					}

					if(c[current_index] == 1){
						printf("while loop stopped at current_index: %d\ti: %d\n\n", current_index, i);
						i-=2;    
					}

					//	}
					//		printf("hello current index %d\n\n", current_index);    
					/*    if(((current_index+=3) < end_point) && c[current_index] == 0){
					      if(c[--current_index] == 0){
					      printf("c jumps: %d\n\n", ++jumps);
					//    i = current_index;
					}
					++i;
					//    }*/
					//    i = current_index;
					//    ++i;
					}    
					/*    
					      test_index = ++i;
					      printf("bi: %d\n\n", i);
					      if(test_index < end_point){
					//    ++c_count;
					if(c[test_index] == 0){
					printf("c jumps: %d\n\n", ++jumps);
					}
					}
					test_index = i+=2;
					printf("i test 2: %d\n\n", i);
					if(test_index < end_point){
					//    ++c_count;
					if(c[test_index] == 0){
					printf("d jumps: %d\n\n", ++jumps);
					}
					if(c[test_index] == 1){
					--test_index;
					if(c[test_index] == 0){
					if((test_index % 2) != 0){
					printf("e jumps: %d\n\n", ++jumps);
					}
					printf("this test_index: %d\n\n", test_index);    
					if((test_index% 2) == 0)
					{

					i-=2;
					}

					}
					}

					}    

					}
					*/
					}

					}
					printf("\nc count: %d\n\n", c_count);
				}
			}
				//    printf("\nc count: %d\n\n", c_count);
				/*
				   for(int i = 0; i < c_count; i++){
				   printf("%s\t", type[i]);
				   }
				   printf("\n");
				   for(int i = 0; i < c_count; i++){
				   printf("%d\t", c[i]);
				   }
				   */
				//}
				for(int i = 0; i < c_count; i++){
					if((i%10) != 0){
						printf("%d: %d\t", i, c[i]);
					}
					if((i%10) == 0){
						printf("\n%d: %d\t", i, c[i]);
					}
				}
				printf("\n\n");
				//for(int i = 0; i < c_count; i++){
				//    printf("%d\t", c[i]);
				//}
				return jumps;
			}
			int main()
			{
				/*
				   FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

				   char* n_endptr;
				   char* n_str = readline();
				   int n = strtol(n_str, &n_endptr, 10);

				   if (n_endptr == n_str || *n_endptr != '\0') { exit(EXIT_FAILURE); }

				   char* s = readline();
				   */

				//	int n = 7;
			//	int n = 6;
				//int n =9;
				//	int n = 10;
		//	int n = 85;
		int n = 2;
				int c_count = n;
			int c[] = {0, 0};
				//	int c[] = {0, 1, 0, 0, 0, 1, 0};
				//	int c[] = {0, 0, 1, 0, 0, 0, 0};
				// int c[] = {0, 0, 1, 0, 0, 1, 0};
				//	int c[] = {0, 1, 0, 0, 1, 0, 0};
				//int c[] = {0, 0, 1, 0, 1, 0, 0};
				//		int c[] = {0, 0, 0, 1, 0, 1, 0};
				//	int c[] = {0, 1, 0, 1, 0, 0, 0};
			//here		int c[] = {0, 0, 0, 1, 0, 0};
				//	int c[] = {0, 1, 0, 0, 1, 0, 1, 0, 0};
				//	int c[] = {0, 1, 0, 0, 1, 0, 0, 1, 0, 0};
				//int c[] = {0, 0, 1, 0, 1, 0, 1, 0, 1, 0};
				//int c[] = {0, 0, 0, 1, 0, 1, 0, 0, 1, 0};
			/*	
				   int c[] = {0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 
				   0, 1, 0, 1, 0, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 
				   0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 1, 0, 0, 1,
				   0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 0, 1, 0};
			*/	


				int result = jumpingOnClouds(c_count, c);

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

*/ 
