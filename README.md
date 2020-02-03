# my_sokoban

Language -> C  
Temps -> 20 jours  
Module -> Unix system Programming  
Norme -> 0 (major), 1 (minor), 0 (info)  
Note -> 72.2 %  
Groupe -> 1 personnne  

------------------------------------------------------------------------------------------------------------------------------------------

Version Française :  

Développez une copie de ce jeu en mode terminal, en utilisant la bibliothèque ncurses.
Si toutes les cases sont sur des emplacements de stockage, le joueur gagne et le programme doit retourner 0.
Sinon, si aucune des cases ne peut plus être déplacée, il perd et le programme doit retourner 1.
Le jeu doit être réinitialisé en appuyant sur la barre d'espace.
Le redimensionnement du terminal doit être géré. Tant que le terminal est trop petit pour afficher l'ensemble
carte, un message centré, demandant à l'utilisateur d'agrandir le terminal, doit être affiché.
Le jeu doit pouvoir être joué avec les touches fléchées (GAUCHE, DROITE, HAUT et BAS).
Une carte valide ne peut contenir que les caractères ESPACE, «\ n», «#», «X», «O» et «P».
Si une carte non valide est fournie, le programme doit quitter avec une erreur

PS: C'est un project EPITECH #-42

------------------------------------------------------------------------------------------------------------------------------------------

English version :  

Develop a copy of this game in terminal mode, using the ncurses library.  
If all boxes are on storage locations, the player wins and the program must return 0.
Otherwise, if none of the boxes can be moved anymore, he loses and the program must return 1.
The game must be reset by pressing the space bar.
Redimensioning the terminal must be handled. As long as the terminal is too small to display the whole
map, a centered message, asking the user to enlarge the terminal, must be displayed.
The game must be able to be played with the arrow keys (LEFT, RIGHT, UP and DOWN).
A valid map can only contains the characters SPACE, ‘\n’, ‘#’, ‘X’, ‘O’ and ‘P’.
If an invalid map is supplied, the program must exit with an error


PS: It's an EPITECH project # -42

------------------------------------------------------------------------------------------------------------------------------------------

## Autorized fonction  

Every functions from the ncurses library are authorized.
In addition, the following system calls and functions are allowed:  

- malloc, free, exit
- (f)open, (f)close, (f)read, (f)write
- getline, ioctl, usleep, sigaction, signal
- stat, lstat, fstat
