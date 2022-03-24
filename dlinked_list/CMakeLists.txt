cmake_minimum_required(VERSION 3.10)

# set the project name
project(dlist)

set(DLIST_VERSION_MAJOR 0)
set(DLIST_VERSION_MINOR 4)
set(DLIST_VERSION_PATCH 8)
set(DLIST_VERSION_STRING ${DLIST_VERSION_MAJOR}.${DLIST_VERSION_MINOR}.${DLIST_VERSION_PATCH})


# add the executable
add_library(dlist SHARED dlist.c)

target_include_directories(dlist PRIVATE ./)