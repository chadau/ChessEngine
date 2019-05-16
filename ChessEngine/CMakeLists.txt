# CMakeList.txt : projet CMake pour ChessEngine, incluez la source et définissez
# la logique spécifique au projet ici.
#
cmake_minimum_required (VERSION 3.8)

# Inclusion de la bibliothèque ChessEngine::Core

include_directories ("../Core/include")
link_directories ("../lib")

# Ajoutez une source à l'exécutable de ce projet.
add_executable (ChessEngine "ChessEngine.cpp")
target_link_libraries (ChessEngine "ChessEngine.Core")

# TODO: Ajoutez des tests et installez des cibles si nécessaire.
