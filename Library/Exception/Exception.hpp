#ifndef EXCEPTION
#define EXCEPTION

class Exception{
	private : 
		const char * _message;
	public :
		Exception();
		const char * getMessage() const;
		void setMessage(const char *);
};

class ConnectionException : public Exception{
	public :
		ConnectionException();

};

class IndexOutOfBoundException : public Exception{
	public :
		IndexOutOfBoundException();
};

class InteruptedException :public Exception{
	public :
		InteruptedException();
};
#endif
