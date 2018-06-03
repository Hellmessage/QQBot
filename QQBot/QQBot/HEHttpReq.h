#ifndef _HEHTTPREQ_H_
#define _HEHTTPREQ_H_

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <netdb.h>
#include <stdarg.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <sys/socket.h>

#define BUFSIZE 41000
#define URLSIZE 1024
#define INVALID_SOCKET -1
#define __DEBUG__




#endif // !_HEHTTPREQ_H_




class HttpRequest {
public:
	HttpRequest();
	~HttpRequest();
	void DebugOut(const char *fmt, ...);

};


void HttpRequest::DebugOut(const char *fmt, ...) {
#ifdef __DEBUG__
	va_list ap;
	va_start(ap, fmt);
	vprintf(fmt, ap);
	va_end(ap);
#endif
	printf(fmt, ap);
}