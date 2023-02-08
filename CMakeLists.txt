cmake_minimum_required(VERSION 3.24)
project(assignment3)

set(CMAKE_CXX_STANDARD 14)

include_directories(Array)
include_directories(Deck)
include_directories(Deck/ItemTypeCard)
include_directories(ItemTypeInt)
include_directories(Linked)

add_executable(assignment3
        Array/listDriver.cpp
        Array/unsorted.cpp
        Array/unsorted.h
        Deck/ItemTypeCard/ItemType.cpp
        Deck/ItemTypeCard/ItemType.h
        Deck/deck.cpp
        Deck/deck.h
        Deck/deckDriver.cpp
        Deck/unsorted.cpp
        Deck/unsorted.h
        ItemTypeInt/ItemType.cpp
        ItemTypeInt/ItemType.h
        Linked/listDriver.cpp
        Linked/unsorted.cpp
        Linked/unsorted.h
        CreateListFromFile.cpp
        PrintList.cpp driver.cpp)
