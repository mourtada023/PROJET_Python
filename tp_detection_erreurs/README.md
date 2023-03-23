# Rendu tp 1 CDC :

**Objectifs du TP**

  - [x]  Simuler un canal binaire symétrique sans mémoire
  - [x]  Comprendre l’impact du bruit sur certains fichiers
  - [x]  Appliquer le codage par répétition trois fois
  - [x]  Comprendre les codages linéaires
  - [x]  Savoir définir des matrices génératrices pour des codages linéaires
  - [x]  Expérimenter sur ces matrices

## Partie 1 : Simulation d’un canal binaire symétrique sans mémoire (CBSSM).


**1.3**

Au seuil de 0.02 de probabilité, la sortie commence à être difficilement déchiffrable.

**1.4**

 Avec un seuil de **0,0001**, l'archive TP-Erreurs-0.0001.zip est décompressé sans souci majeur, à partir de **0,001** on arrive a deziper le fichier zip TP-Erreurs-0.001.zip  mais pas avec tous les documents de départ comme on peut le remarquer dans le fichier *repertoire0.001* dans le rendu.
 Avec un seuil de **0,01** , la décompression échoue totalement.


- Conclusion :
Cela veut donc dire qu'avec un seuil de 0.01, on a 1 chance sur 100 que le fichier soit modifier, et 1 chance sur 99 qu'il soit correct, ce qui pourrai expliquer l’échec de la décompression du fichier.



**1.5**

Au seuil de **0.00001** l'image lille0.00001.gif est encore semblable à celle d'origine , à partir de **0.0001** l'image commence à être carrément modifiée mais encore possible de l'ouvrir , et avec un seuil de **0.001** l'image ne peut plus être ouverte.



![ 0.00001](lille0.00001.gif)
