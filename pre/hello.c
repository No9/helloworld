#include <string.h>

#export= hello 
void hello (char** body, int *body_len) {
   char * msg = "hello world";
   *body = msg;
   *body_len = strlen(msg);
}
