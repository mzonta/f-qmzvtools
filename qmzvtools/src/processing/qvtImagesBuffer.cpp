#include "qvtImagesBuffer.h"
#include <QDebug>

qvtImagesBuffer::qvtImagesBuffer()
{
    indexFirst = 0;
    indexLast = -1;
}

void qvtImagesBuffer::addImage(const Mat &M)
{
    ++indexLast;
    sImage bItem;
    bItem.iMat = M;
    bItem.iTitle = "TestX";
    bItem.iID = indexLast;
    buffer.push_back(bItem);
}

int qvtImagesBuffer::getIndexLast()
{
    return indexLast;
}

const Mat qvtImagesBuffer::getMat(int bIndex)
{
    sImage bItem;
    bItem = buffer.at(bIndex);
    return bItem.iMat;    
}

string qvtImagesBuffer::getTitle(int bIndex)
{
    sImage bItem;
    bItem = buffer.at(bIndex);
    return bItem.iTitle;
}

int qvtImagesBuffer::getID(int bIndex)
{
    sImage bItem;
    bItem = buffer.at(bIndex);
    return bItem.iID;
}

int qvtImagesBuffer::size()
{
    int bufferSize = 0;
    if (indexLast > indexFirst) {
        bufferSize = indexLast - indexFirst + 1;
    }
    return bufferSize;
}

bool qvtImagesBuffer::isEmpty()
{
    return (size() == 0);
}
