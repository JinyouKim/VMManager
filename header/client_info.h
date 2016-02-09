#ifndef _CLIENT_INFO_H_
#define _CLIENT_INFO_H_

#include <stdint.h>
#include <stdio.h>

typedef struct _client_info
{
	uint8_t type;
	uint8_t id_length;
	char* id;
	uint8_t ip_length;
	char* ip;	
} client_info;

#endif
