// Beeper.cpp : Implementation of CBeeper

#include "stdafx.h"
#include "Beeper.h"

// CBeeper

STDMETHODIMP CBeeper::InterfaceSupportsErrorInfo(REFIID riid)
{
   static const IID* arr[] = 
   {
      &IID_IBeeper
   };

   for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
   {
      if (InlineIsEqualGUID(*arr[i],riid))
         return S_OK;
   }
   return S_FALSE;
}
