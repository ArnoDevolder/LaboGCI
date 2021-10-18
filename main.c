/* Includes that are needed. */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Print a basic HTTP header. */
static void
print_http_header (const char * content_type)
{
    printf ("Content-Type: %s\n\n", content_type);
}

/* Handle errors by printing a plain text message. */
static void cgi_fail (const char * message)
{
    print_http_header ("text/plain");
    printf ("%s\n", message);
    exit (0);
}

/* Write code in the main function. */

int main()
{
   print_http_header ("text/html");
   printf ("<h1>CMake : Hello World!</h1>\n");
}