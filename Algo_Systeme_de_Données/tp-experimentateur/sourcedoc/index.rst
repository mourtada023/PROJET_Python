---------------
Experimentateur
---------------


.. toctree::
   :maxdepth: 1

   experience.rst
   marker.rst
   
~~~~~~~~~~
Etat du TP
~~~~~~~~~~ 

Presque finit

~~~~~~~~~~~~~~~~~~~~~~
Réponses aux questions
~~~~~~~~~~~~~~~~~~~~~~

Question 1.2.2
--------------
OP fonction compare du module test (test.compare)

Question 1.2.3
--------------
   * La 1ere stratégie est basée sur **la recherche linéaire**.
   * Normalement le pire des cas du recherche lineaire est quand on **ne trouve pas l'element qu'on cherche**.
   * On peut dire que si les deux liste des marqueurs et marqueurs positifs sont **relativement grandes**, on va tomber sur le pire des cas du recherche linéaire en cherchant tous les marqueurs négatifs **( qui n'existe pas dans la list des marqueurs positifs )**
   * Aussi on peut dire qu'on vas réaliser plus comparaison quand le nombre d'élément de la liste des marqueurs positifs est égale au nombre de tous les marqueurs (maximum possible)
   * Finalement, on peut faire une petite optimisation de renvoyer 0 au début de la fonction si m = p dans ce cas on vas réaliser le plus comparaison de **m** quand **p = m-1**


Question 1.2.4
--------------
**C1(m,p) = n * p**

Question 1.3.2
--------------
   * La 2éme stratégie est basée sur **le recherche dicotomique** + **le tri par fusion**.
   * Normalement le pire des cas du recherche dicotomique est **quand on ne trouve pas l'élément qu'on cherche**.
   * Aussi on peut dire que si les deux liste des marqueurs et marqueurs positifs sont **relativement grandes**, on va tomber sur le pire des cas du recherche dicotomique en cherchant tous les marqueurs negatifs **( qui n'existe pas dans la list des marqueurs positifs )**
   * Pour le tri par fusion le pire des cas c'est quand on va faire le **maximum nombre de comparaison**.
      * Pour ce faire,par exemple pour un tableau trié **[1,2,3,4,5,6,7]**, les sous-tableaux gauche et droit impliqués dans l'opération de fusion doivent stocker des éléments alternatifs du tableau trié. c'est-à-dire que le sous-tableau gauche doit être **{1,3,5,7}** et le sous-tableau droit doit être **{2,4,6,8}**.
      * Par conséquant **chaque élément sera comparer au moins une fois** et ainsi de suit pour les sous tableaux des sous tableaux 
   * Aussi on peut dire qu'on vas réaliser plus comparaison quand le nombre d'élément de la liste des marqueurs positifs est égale au nombre de tous les marqueurs (maximum possible)
   * Finalement, on peut faire une petite optimisation de renvoyer 0 au début de la fonction si m = p dans ce cas on vas réaliser le plus comparaison de **m** quand **p = m-1**
   * **C1(m,p) = ( p * log2 ( p ) ) + ( m * log2 ( p ) )**

Question 1.4.2
--------------
   * La 3éme stratégie est basee sur **le tri par fusion** + **une comparaison linéaire simple**.
   * Pour le tri par fusion le pire des cas c'est quand on va faire le **maximum nombre de comparaison**.
      * Pour ce faire,par exemple pour un tableau trié **[1,2,3,4,5,6,7]**, les sous-tableaux gauche et droit impliqués dans l'opération de fusion doivent stocker des éléments alternatifs du tableau trié. c'est-à-dire que le sous-tableau gauche doit être **{1,3,5,7}** et le sous-tableau droit doit être **{2,4,6,8}**.
      * Par conséquant **chaque élément sera comparer au moins une fois** et ainsi de suit pour les sous tableaux des sous tableaux 
   * Aussi on peut dire qu'on vas réaliser plus comparaison quand le nombre d'élément de la liste des marqueurs positifs est égale au nombre de tous les marqueurs (maximum possible)
   * Finalement, on peut faire une petite optimisation de renvoyer 0 au début de la fonction si m = p dans ce cas on vas réaliser le plus comparaison de **m** quand **p = m-1**
   * **C1(m,p) = ( m * log2 ( m ) ) + ( p * log2 ( p ) ) + n**

Question 1.5.6
--------------
   - Pour les graphique, j'ai modifié mon code main pour créer un fichier nommé **tp-m.data** dont **m** est **le nombre des marqueurs** passe comme argument;
   - Pour une liste de **10 marqueurs**, on peut constater que la différence entre les 3 strétegies **n'est pas trop grande**. Aussi on remarque que la troisiéme stratégie est **la plus compléxe dans ce cas**
      * Pour une liste de **20 marqueurs**, en augmentant le nombre de marqueurs, on peut constater que la différence entre les 3 strétegies commence a grandir
      * Meme chose pour les **30 marqueurs** et les **40 marqueurs**
   - .. hlist::
         :columns: 2

         * .. image:: /images/tp1-10.png
               :alt: some image
               :class: with-shadow
               :align: center
               :scale: 50
         * .. image:: /images/tp1-20.png
               :alt: some image
               :class: with-shadow
               :scale: 50
         * .. image:: /images/tp1-30.png
               :alt: some image
               :class: with-shadow
               :scale: 50
         * .. image:: /images/tp1-40.png
               :alt: some image
               :class: with-shadow
               :scale: 50
   - Pour une liste de **50 marqueurs**, on peut constater que la différence est trop grande !!!! 
      * La Deuxiéme stratégie est la plus moins complexe
      * La Premiere est la plus complexe
      * La différence entre la troisiéme et la deuxiéme diminue avec l'augmentation de nombre de marqueurs
      * Les graphes justifie les résultats que j'ai trouvé pour la compléxité des trois stratégies
   - .. hlist::
         :columns: 2

         * .. image:: /images/tp1-50.png
               :alt: some image
               :class: with-shadow
               :align: center
               :scale: 50
         * .. image:: /images/tp1-60.png
               :alt: some image
               :class: with-shadow
               :scale: 50
         * .. image:: /images/tp1-70.png
               :alt: some image
               :class: with-shadow
               :scale: 50
         * .. image:: /images/tp1-80.png
               :alt: some image
               :class: with-shadow
               :scale: 50
         * .. image:: /images/tp1-90.png
               :alt: some image
               :class: with-shadow
               :scale: 50
   - Pour une liste de **100 marqueurs**... C'est trop claire ;)
   - .. image:: /images/tp1-100.png
               :alt: some image
               :class: with-shadow
               :scale: 100



      
     


