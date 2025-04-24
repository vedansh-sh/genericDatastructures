# genericLibInC

Java has collection classes, CPP has STL, then why not C. This is an STL like library made in and for C language, that would facilitate the usage of prebuilt datastructures in C, that too for storing values of any type.


NOTE : The data structures would be storing pointers of the required values and not the actual values itself, therefore what actually is getting stored in the data structures is the address of the value. Therefore, re-using a memory location for storing multiple values one after another and then adding them to datastructures, will lead to the same memory location being stored. Therefore, in order to avoid clasehes and ambiguity of any kind, it is not advisable to do. 
