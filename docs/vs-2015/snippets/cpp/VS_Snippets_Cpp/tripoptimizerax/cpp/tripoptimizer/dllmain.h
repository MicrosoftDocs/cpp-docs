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
// dllmain.h : Declaration of module class.

class CTripOptimizerModule : public ATL::CAtlDllModuleT< CTripOptimizerModule >
{
public :
	DECLARE_LIBID(LIBID_TripOptimizerLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_TRIPOPTIMIZER, "{A96D8DFB-7913-4189-9ECD-46FA12E87AB0}")
};

extern class CTripOptimizerModule _AtlModule;
