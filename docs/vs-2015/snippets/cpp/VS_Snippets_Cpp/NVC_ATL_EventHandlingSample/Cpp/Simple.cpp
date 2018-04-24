// Simple.cpp : Implementation of CSimple
#include "stdafx.h"
#include "ATLEventHandling.h"
#include "Simple.h"

/////////////////////////////////////////////////////////////////////////////
// CSimple

// <Snippet4>
// Define type info structure
_ATL_FUNC_INFO OnDocChangeInfo = {CC_STDCALL, VT_EMPTY, 0};
_ATL_FUNC_INFO OnQuitInfo = {CC_STDCALL, VT_EMPTY, 0};
// (don't actually need two structure since they're the same)
// </Snippet4>

