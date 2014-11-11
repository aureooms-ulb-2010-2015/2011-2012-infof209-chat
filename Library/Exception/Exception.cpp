#include "Exception.hpp"

Exception::Exception(){
	this->setMessage("Exception : unknown Exception\n");
}

const char * Exception::getMessage() const{
	return this->_message;
}

void Exception::setMessage(const char * message){
	this->_message = message;
}

ConnectionException::ConnectionException(){
	this->setMessage("Exception : connection problems has occured !");
}

IndexOutOfBoundException::IndexOutOfBoundException(){
	this->setMessage("Exception : index out of bound !");
}

InteruptedException::InteruptedException(){
	this->setMessage("Exception : Interupted !");
}
