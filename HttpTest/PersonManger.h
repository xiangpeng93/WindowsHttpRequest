#pragma once
#include "FacePlusPlusInterface.h"
class CPersonManger:public CFacePlusPlusInterface
{
public:
	CPersonManger(std::string personName, std::string groupName)
	{
		m_personName = personName;
		m_groupName = groupName;
	}
	~CPersonManger(){
	};
public:
	virtual int doAction_1(){ return _createPerson(); };
	virtual int doAction_2(){ return _deletePerson(); };
	int _createPerson();
	int _deletePerson();
private:
	int _sendRequest(const char * request);
	int _recvRequest(const char * buffer);
public:
	std::string m_personName;
	std::string m_groupName;
};

