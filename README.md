# TP C++ : Classes abstraites et polymorphisme

## Description
Ce TP a pour objectif de comprendre et de pratiquer les concepts de la programmation orientée objet en C++, notamment les classes abstraites, les méthodes virtuelles pures, l'héritage et le polymorphisme.

## Exercice 1 : Formes géométriques
**Objectif :** Implémenter une hiérarchie de formes géométriques avec une méthode virtuelle pure.

**Travail réalisé :**
- Création d'une classe abstraite `Forme`.
- Définition de la méthode virtuelle pure `aire()`.
- Création des classes dérivées `Cercle` et `Rectangle`.
- Utilisation d'un tableau de pointeurs vers `Forme`.
- Calcul et affichage des aires des formes.

**Notions utilisées :**
- Classe abstraite.
- Héritage.
- Méthode virtuelle pure.
- Polymorphisme.
- Allocation dynamique avec `new` et `delete`.

## Exercice 2 : Interface de paiement
**Objectif :** Simuler différents moyens de paiement en utilisant l'abstraction.

**Travail réalisé :**
- Création d'une classe abstraite `Paiement`.
- Définition de la méthode virtuelle pure `effectuerPaiement(double montant)`.
- Création des classes `PaiementCarte` et `PaiementEspece`.
- Utilisation d'un tableau de pointeurs vers `Paiement`.
- Simulation de plusieurs paiements.

**Notions utilisées :**
- Classe abstraite.
- Héritage.
- Redéfinition des méthodes avec `override`.
- Tableau de pointeurs.
- Polymorphisme.

## Exercice 3 : Gestion d'animaux
**Objectif :** Généraliser les comportements des animaux à l'aide des classes abstraites.

**Travail réalisé :**
- Création d'une classe abstraite `Animal`.
- Définition de la méthode virtuelle pure `crier()`.
- Création de la méthode non abstraite `info()`.
- Création des classes `Chien`, `Chat` et `Vache`.
- Utilisation d'un vecteur de pointeurs vers `Animal`.
- Affichage des informations et des cris des animaux.

**Notions utilisées :**
- Classe abstraite.
- Méthode virtuelle pure.
- Méthode concrète.
- Héritage.
- Vecteur de pointeurs.
- Polymorphisme.

## Exercice 4 : Système de fichiers virtuel
**Objectif :** Simuler un système de gestion de fichiers et de dossiers.

**Travail réalisé :**
- Création d'une classe abstraite `NoeudFichier`.
- Définition des méthodes `nom()` et `taille()`.
- Création des classes `Fichier` et `Dossier`.
- Utilisation d'un vecteur de pointeurs vers `NoeudFichier`.
- Possibilité d'ajouter des fichiers et des sous-dossiers.
- Calcul de la taille totale d'un dossier.
- Affichage de la structure et des tailles.

**Notions utilisées :**
- Classe abstraite.
- Héritage.
- Polymorphisme.
- Vecteur de pointeurs.
- Composition et gestion dynamique de la mémoire.
- Récursivité.

## Conclusion
À travers ces quatre exercices, nous avons appris à utiliser les classes abstraites et le polymorphisme en C++.

Nous avons également pratiqué l'héritage, les méthodes virtuelles pures, les tableaux et vecteurs de pointeurs ainsi que l'allocation et la libération dynamique de la mémoire.

Ces exercices permettent de mieux comprendre les principes fondamentaux de la programmation orientée objet en C++.
<img width="960" height="540" alt="image" src="https://github.com/user-attachments/assets/e2a2fc3f-7cf9-49f0-a42c-8a0450bdefe0" />
<img width="960" height="540" alt="image" src="https://github.com/user-attachments/assets/05a15bef-6467-4738-97ce-bb57df205f2d" />
<img width="960" height="540" alt="image" src="https://github.com/user-attachments/assets/616e1227-5a78-4a0c-ac96-3027ffbe35fb" />
<img width="960" height="540" alt="image" src="https://github.com/user-attachments/assets/d0b75a9a-d5b6-4e4a-9af5-58a8699294b9" />
