#ifndef QVTIMAGESBUFFER_H
#define QVTIMAGESBUFFER_H

// Processing
#include "qvtProcessingStructures.h"

class qvtImagesBuffer
{
public:
    qvtImagesBuffer();
    void addImage(const Mat &M);
    int getIndexLast();
    const Mat getMat(int bIndex);
    string getTitle(int bIndex);
    int getID(int bIndex);
    int size();
    bool isEmpty();

private:
    vImage buffer;
    int indexFirst;
    int indexLast;
};

#endif // QVTIMAGESBUFFER_H
