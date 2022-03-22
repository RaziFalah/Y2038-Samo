#include <span class="code-keyword"><stdlib.h> </span>
#include <span class="code-keyword"><stdio.h> </span>
#include <span class="code-keyword"><unistd.h> </span>
#include <span class="code-keyword"><time.h> </span>
int main (int argc, char **argv) 
{ 
       time_t t; 
       t = (time_t) 1000000000;
       printf ("%d, %s", (int) t, asctime (gmtime (&t))); 
       t = (time_t) (0x7FFFFFFF); 
       printf ("%d, %s", (int) t, asctime (gmtime (&t))); 
       t++; 
       printf ("%d, %s", (int) t, asctime (gmtime (&t)));
 
return 0; 
} 
