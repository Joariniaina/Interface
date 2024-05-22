# Les etapes de l'executION du clé d'activation
 
## POUR LE BIBLIOTHÈQUE DYNAMIQUE
1 On execute ce ligne de commande "g++ -fPIC -c football/football.cpp combat/combat.cpp strategie/strategie.cpp" pour avoir le output
2 Puis on execute "g++ -o libexecute.so -shared *.o" pour avoir le libexecute.so 
3 Puis on edite un fichier libl3.conf dans /etc/ld.so.conf.d le chemin vers le "libexecute.so"
4 Ensuite on a fait la mise à jour , c'est à dire on execute le commande "sudo ldconfig"
5 Puis on execute "g++ main.cpp -L/media/misa2026/1E66933E77C46DBC/pro -lexecute -o dynamic.exe" pour avoir le fichier dynamiquement executable.
6 Et enfin, on execute "./dynamic.exe"

## POUR LE BIBLIOTHÈQUE STATIQUE
1 on execute "ar -rv libexecute.a *.o"  pour avoir le "libexecute.a".
2 Puis on execute "g++ main.cpp -L/media/misa2026/1E66933E77C46DBC/pro -lexecute -o static.exe" pour avoir le le fichier statiquement executable
