#include "qvtFunctionView.h"
#include "ui_qvtFunctionView.h"

qvtFunctionView::qvtFunctionView(QWidget *parent, qvtFunction *ptrFunction, qvtFunctionsInstalled *functionsInstalled) :
    QWidget(parent),
    ui(new Ui::qvtFunctionView)
{
    ui->setupUi(this);
    // Connect with Function in Functions Scheduler
    this->ptrFunction = ptrFunction;
    this->functionsInstalled = functionsInstalled;
    createFunctionsList();
    // Select Function
    connect(ui->functionSelection, static_cast<void(QComboBox::*)(int)>(&QComboBox::currentIndexChanged), this, &qvtFunctionView::onFunctionChanged);
}

qvtFunctionView::~qvtFunctionView()
{
    delete ui;
}

void qvtFunctionView::createFunctionsList()
{
    // List Loop
    string functionsItem = "";
    int nItems = functionsInstalled->size();
    for (int i = 0; i < nItems; ++i) {
        // Fill Combobox Functions List
        functionsItem = functionsInstalled->getFunctionLabel(i);
        ui->functionSelection->addItem(QString::fromStdString(functionsItem));
    }
}

void qvtFunctionView::onFunctionChanged(int fIndex)
{
    // Set Function ID
    //ptrFunction->setFunctionID(FunctionID(fIndex));
    qDebug() << "qvtFunctionView::onFunctionChanged: "
            << FunctionID(fIndex)
            << QString::fromStdString(functionsInstalled->getFunctionLabel(fIndex));
    ptrFunction->setFunctionHeader(FunctionID(fIndex), functionsInstalled->getFunctionLabel(fIndex));
}
