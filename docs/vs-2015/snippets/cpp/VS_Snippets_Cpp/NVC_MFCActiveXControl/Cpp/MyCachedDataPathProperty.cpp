// MyCachedDataPathProperty.cpp : implementation file
//

#include "stdafx.h"
#include "MFCActiveXControl.h"
#include "MyCachedDataPathProperty.h"


// CMyCachedDataPathProperty

CMyCachedDataPathProperty::CMyCachedDataPathProperty()
{
// <Snippet8>
   m_lReadyState = READYSTATE_LOADING;
// </Snippet8>
}

CMyCachedDataPathProperty::~CMyCachedDataPathProperty()
{
}


// CMyCachedDataPathProperty member functions

// <Snippet7>
void CMyCachedDataPathProperty::OnDataAvailable(DWORD dwSize, DWORD bscfFlag)
{
   CCachedDataPathProperty::OnDataAvailable(dwSize, bscfFlag);
   GetControl()->InvalidateControl();
}
// </Snippet7>