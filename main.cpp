#include <string>
#include "main.hh"

int main (int argc, char** argv)
{
    //Ceci est un commentaire
    printf("Initialisation de l'application MOOC\n");

    if(arg >=1)
    	printf("Un ou plusieurs arguments ont été détectés \n");

    // Création d'une instance de la classe Mooc
    // (définie dans le fichier main.hh)
    Mooc mooc;

    return 0;
}
