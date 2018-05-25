// PolyProp.cpp : Implementation of CPolyProp

#include "stdafx.h"
#include "PolyProp.h"


// CPolyProp

// <Snippet59>
LRESULT CPolyProp::OnEnChangeSides(WORD /*wNotifyCode*/, WORD /*wID*/, 
   HWND /*hWndCtl*/, BOOL& /*bHandled*/)
{
   SetDirty(TRUE);

   return 0;
}
// </Snippet59>