#include "mytimer.h"
#include <QApplication>

#include <QStringList>
#include <QTimer>

#include <QtWidgets/QTreeView>
#include <QtWidgets/QListView>

#include <QStringListModel>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Création de la liste contenant les données du modèle
    QStringList list;
    list << "Dheepan" << "De rouille et d'os" << "Un prophète" << "Sur mes lèvres" << "De battre mon coeur s'est arrêté";

    // Création du modèle
    QAbstractItemModel *model = new QStringListModel(list);

    // Création des deux vues
    QListView *view1 = new QListView();
    QTreeView *view2 = new QTreeView();
    view1->setModel(model);
    view2->setModel(model);

    // Création d'un contrôleur sous la forme d’un timer
    MyTimer *timer = new MyTimer(model);

    // affichage des vues
    view1->show();
    view2->show();

    //Loop
    return a.exec();
}
