#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::init(){
    ui->tableWidget->setColumnCount(3);
    ui->tableWidget->setRowCount(10);
    QStringList header;
    header.append("�½���");
    header.append("URL");
    header.append("����");
//    header<<"�½���"<<"URL"<<"����";
    ui->tableWidget->setHorizontalHeaderLabels(header);
    ui->tableWidget->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);

    ui->tableWidget->setShowGrid(true);
    ui->tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    //��ֱ�����������ƶ�
    ui->tableWidget->setVerticalScrollMode(QAbstractItemView::ScrollPerItem);
    //ȥ���Զ�����
    ui->tableWidget->setAutoScroll(false);

    QTableWidgetItem *ex = new QTableWidgetItem();
    ex->setBackground(QBrush(QColor(Qt::lightGray)));
    ex->setText("��һ��");
    ui->tableWidget->setItem(1,0,ex);

    QTableWidgetItem *exurl = new QTableWidgetItem();
    exurl->setText("xxxxxxxxxxxxxxxxxxx");
    exurl->setBackground(QBrush(QColor(Qt::lightGray)));
    ui->tableWidget->setItem(1,1,exurl);

    QTableWidgetItem *exopt = new QTableWidgetItem();
    exopt->setText("sc");
    exopt->setBackground(QBrush(QColor(Qt::lightGray)));
    ui->tableWidget->setItem(1,2,exopt);
}
