# CMakeList.txt�: projet CMake pour ChessEngine, incluez la source et d�finissez
# la logique sp�cifique au projet ici.
#
cmake_minimum_required (VERSION 3.8)

# Configuration de la lib

set (LIBRARY_OUTPUT_PATH "../lib")

# inclusion des en-t�tes

include_directories ("${CMAKE_CURRENT_SOURCE_DIR}/include")

# Chargement des sources

file (GLOB SOURCES "source/*.cpp")

add_library (ChessEngine.Core ${SOURCES})



# TODO: Ajoutez des tests et installez des cibles si n�cessaire.