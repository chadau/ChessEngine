﻿# CMakeList.txt : fichier projet CMake de niveau supérieur, effectuez une configuration globale
# et incluez les sous-projets ici.
#
cmake_minimum_required (VERSION 3.8)

project ("ChessEngine")

# Incluez les sous-projets.
add_subdirectory ("Core")
add_subdirectory ("ChessEngine")

