// VCUE_CopyString.h
//
// This file contains ATL-style copy policy classes for std::string
// ATL uses copy policy classes in its enumerator and collection interface implementations
//
//////////////////////////////////////////////////////////////////////

#if !defined(_VCUE_COPYSTRING_H___0D44F68B_B373_11D2_9A7F_50F653C10000___INCLUDED_)
#define _VCUE_COPYSTRING_H___0D44F68B_B373_11D2_9A7F_50F653C10000___INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

#include "VCUE_Copy.h"

namespace VCUE
{
   template <>
   class GenericCopy<std::string>
   {
   public :
      typedef std::string	destination_type;
      typedef std::string	source_type;

      static void init(destination_type* )
      {
      }
      static void destroy(destination_type* )
      {
      }
      static HRESULT copy(destination_type* pTo, const source_type* pFrom)
      {
         *pTo = *pFrom;
         return S_OK;
      }
   
   }; // class GenericCopy<std::string>

   template <>
   class GenericCopy<VARIANT, std::string>
   {
   public :
      typedef VARIANT		destination_type;
      typedef std::string	source_type;

      static void init(destination_type* p)
      {
         GenericCopy<destination_type>::init(p);
      }
      static void destroy(destination_type* p)
      {
         GenericCopy<destination_type>::destroy(p);
      }
      static HRESULT copy(destination_type* pTo, const source_type* pFrom)
      {
         return CComVariant(pFrom->c_str()).Detach(pTo);
      }

   }; // class GenericCopy<VARIANT, std::string>

   template <>
   class GenericCopy<BSTR, std::string>
   {
   public :
      typedef BSTR		destination_type;
      typedef std::string	source_type;

      static void init(destination_type* p)
      {
         GenericCopy<destination_type>::init(p);
      }
      static void destroy(destination_type* p)
      {
         GenericCopy<destination_type>::destroy(p);
      }
      static HRESULT copy(destination_type* pTo, const source_type* pFrom)
      {
         *pTo = CComBSTR(pFrom->c_str()).Detach();
         if (*pTo)
            return S_OK;
         else
            return E_OUTOFMEMORY;
      }

   }; // class GenericCopy<BSTR, std::string>

}; // namespace VCUE

#endif // !defined(_VCUE_COPYSTRING_H___0D44F68B_B373_11D2_9A7F_50F653C10000___INCLUDED_)
