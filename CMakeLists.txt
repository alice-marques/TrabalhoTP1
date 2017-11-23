cmake_minimum_required(VERSION 3.8)
project(Trabalho3)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES dominios.h dominios.cpp entidades.h entidades.cpp main.cpp camadaApresentacao.h camadaApresentacao.cpp camadaServico.cpp armazenamento.h armazenamento.cpp interfaces.h)
add_executable(Trabalho3 ${SOURCE_FILES})