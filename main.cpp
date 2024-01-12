#include<QApplication>
#include<QLabel>

int main(int args, char *argv[])


argv())
{
    QApplication app(argc, argv);
    QLabel *label= new QLabel("Hello world.");

    label->show();
    return app.exec();
}
