cmake_minimum_required(VERSION 3.15)
project(raylibhelloworld C)

# Crear ejecutable
add_executable(raylibhelloworld src/raylibhelloworld.c)

# Headers del proyecto
target_include_directories(raylibhelloworld PRIVATE ${CMAKE_SOURCE_DIR}/include)

# Enlazar raylib por ruta absoluta para evitar problemas de búsqueda (-lraylib)
set(RAYLIB_LIB "${CMAKE_SOURCE_DIR}/lib/libraylib.a")
if(NOT EXISTS "${RAYLIB_LIB}")
	message(FATAL_ERROR "No se encontró libraylib.a en: ${RAYLIB_LIB}")
endif()

target_link_libraries(raylibhelloworld PRIVATE
	${RAYLIB_LIB}
	gdi32
	winmm
)
