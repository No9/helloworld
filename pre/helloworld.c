#include <kore/kore.h>
#include <kore/http.h>

#require "./hello.c" as h

extern "C" {
   int page(struct http_request *);
}

int page(struct http_request *);

int
page(struct http_request *req)
{
   int len;
   char * body;
   h(&body, &len); 
   http_response(req, 200, body, 11);
   return (KORE_RESULT_OK);
}
