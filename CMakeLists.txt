cmake_minimum_required(VERSION 3.21)
project(PipGarnica)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_PREFIX_PATH "~/Qt")

find_package(Qt6 REQUIRED COMPONENTS Core Widgets)

set(SRCS 
    src/game/Player.cpp
    src/game/Hero.cpp
    src/game/Card.cpp
    src/game/Deck.cpp
    src/game/Objective.cpp
    src/game/PipGarnica.cpp
    src/main.cpp)

set(HEADERS
    src/game/Entity.h
    src/game/PipGarnica.h
    src/game/Hero.h
    src/game/Player.h
    src/game/Card.h
    src/game/Deck.h
    src/game/Objective.h
    src/game/Colors.h
    )

add_executable(${PROJECT_NAME} ${SRCS})

target_link_libraries(${PROJECT_NAME} PRIVATE ${HEADERS} Qt6::Core Qt6::Widgets)