#include <stdio.h>

int main()
{
    int a;
    int* aptr;

    a = 5;
    aptr = &a;  // Assign the address of variable 'a' to the pointer 'aptr'

    printf("Value of a = %d \n", a);  // Print the value of variable 'a'
    printf("Address of a = %p \n\n", &a);  // Print the memory address of variable 'a'

    printf("Value of aptr = %p \n", aptr);  // Print the address stored in pointer 'aptr' (should match the address of 'a')
    printf("Address of aptr = %p \n\n", &aptr);  // Print the memory address of the pointer itself

    *aptr = 9;  // Change the value at the memory location pointed to by 'aptr' to 9 (this changes the value of 'a')
    printf("*aptr = %d \n", *aptr);  // Print the new value pointed to by 'aptr' (Output: 9)
    printf("Value of a = %d \n", a);  // Print the updated value of 'a' (Output: 9)
    printf("Address of a = %p \n", &a);  // Print the address of 'a' again (Address doesn't change, only value does)
    printf("Address of aptr = %p \n", &aptr);  // Print the address of 'aptr' again (Pointer's own address doesn't change)

    return 0;
}
