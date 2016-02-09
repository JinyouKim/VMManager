#include <stdio.h>
#include "server_for_web.h"
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
int main()
{
	int pid;
	
	// Web Server로 부터 명령 대기
	if ((pid = fork()) > 0)
	{
				
	}


	
}

int start_server_for_web()
{
	client_info *client;

	char buffer[128];
	struct sockaddr_in server_addr, client_addr;
	int server_fd, client_fd;
	int size;
	int len;

	if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == -1)
	{
		printf("Server_For_Web : can't open stream socket\n");
		return -1;
	}

	memset(&server_addr, 0x00, sizeof(server_addr));

	server_addr.sin_family = AF_INET;
	server_addr.sin_addr.s_addr = htonl(INADDR_ANY);
	server_addr.sin_port = htons(5799);

	if (bind(server_fd, (struct sockaddr *)&server_addr, sizeof(server_addr)) < 0)
	{
		printf("Server_For_Web : can't bind local address.\n");
		return -1;
	}

	if (listen(server_fd, 5) < 0)
	{
		printf("Server_For_Web : can't listening connect.\n");
		return -1;
	}
	
	memset(buffer, 0x00, sizeof(buffer));
	printf("Server_For_Web : Waiting connection request.\n");
	len = sizeof(client_addr);

	while(1)
	{
		client = (client_info *)malloc(sizeof(client_info));

