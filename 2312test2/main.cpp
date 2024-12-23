#include <QCoreApplication>
#include <QString>
#include <QDebug>


QString lineOutput(QString str) {
    int start = 0;
    int end = 0;

    for (int i = 0; i < str.length(); ++i) {
        if (str[i] == '=') {
            start = i;
            break;
        }
    }
    if (start == 0) {
        return "";
    }
    start++;

    for (int i = start; i < str.length(); ++i) {
        if (str[i] == '&') {
            end = i;
            break;
        }
    }
    if(end == 0) {
        return str.mid(start);
    }
    return str.mid(start, end - start);
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString str = "aaaaaaa=bbbbbbb&oooooo";

    QString result = lineOutput(str);
    qDebug() << result;


    return a.exec();
}
