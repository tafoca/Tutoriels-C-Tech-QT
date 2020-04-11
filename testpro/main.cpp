#include <QApplication>
#include <QPushButton>
#define W 300
#define H 150

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // Création d'un widget qui servira de fenêtre
    QWidget fenetre;
    fenetre.setFixedSize(W, H);

    // Création du bouton, ayant pour parent la "fenêtre"
    QPushButton btn("hello world!",&fenetre);

    // Personnalisation du bouton
    btn.setText("New Text !");
    btn.setToolTip("Texte d'aide");
    QFont mapolice("Comic Sans MS", 20, QFont::Bold, true);
    btn.setFont(mapolice);
    btn.setCursor(Qt::PointingHandCursor);
    btn.setIcon(QIcon(QCoreApplication::applicationDirPath() +"/home.png"));

    //deplacer un widget  et le redimensionner widget.setGeometry(abscisse, ordonnee, largeur, hauteur);
     btn.move(W/4, H/4); //deplace uniquement methode move(x,y)
    // Affichage de la fenêtre
    fenetre.show();

    return a.exec();
}
