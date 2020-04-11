#ifndef MAFENETRE_H //cette directive permet d'eviter les inclusion multiple
#define MAFENETRE_H

#include <QApplication> //utilser plus tard dans main.cpp
#include <QWidget>
#include <QPushButton>
#define W 300
#define H 150

class MaFenetre : public QWidget //On hérite de QWidget
{
private:
    QPushButton *m_bouton;//pointeur instancie ulterieurement par new
public:
    MaFenetre();

signals:

};

#endif // MAFENETRE_H
