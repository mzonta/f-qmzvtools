#include "qvtFunctionsScheduler.h"

qvtFunctionsScheduler::qvtFunctionsScheduler(qvtMessagesBuffer *messagesBuffer)
{
    this->messagesBuffer = messagesBuffer;
    indexFirst = 0;
    indexLast = -1;
}

void qvtFunctionsScheduler::addFunction()
{
    qDebug() << "qvtFunctionsScheduler ";
    ++indexLast;
    qvtFunction *proFun;
    proFun = new qvtFunction;
    functionsList.push_back(proFun);
}

void qvtFunctionsScheduler::addFunction(FunctionID funID, string funLabel)
{
    qDebug() << "qvtFunctionsScheduler " << funID;
    ++indexLast;
    qvtFunction *proFun;
    proFun = new qvtFunction;
    proFun->setFunctionHeader(funID, funLabel);
    functionsList.push_back(proFun);
}

void qvtFunctionsScheduler::setFunctionHeader(int fIndex, FunctionID funID, string funLabel)
{
    if (isEmpty()) {
        // Error Message: Scheduler Empty
        return;
    }
    if ((fIndex < 0) || (fIndex > size())) {
        // Error Message: Index not valid
        return;
    }
    qvtFunction *proFun;
    proFun = functionsList[fIndex];
    proFun->setFunctionHeader(funID, funLabel);
}

int qvtFunctionsScheduler::getIndexFirst()
{
    return indexFirst;
}

int qvtFunctionsScheduler::getIndexLast()
{
    return indexLast;
}

qvtFunction* qvtFunctionsScheduler::getFunction(int fIndex)
{
    return functionsList.at(fIndex);
}

int qvtFunctionsScheduler::size()
{
    int functionsListSize = 0;
    if (indexLast > indexFirst) {
        functionsListSize = indexLast - indexFirst + 1;
    }
    return functionsListSize;
}

bool qvtFunctionsScheduler::isEmpty()
{
    return (size() == 0);
}

