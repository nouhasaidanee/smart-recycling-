// Arduino.h
#ifndef ARDUINO_H
#define ARDUINO_H

#include <QObject>
#include <QSerialPort>

class Arduino : public QObject
{
    Q_OBJECT

public:
    explicit Arduino(QObject *parent = nullptr);
    ~Arduino();

    bool connectArduino(const QString &portName);
    void disconnectArduino();
    void ouvrirBoite();
    void fermerBoite();
     void setSerialPort(QSerialPort *serial);

signals:
    void lumiereChanged(int valeurLumiere);

private slots:
    void lireDonnees();

private:
    QSerialPort *serial;

};

#endif // ARDUINO_H

