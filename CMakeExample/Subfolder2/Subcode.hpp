#include <iostream>
static void getCppVersionSubfolder() {
#if __cplusplus == 202002L
	std::cout << "CPP version is 20 in subfolder" << std::endl;
#else
	std::cout << "CPP version is not 20 in subfolder" << std::endl;
	std::cout << "CPP version in subf.: " << __cplusplus << std::endl;
#endif
}