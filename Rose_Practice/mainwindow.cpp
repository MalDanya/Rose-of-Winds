#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QRect>
#include <QPainter>

using namespace Qt;




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap  Scale_Dark_Image(":/resources/Resources/Шкала(темная).png");
    QPixmap Arc_Dark_Image(":/resources/Resources/верх_дуга (темная).png");

    this->setFixedSize(QSize(Arc_Dark_Image.width()+100,Scale_Dark_Image.height()+100));

    ui->Scale_Dark->resize(Scale_Dark_Image.size());
    ui->Scale_Dark->setPixmap( Scale_Dark_Image);
    ui->Scale_Dark->setAlignment(AlignCenter);

    QPixmap Course_Dark_Image(":/resources/Resources/Курс (темная).png");
    ui->Course_Dark->resize(Course_Dark_Image.size());
    ui->Course_Dark->setPixmap(Course_Dark_Image);

    QPixmap  InsideCircle_Dark_Image(":/resources/Resources/круг_внутри (малый)(темная).png");
    ui->InsideCircle_Dark->resize(InsideCircle_Dark_Image.size());
    ui->InsideCircle_Dark->setPixmap(InsideCircle_Dark_Image);
    //ui->InsideCircle_Dark->geometry(); //здесь возникает вопрос, как приложить круг к центру "курса", а не так, чтобы он сбоку был


    ui->Arc_Dark->resize(Arc_Dark_Image.size());
    ui->Arc_Dark->setAlignment(AlignLeft);
    ui->Arc_Dark->setPixmap(Arc_Dark_Image);



}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
        int counter=30;

    for (int i=0; i<=counter; i++)

    {

        QApplication::processEvents();
        QPixmap shipPixels(":/resources/Resources/Шкала(темная).png");
        QPixmap rotatePixmap(shipPixels.size());
        rotatePixmap.fill(Qt::transparent);

        QPainter p(&rotatePixmap);
        p.setRenderHint(QPainter::Antialiasing); // сглаживание
        p.setRenderHint(QPainter::SmoothPixmapTransform);
        p.setRenderHint(QPainter::HighQualityAntialiasing);
        p.translate(rotatePixmap.size().width() / 2, rotatePixmap.size().height() / 2);
        p.rotate(i); // градус
        p.translate(-rotatePixmap.size().width() / 2, -rotatePixmap.size().height() / 2);

        p.drawPixmap(0, 0, shipPixels);
        p.end();
        shipPixels = rotatePixmap;

        ui->Scale_Dark->setPixmap(shipPixels);

    }

}

