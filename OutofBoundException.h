#include<stdexcept>

class OutofBoundException : public runtime_error
{
public:
    OutofBoundException(string message): runtime_error(message){}
};
