#pragma once

#include <winsock2.h>
#include <ws2tcpip.h>
#pragma comment(lib, "ws2_32.lib")



// bool checkMailContent(const json& content);
					// Check mail content

bool sendData(SOCKET clientSocket, const nlohmann::json& data);
					// Sent data to socket

bool sendClientData(const nlohmann::json& data);
					// Sent data to server

bool getData(SOCKET clientSocket, nlohmann::json& reply);
					// Get data from socket

bool getClientData(nlohmann::json& data);
					// Get data from server