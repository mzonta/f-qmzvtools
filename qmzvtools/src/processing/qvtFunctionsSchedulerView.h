#ifndef QVTFUNCTIONSSCHEDULERVIEW_H
#define QVTFUNCTIONSSCHEDULERVIEW_H

// Qt
#include <QWidget>
#include <QComboBox>
#include <QTimer>
// Processing
#include "qvtFunctionsScheduler.h"
#include "qvtFunctionView.h"

namespace Ui {
class qvtFunctionsSchedulerView;
}

class qvtFunctionsSchedulerView : public QWidget
{
    Q_OBJECT

public:
    explicit qvtFunctionsSchedulerView(QWidget *parent = 0, qvtFunctionsInstalled *functionsInstalled = 0, qvtFunctionsScheduler *functionsScheduler = 0);
    ~qvtFunctionsSchedulerView();

    void enableRunButton(bool flagEnable);

private:
    Ui::qvtFunctionsSchedulerView *ui;

    QVector<qvtFunctionView*> functionsViewList;
    int indexFirst;
    int indexLast;

    qvtFunctionsInstalled *functionsInstalled;
    qvtFunctionsScheduler *functionsScheduler;

    // Connect Buttons
    void connectButtons();  

private slots:
    void addFunction();
    void runFunctions();

signals:
    void signalRunFunctions();
};

#endif // QVTFUNCTIONSSCHEDULERVIEW_H
