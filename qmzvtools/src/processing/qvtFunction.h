#ifndef QVTFUNCTION_H
#define QVTFUNCTION_H

// Qt
#include <QDebug>
// Processing
#include "qvtProcessingStructures.h"

class qvtFunction
{
public:
    qvtFunction();

    void setFunctionHeader(FunctionID funID, string funLabel);
    sFun getFunctionHeader();

private:
    sFun sFunction;
    std::vector<sParam> parameterList;
    int indexFirst;
    int indexLast;
};

#endif // QVTFUNCTION_H
