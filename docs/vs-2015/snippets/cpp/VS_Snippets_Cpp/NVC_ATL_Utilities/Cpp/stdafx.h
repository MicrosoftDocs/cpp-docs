// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

// Modify the following defines if you have to target a platform prior to the ones specified below.
// Refer to MSDN for the latest info on corresponding values for different platforms.
#ifndef WINVER				// Allow use of features specific to Windows XP or later.
#define WINVER 0x0501		// Change this to the appropriate value to target other versions of Windows.
#endif

#ifndef _WIN32_WINNT		// Allow use of features specific to Windows XP or later.                   
#define _WIN32_WINNT 0x0501	// Change this to the appropriate value to target other versions of Windows.
#endif						

#ifndef _WIN32_WINDOWS		// Allow use of features specific to Windows 98 or later.
#define _WIN32_WINDOWS 0x0410 // Change this to the appropriate value to target Windows Me or later.
#endif

#ifndef _WIN32_IE			// Allow use of features specific to IE 6.0 or later.
#define _WIN32_IE 0x0600	// Change this to the appropriate value to target other versions of IE.
#endif

#define WIN32_LEAN_AND_MEAN		// Exclude rarely-used stuff from Windows headers
#include <stdio.h>
#include <tchar.h>


#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS	// some CString constructors will be explicit

#define ATL_CCOMBSTR_ADDRESS_OF_ASSERT

// We have to define _ATL_SECURE_NO_DEPRECATE for now because _ATL_SECURE_NO_WARNINGS
// was introduced post-RTM and Parsnip is still using the VS2005 RTM build.  This line
// can be removed once Parsnip is updated.
#define _ATL_SECURE_NO_DEPRECATE

// <Snippet125>
#define _ATL_SECURE_NO_WARNINGS
#include <atlbase.h>
#include <atlsimpstr.h>
// </Snippet125>

#include <atlstr.h>

#include <atlcoll.h>
#include <atlcur.h>
#include <atlfile.h>
#include <atlsafe.h>
#include <complex>

// <Snippet97>
#define _ATL_ALL_WARNINGS
// </Snippet97>