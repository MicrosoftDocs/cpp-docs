// MyProviderRS.cpp : Implementation of CMyProviderCommand

#include "stdafx.h"
#include "MyProviderRS.h"
#include "MyProviderDS.h"

// CMyProviderCommand

HRESULT CMyProviderCommand::Execute(IUnknown * pUnkOuter, REFIID riid, DBPARAMS * pParams, 
								 LONG * pcRowsAffected, IUnknown ** ppRowset)
{
	CMyProviderRowset* pRowset;
	return CreateRowset(pUnkOuter, riid, pParams, pcRowsAffected, ppRowset, pRowset);
}

