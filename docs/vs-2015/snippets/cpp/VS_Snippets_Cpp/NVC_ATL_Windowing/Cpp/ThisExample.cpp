// ThisExample.cpp : Implementation of CThisExample

#include "stdafx.h"
#include "ThisExample.h"


// CThisExample

STDMETHODIMP CThisExample::InterfaceSupportsErrorInfo(REFIID riid)
{
   static const IID* arr[] = 
   {
      &IID_IThisExample
   };

   for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
   {
      if (InlineIsEqualGUID(*arr[i],riid))
         return S_OK;
   }
   return S_FALSE;
}
