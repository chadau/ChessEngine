cmake_minimum_required (VERSION 3.8)

# Configuration de la lib

set (LIBRARY_OUTPUT_PATH "../lib")

# inclusion des en-tetes

include_directories ("${CMAKE_CURRENT_SOURCE_DIR}/include")

# Chargement des sources

file (GLOB SOURCES "source/*.cpp")

add_library (ChessEngine.Graphics ${SOURCES})
target_include_directories(ChessEngine.Graphics PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")



# TODO: Ajoutez des tests et installez des cibles si necessaire.