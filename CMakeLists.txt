cmake_minimum_required(VERSION 3.20)
project(PracticeMusicFix)

find_package(Geode REQUIRED)

add_geode_mod(${PROJECT_NAME}
    src/main.cpp
)
