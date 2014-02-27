project (Lab9)

cmake_minimum_required(VERSION 2.6)

find_package(GTK2 2.8 COMPONENTS gtk gtkmm)

# Allow multiple targets to have the same name
# This is required to allow, for example, multiple files, each named
# exercise_1_1, to exist in separate Lab directories.
cmake_policy(SET CMP0002 OLD)

#execute_process(COMMAND pkg-config --cflags --libs gtkmm-2.4 OUTPUT_VARIABLE GTKMM_DIRECTIVE)
#add_definitions(${GTKMM_DIRECTIVE})

message(${GTK2_INCLUDE_DIRS})

# Include the directory itself as a path to include directories
include_directories(${GTK2_INCLUDE_DIRS} /usr/lib/pangomm-1.4/include/ /usr/include/freetype2)
add_executable(Lab9 main.cpp MyArea.cpp Circle.cpp Square.cpp Shape.h Observer.h  Point.h Point.cpp)
target_link_libraries(Lab9 ${GTK2_LIBRARIES})
