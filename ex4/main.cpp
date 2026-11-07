
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Classe abstraite NoeudFichier
class NoeudFichier {
protected:
    string nomFichier;

public:
    NoeudFichier(string n) {
        nomFichier = n;
    }

    string nom() const {
        return nomFichier;
    }

    // Methode virtuelle pure
    virtual int taille() const = 0;

    virtual ~NoeudFichier() {}
};

// Classe Fichier
class Fichier : public NoeudFichier {
private:
    int tailleFichier;

public:
    Fichier(string n, int t) : NoeudFichier(n) {
        tailleFichier = t;
    }

    int taille() const override {
        return tailleFichier;
    }
};

// Classe Dossier
class Dossier : public NoeudFichier {
private:
    vector<NoeudFichier*> enfants;

public:
    Dossier(string n) : NoeudFichier(n) {}

    // Ajouter un fichier ou un sous-dossier
    void ajouter(NoeudFichier* noeud) {
        enfants.push_back(noeud);
    }

    // Calculer la taille totale du dossier
    int taille() const override {
        int total = 0;

        for (int i = 0; i < enfants.size(); i++) {
            total += enfants[i]->taille();
        }

        return total;
    }

    // Afficher le contenu du dossier
    void afficher() const {
        cout << "\nDossier : " << nom() << endl;

        for (int i = 0; i < enfants.size(); i++) {
            cout << enfants[i]->nom()
                 << " - Taille : "
                 << enfants[i]->taille() << " Ko" << endl;
        }
    }

    // Destructeur
    ~Dossier() {
        for (int i = 0; i < enfants.size(); i++) {
            delete enfants[i];
        }
    }
};

// Programme principal
int main() {

    string nomDossier;
    string nomFichier;
    int tailleFichier;

    // Création du dossier principal
    cout << "Donner le nom du dossier principal : ";
    cin >> nomDossier;

    Dossier* principal = new Dossier(nomDossier);

    // Ajouter des fichiers
    int n;
    cout << "Combien de fichiers voulez-vous ajouter ? ";
    cin >> n;

    for (int i = 0; i < n; i++) {

        cout << "\nNom du fichier " << i + 1 << " : ";
        cin >> nomFichier;

        cout << "Taille du fichier (Ko) : ";
        cin >> tailleFichier;

        principal->ajouter(
            new Fichier(nomFichier, tailleFichier)
        );
    }

    // Création d'un sous-dossier
    string nomSousDossier;

    cout << "\nDonner le nom du sous-dossier : ";
    cin >> nomSousDossier;

    Dossier* sousDossier = new Dossier(nomSousDossier);

    int m;
    cout << "Combien de fichiers dans le sous-dossier ? ";
    cin >> m;

    for (int i = 0; i < m; i++) {

        cout << "\nNom du fichier " << i + 1 << " : ";
        cin >> nomFichier;

        cout << "Taille du fichier (Ko) : ";
        cin >> tailleFichier;

        sousDossier->ajouter(
            new Fichier(nomFichier, tailleFichier)
        );
    }

    // Ajouter le sous-dossier au dossier principal
    principal->ajouter(sousDossier);

    // Affichage des résultats
    cout << "\n===== Resultats =====" << endl;

    principal->afficher();

    sousDossier->afficher();

    cout << "\nTaille totale du dossier "
         << principal->nom() << " : "
         << principal->taille() << " Ko" << endl;

    // Libération de la mémoire
    delete principal;

    return 0;
}
