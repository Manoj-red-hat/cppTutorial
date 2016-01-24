cmake_minimum_required(VERSION 3.3)
project(cppTutorial)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

<<<<<<< HEAD
set(SOURCE_FILES main.cpp)
add_executable(cppTutorial ${SOURCE_FILES})
=======
set(SOURCE_FILES check.cpp grandPapa.cpp grandPapa.h papa.cpp papa.h son.cpp son.h)
add_executable(cppTutorial ${SOURCE_FILES} grandPapa.cpp grandPapa.h papa.cpp papa.h son.cpp son.h)
>>>>>>> 8ae0ca459b9d542660a447cc5ff98ae4a187a737
