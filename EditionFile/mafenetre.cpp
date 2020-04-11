#include "mafenetre.h"

MaFenetre::MaFenetre() : QWidget()
{
    setFixedSize(W,H);

    //CONSTRUCTION DU BOUTON
    m_bouton = new QPushButton("Mon bouton",this); //reference l'objet ma fenetere
    m_bouton->setText("New Text !");
    m_bouton->setToolTip("Texte d'aide");
    QFont mapolice("Comic Sans MS", 20, QFont::Bold, true);
    m_bouton->setFont(mapolice);
    m_bouton->setCursor(Qt::PointingHandCursor);
    m_bouton->setIcon(QIcon(QCoreApplication::applicationDirPath() +"/home.png"));

    //deplacer un widget  et le redimensionner widget.setGeometry(abscisse, ordonnee, largeur, hauteur);
     m_bouton->move(W/4, H/4); //deplace uniquement methode move(x,y)

}

