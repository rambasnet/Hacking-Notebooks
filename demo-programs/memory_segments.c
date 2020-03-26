#include <stdio.h>
#include <stdlib.h>

int global_var;
int global_initialized_var = 5;
char global_string[] = "John Smith!";

void function() {
   int stack_var = 100; 
   // notice this variable has the same name as the one in main()
   static int static_initialized_var = 5;
   static_initialized_var += 10;
   printf("%s\n", "Output inside function:");
   printf("static_initialized_var = %d\n", static_initialized_var);
   printf("static_initialized_var is at address %p\n", &static_initialized_var);
   printf("stack_var = %d\n", stack_var);
   printf("stack_var is at address %p\n", &stack_var);
}


int main() {
   int stack_var; // same name as the variable in function()
   static int static_var;
   int * heap_var_ptr;
   static int static_initialized_var = 5;

   heap_var_ptr = (int *) malloc(4);
   printf("%s\n", "output from main function");
   // these addressse are in the code/text segment
   printf("main is at address: %p\n", main);
   printf("main is at address: %p\n", &main);
   printf("function is at address: %p\n", function);

   // These variables are in the data segment
   printf("global_initialized_var is at address %p\n", &global_initialized_var);
   printf("static_initialized_var is at address %p\n\n", &static_initialized_var);

   // These variables are in the bss segment
   printf("static_var is at address %p\n", &static_var);
   printf("global_var is at address %p\n\n", &global_var);

   // This variable is in the heap segment
   printf("heap_var is at address %p\n\n", heap_var_ptr);

   // These variables are in the stack segment
   printf("stack_var is at address %p\n", &stack_var);

   printf("\ncalling function()...\n");   
   function();

   // call function again
   printf("\ncalling function() again...\n");
   // what do you think is the values of static variable in function()?
   function();
   return 0;
}  
