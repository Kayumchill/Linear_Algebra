cmake_minimum_required(VERSION 3.28.0)
project(algebra VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_compile_options(-Wall -ggdb)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

set(HDRS headers)
set(SRCS sources)

set(DABA database)
set(INFA interface)
set(LIBS libraries)

# Add directories with header files:
include_directories(${HDRS}/${DABA})
include_directories(${HDRS}/${INFA})
include_directories(${HDRS}/${LIBS})

#interface
set(INTP ${HDRS}/${INFA}/intepreter.hpp ${SRCS}/${INFA}/intepreter.cpp)

#libraries
set(LIBS_ALGB ${HDRS}/${LIBS}/algebra.hpp ${SRCS}/${LIBS}/algebra.cpp)
set(LIBS_EXCP ${HDRS}/${LIBS}/exception.hpp ${SRCS}/${LIBS}/exception.cpp)
set(LIBS_FILE ${HDRS}/${LIBS}/file.hpp ${SRCS}/${LIBS}/file.cpp)
set(LIBS_PARS ${HDRS}/${LIBS}/parsing.hpp ${SRCS}/${LIBS}/parsing.cpp)
set(LIBS_SNTX ${HDRS}/${LIBS}/syntax.hpp ${SRCS}/${LIBS}/syntax.cpp)
set(LIBS_TERM ${HDRS}/${LIBS}/terminal.hpp ${SRCS}/${LIBS}/terminal.cpp)

#database
set(DATA ${HDRS}/${DABA}/data.hpp ${SRCS}/${DABA}/data.cpp)

#interface
add_library(_intp STATIC ${INTP})

#libraries
add_library(_algb STATIC ${LIBS_ALGB})
add_library(_excp STATIC ${LIBS_EXCP})
add_library(_file STATIC ${LIBS_FILE})
add_library(_pars STATIC ${LIBS_PARS})
add_library(_sntx STATIC ${LIBS_SNTX})
add_library(_term STATIC ${LIBS_TERM})

#database
add_library(_data STATIC ${DATA})


#main
add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE _intp)
target_link_libraries(_intp _pars _excp)
target_link_libraries(_algb _pars _excp)
target_link_libraries(_file _pars)
target_link_libraries(_sntx _pars)
target_link_libraries(_term _pars _file)
