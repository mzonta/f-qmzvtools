#include "qvtMessagesBuffer.h"

qvtMessagesBuffer::qvtMessagesBuffer()
{
    indexFirst = 0;
    indexLast = -1;
}

void qvtMessagesBuffer::addMessage(int msgID, string msgSource, stringBuffer msgText)
{
    ++indexLast;
    sMessage msgItem;
    if (msgID == 0) {
        msgItem.msgID = indexLast;
    }
    else {
        msgItem.msgID = msgID;
    }
    msgItem.msgSource = msgSource;
    msgItem.msgText = msgText;
    buffer.push_back(msgItem);
}

int qvtMessagesBuffer::getIndexLast()
{
    return indexLast;
}

sMessage qvtMessagesBuffer::getMessage(int msgIndex)
{
    return buffer[msgIndex];
}

int qvtMessagesBuffer::size()
{
    int bufferSize = 0;
    if (indexLast > indexFirst) {
        bufferSize = indexLast - indexFirst + 1;
    }
    return bufferSize;
}

bool qvtMessagesBuffer::isEmpty()
{
    return (size() == 0);
}
