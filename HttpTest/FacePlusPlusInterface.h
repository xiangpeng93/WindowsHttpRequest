#pragma once
#include <winsock2.h>
#include <Ws2tcpip.h>
#include <stdio.h>
#include <string>
#include <fstream>
// Link with ws2_32.lib
#pragma comment(lib, "Ws2_32.lib")
#define DEFAULT_BUFLEN 512

#define HostPath  "apicn.faceplusplus.com"

class CFacePlusPlusInterface
{
public:
public:
	virtual int _sendRequest(const char * request) = 0;
	virtual int _recvRequest(const char * buffer) = 0;
public:
	std::string m_apiKey;
	std::string m_secretyKey;
	SOCKET m_socket; 
	struct sockaddr_in clientService;
};

