#ifndef _CLIENT_INFO_H_
#define _CLIENT_INFO_H_

#include <stdint.h>
#include <stdio.h>

typedef struct _client_info
{
	uint8_t command;	// 신규 0 / 로그인 1
	uint8_t type;	// 모바일 0 / 데스크탑 1
	uint8_t width;	// 해상도 너비
	uint8_t height;	// 해상도 높이
	uint8_t id_length;	// ID 스트링 길이
	char* id;	// Client ID
	uint8_t ip_length;	// IP 스트링 길이
	char* ip;	// Client IP
} client_info;

#endif
