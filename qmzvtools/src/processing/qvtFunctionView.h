#ifndef QVTFUNCTIONVIEW_H
#define QVTFUNCTIONVIEW_H

// Qt
#include <QWidget>
#include <QSettings>
#include <QStringList>
#include <QDebug>
// General
#include "../general/qvtConfig.h"
// Processing
#include "qvtFunction.h"
#include "qvtFunctionsInstalled.h"

namespace Ui {
class qvtFunctionView;
}

class qvtFunctionView : public QWidget
{
    Q_OBJECT

public:
    explicit qvtFunctionView(QWidget *parent = 0, qvtFunction *ptrFunction = 0, qvtFunctionsInstalled *functionsInstalled = 0);
    ~qvtFunctionView();

private:
    Ui::qvtFunctionView *ui;

    qvtFunction *ptrFunction;
    qvtFunctionsInstalled *functionsInstalled;
    void createFunctionsList();

private slots:
    void onFunctionChanged(int);
};

#endif // QVTFUNCTIONVIEW_H
