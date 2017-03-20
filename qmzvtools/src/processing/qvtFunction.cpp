#include "qvtFunction.h"

qvtFunction::qvtFunction()
{
    //setFunctionID(FunctionID(0));
    setFunctionHeader(FUN_NONE_ID, FUN_NONE_LABEL);
    indexFirst = 0;
    indexLast = -1;
}

void qvtFunction::setFunctionHeader(FunctionID funID, string funLabel)
{
    sFunction.functionID = funID;
    sFunction.functionLabel = funLabel;
}

sFun qvtFunction::getFunctionHeader()
{
    return sFunction;
}
