# CMakeList.txt : projet CMake pour ChessEngine, incluez la source et définissez
# la logique spécifique au projet ici.

cmake_minimum_required (VERSION 3.8)

# Inclusion des bibliothèque ChessEngine

link_directories ("../lib")

# Ajoutez une source à l'exécutable de ce projet.
add_executable(ChessEngine "ChessEngine.cpp")
target_link_libraries(ChessEngine "ChessEngine.Core")
target_link_libraries(ChessEngine "ChessEngine.Graphics")


# TODO: Ajoutez des tests et installez des cibles si nécessaire.
