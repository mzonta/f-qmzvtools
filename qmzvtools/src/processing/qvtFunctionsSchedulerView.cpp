#include "qvtFunctionsSchedulerView.h"
#include "ui_qvtFunctionsSchedulerView.h"

qvtFunctionsSchedulerView::qvtFunctionsSchedulerView(QWidget *parent, qvtFunctionsInstalled *functionsInstalled, qvtFunctionsScheduler *functionsScheduler) :
    QWidget(parent),
    ui(new Ui::qvtFunctionsSchedulerView)
{
    ui->setupUi(this);
    indexFirst = 0;
    indexLast = -1;
    // set Functions Installed Object
    this->functionsInstalled = functionsInstalled;
    // Set Functions Scheduler Object
    this->functionsScheduler = functionsScheduler;
    // Scheduler: Add First Function - NONE -
    addFunction();
    // Connect Buttons
    connectButtons();
}

qvtFunctionsSchedulerView::~qvtFunctionsSchedulerView()
{
    delete ui;
}

void qvtFunctionsSchedulerView::enableRunButton(bool flagEnable)
{
    ui->runFunctionButton->setEnabled(flagEnable);
}

void qvtFunctionsSchedulerView::addFunction()
{
    ++indexLast;
    // Add New Function in Functions Scheduler
    functionsScheduler->addFunction();
    // Get Pointer of function
    qvtFunction *ptrFunction = functionsScheduler->getFunction(indexLast);
    // Add New Function Selection Object
    functionsViewList.append(new qvtFunctionView(this, ptrFunction, functionsInstalled));
    ui->functionsListLayout->addWidget(functionsViewList[indexLast]);
    functionsViewList[indexLast]->setObjectName(QString("function")+QString::number(indexLast));
}

void qvtFunctionsSchedulerView::runFunctions()
{
    emit signalRunFunctions();
}

void qvtFunctionsSchedulerView::connectButtons()
{
    // Add Button
    connect(ui->addFunctionButton, &QPushButton::clicked, this, &qvtFunctionsSchedulerView::addFunction);
    // Run Button
    connect(ui->runFunctionButton, &QPushButton::clicked, this, &qvtFunctionsSchedulerView::runFunctions);
}
