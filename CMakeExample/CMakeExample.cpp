// CMakeExample.cpp: Uygulamanın giriş noktasını tanımlar.
//

#include "CMakeExample.h"
#include "Subfolder2/Subcode.hpp"

using namespace std;

void returnCPPVersion() {
#if __cplusplus == 202002L
	cout << "CPP version is 20" << endl;
#else
	cout << "CPP version is not 20" << endl;
	cout << "Current CPP version: " << __cplusplus << endl;
#endif
}

int main()
{
	returnCPPVersion();
	getCppVersionSubfolder();
	cout << "Hello CMake." << endl;
	return 0;
}
