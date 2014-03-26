#include "errors.h"

using namespace SMC;

SMCError::SMCError()
{
	//
}

SMCError::~SMCError() throw()
{
	//
}

const char* SMCError::what() const throw()
{
	return "Unknown SMC exception.\n";
}

XmlKeyDoesNotExist::XmlKeyDoesNotExist(std::string key)
{
	m_key = key;
}

XmlKeyDoesNotExist::~XmlKeyDoesNotExist() throw()
{
	//
}

std::string XmlKeyDoesNotExist::Get_Key()
{
	return m_key;
}

const char* XmlKeyDoesNotExist::what() const throw()
{
	std::string err = "XML key '" + m_key + "' does not exist!\n";
	return err.c_str();
}

NotImplementedError::NotImplementedError(std::string message)
{
	m_message = message;
}

NotImplementedError::~NotImplementedError() throw()
{
	//
}

const char* NotImplementedError::what() const throw()
{
	return m_message.c_str();
}
