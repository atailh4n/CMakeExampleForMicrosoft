# CMakeList.txt: CMakeExample için CMake projesi, kaynağı ekleyin ve tanımlayın
# projeye özgü mantık burada bulunur.
#

cmake_minimum_required (VERSION 3.5)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CXX_STANDART 20)

# Added due to xxxxxno_repro.gif

# if I don't add this to here (locally) it won't work.
if (MSVC)
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /std:c++20 /Zc:__cplusplus")
endif()

# Kaynağı bu projenin yürütülebilir dosyasına ekleyin.
add_executable (CMakeExample "CMakeExample.cpp" "CMakeExample.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CMakeExample PROPERTY CXX_STANDARD 20)
endif()

# TODO: Gerekirse testleri ve yükleme hedeflerini ekleyin.
