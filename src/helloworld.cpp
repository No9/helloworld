#include <kore/kore.h>
#include <kore/http.h>

namespace _94f9cfe6 {
#include <string.h>

 
void hello (char** body, int *body_len) {
   char * msg = "hello world";
   *body = msg;
   *body_len = strlen(msg);
}

};


extern "C" {
   int page(struct http_request *);
}

int page(struct http_request *);

int
page(struct http_request *req)
{
   int len;
   char * body;
   _94f9cfe6::hello(&body, &len); 
   http_response(req, 200, body, 11);
   return (KORE_RESULT_OK);
}
