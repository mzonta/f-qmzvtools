#ifndef QVTFUNCTIONSSCHEDULER_H
#define QVTFUNCTIONSSCHEDULER_H

// Processing
#include "qvtFunction.h"
#include "qvtFunctionsInstalled.h"

class qvtFunctionsScheduler
{
public:
    qvtFunctionsScheduler( qvtMessagesBuffer *messagesBuffer);

    void addFunction();
    void addFunction(FunctionID, string);
    void setFunctionHeader(int fIndex, FunctionID funID, string funLabel);
    int getIndexFirst();
    int getIndexLast();
    qvtFunction* getFunction(int fIndex);
    int size();
    bool isEmpty();

private:
    std::vector<qvtFunction*> functionsList;
    int indexFirst;
    int indexLast;
    qvtMessagesBuffer *messagesBuffer;
};

#endif // QVTFUNCTIONSSCHEDULER_H
