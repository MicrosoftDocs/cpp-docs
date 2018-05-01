//-----------------------------------------------------------------------
// 
//  Copyright (C) Microsoft Corporation.  All rights reserved.
// 
// 
// THIS CODE AND INFORMATION ARE PROVIDED AS-IS WITHOUT WARRANTY OF ANY
// KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
// PARTICULAR PURPOSE.
//-----------------------------------------------------------------------
// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently,
// but are changed infrequently

#pragma once

#ifndef STRICT
#define STRICT
#endif

#include "targetver.h"

#define _ATL_APARTMENT_THREADED

#define _ATL_NO_AUTOMATIC_NAMESPACE

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS	// some CString constructors will be explicit


#define ATL_NO_ASSERT_ON_DESTROY_NONEXISTENT_WINDOW

#include "resource.h"
#include <atlbase.h>
#include <atlcom.h>
#include <atlctl.h>
#include <comutil.h>
#include <atlsafe.h>
#include <strsafe.h>
#include <list>
#include <numeric>
#include <ppl.h>
#include <agents.h>
#include <concurrent_vector.h>
#include <string>
#include <sstream>
#include <xmllite.h>