// MySuppErrClass.cpp : Implementation of CMySuppErrClass

#include "stdafx.h"
#include "MySuppErrClass.h"


// CMySuppErrClass

STDMETHODIMP CMySuppErrClass::InterfaceSupportsErrorInfo(REFIID riid)
{
   static const IID* arr[] = 
   {
      &IID_IMySuppErrClass
   };

   for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
   {
      if (InlineIsEqualGUID(*arr[i],riid))
         return S_OK;
   }
   return S_FALSE;
}
