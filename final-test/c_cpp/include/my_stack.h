#tack_push(int x);
      6 int stack_pop();
      7
      8 // The capacity of the stack
      9 int stack_capacity();
     10
     11 // Current available size of the stack
     12 int stack_size();
     13
     14
     15 /*
     16  * return 0/1 to check if stack is empty or full
     17  * 0 - No
     18  * 1 - Yes
     19  */
     20 int stack_is_empty();
     21 int stack_is_full();
ndef _MY_STACK_H
#define _MY_STACK_


void stack_push(int x);
int stack_pop();

// The capacity of the stack
int stack_capacity();

// Current available size of the stack
int stack_size();


/*
 * return 0/1 to check if stack is empty or full
 * 0 - No
 * 1 - Yes
 */
int stack_is_empty();
int stack_is_full();


#endif //_MY_STACK_H
