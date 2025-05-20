# CMakeList.txt: Üst düzey CMake proje dosyası, genel yapılandırma gerçekleştirin
# ve alt projeleri buraya ekleyin.
#
cmake_minimum_required (VERSION 3.5)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CXX_STANDART 20)

# Added due to xxxxxno_repro.gif
# this does nothing.
if (MSVC)
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /std:c++20 /Zc:__cplusplus")
endif()

# Destekleniyorsa MSVC derleyicileri için Çalışırken Yeniden Yükleme aracını etkinleştirin.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("CMakeExample")

# Alt projeleri ekleyin.
add_subdirectory ("CMakeExample")
