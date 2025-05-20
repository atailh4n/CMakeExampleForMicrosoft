# CMakeList.txt: CMakeExample için CMake projesi, kaynağı ekleyin ve tanımlayın
# projeye özgü mantık burada bulunur.
#

cmake_minimum_required (VERSION 3.5)

# Added due to xxxxxno_repro.gif

# if I don't add this to here (locally) it won't work.


# Kaynağı bu projenin yürütülebilir dosyasına ekleyin.
add_executable (CMakeExample "Subcode.hpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CMakeExample PROPERTY CXX_STANDARD 20)
endif()

# TODO: Gerekirse testleri ve yükleme hedeflerini ekleyin.
