// Arduino.cpp
#include "arduino.h"

Arduino::Arduino(QObject *parent) : QObject(parent)
{
    serial = new QSerialPort(this);
    connect(serial, &QSerialPort::readyRead, this, &Arduino::lireDonnees);
}

Arduino::~Arduino()
{
    disconnectArduino();
}

bool Arduino::connectArduino(const QString &portName)
{
    serial->setPortName(portName);
    serial->setBaudRate(QSerialPort::Baud9600);

    if (serial->open(QIODevice::ReadWrite))
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Arduino::disconnectArduino()
{
    if (serial->isOpen())
    {
        serial->close();
    }
}

void Arduino::ouvrirBoite()
{
    if (serial->isOpen())
    {
        serial->write("OuvrirBoite\n");
        serial->waitForBytesWritten(1000); // Attendre l'envoi des données pendant 1 seconde
    }
}

void Arduino::fermerBoite()
{
    if (serial->isOpen())
    {
        serial->write("FermerBoite\n");
        serial->waitForBytesWritten(1000);
    }
}

void Arduino::lireDonnees()
{
    if (serial->canReadLine())
    {
        QByteArray data = serial->readLine();
        QString strData(data);
        strData = strData.trimmed();
        if (strData.startsWith("Valeur de lumière : "))
        {
            strData.remove("Valeur de lumière : ");
            bool ok;
            int valeurLumiere = strData.toInt(&ok);
            if (ok)
            {
                emit lumiereChanged(valeurLumiere);
            }
        }
    }
}
void Arduino::setSerialPort(QSerialPort *serial)
{
    this->serial = serial;
    connect(serial, &QSerialPort::readyRead, this, &Arduino::lireDonnees);
}
