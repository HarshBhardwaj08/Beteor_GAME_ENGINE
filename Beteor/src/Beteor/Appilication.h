#pragma once
#include "core.h"

 namespace Beteor {
	 class Beteor_API Appilication
	 {
	 public :
		 Appilication();
		 virtual ~Appilication();

		 void run();
	 };
	 Appilication* CreateApplication();
}


