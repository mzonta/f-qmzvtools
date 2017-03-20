#ifndef QVTMESSAGESBUFFER_H
#define QVTMESSAGESBUFFER_H

// Processing
#include "qvtProcessingStructures.h"

class qvtMessagesBuffer
{
public:
    qvtMessagesBuffer();
    void addMessage(int msgID, string msgSource, stringBuffer msgText);
    int getIndexLast();
    sMessage getMessage(int msgIndex);
    int size();
    bool isEmpty();

private:
    vMessages buffer;
    int indexFirst;
    int indexLast;
};

#endif // QVTMESSAGESBUFFER_H
