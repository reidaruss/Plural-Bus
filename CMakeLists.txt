cmake_minimum_required(VERSION 3.15)
project(Plural_Bus)

set(CMAKE_CXX_STANDARD 11)

add_executable(Plural_Bus main.cpp Deck.cpp Deck.h Card.cpp Card.h)