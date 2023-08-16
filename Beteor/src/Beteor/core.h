#pragma once

#ifdef Beteor_PlatformWindows
 #ifdef Beteor_Build_Dll
     #define  Beteor_API _declspec(dllexport)
  #else
     #define Beteor_API _declspec(dllimport)
#endif
#else
#error Betror Only Support Windows!
#endif // Beteor_PlatformWindows
