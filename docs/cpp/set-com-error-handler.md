---
title: "_set_com_error_handler | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_set_com_error_handler function"
ms.assetid: 49fe4fca-5e37-4d83-abaf-15be5ce37f94
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# _set_com_error_handler
**Microsoft Specific**  
  
 Replaces the default function that is used for COM error-handling.  
  
## Syntax  
  
```  
void __stdcall _set_com_error_handler(  
   void (__stdcall *pHandler)(  
      HRESULT hr,   
      IErrorInfo* perrinfo  
   )  
);  
```  
  
#### Parameters  
 `pHandler`  
 Pointer to the replacement function.  
  
 `hr`  
 `HRESULT` information.  
  
 `perrinfo`  
 `IErrorInfo` object.  
  
## Remarks  
 By default, [_com_raise_error](../cpp/com-raise-error.md) handles all COM errors. You can change this behavior by using `_set_com_error_handler` to call your own error-handling function.  
  
 The replacement function must have a signature that is equivalent to that of `_com_raise_error`.  
  
## Example  
  
```  
// _set_com_error_handler.cpp  
// compile with /EHsc  
#include <stdio.h>  
#include <comdef.h>  
#include <comutil.h>  
  
// Importing ado dll to attempt to establish an ado connection.  
// Not related to _set_com_error_handler   
#import "C:\Program Files\Common Files\System\ado\msado15.dll" no_namespace rename("EOF", "adoEOF")  
  
void __stdcall _My_com_raise_error(HRESULT hr, IErrorInfo* perrinfo)  
{  
   throw "Unable to establish the connection!";  
}  
  
int main()  
{  
   _set_com_error_handler(_My_com_raise_error);  
   _bstr_t bstrEmpty(L"");  
   _ConnectionPtr Connection = NULL;  
   try  
   {  
      Connection.CreateInstance(__uuidof(Connection));  
      Connection->Open(bstrEmpty, bstrEmpty, bstrEmpty, 0);   
   }  
   catch(char* errorMessage)  
   {  
      printf("Exception raised: %s\n", errorMessage);  
   }  
  
   return 0;  
}  
```  
  
```Output  
Exception raised: Unable to establish the connection!  
```  
  
## Requirements  
 **Header:** comdef.h  
  
 **Lib:** If the “wchar_t is Native Type” compiler option is on, use comsuppw.lib or comsuppwd.lib. If “wchar_t is Native Type” is off, use comsupp.lib. For more information, see [/Zc:wchar_t (wchar_t Is Native Type)](../build/reference/zc-wchar-t-wchar-t-is-native-type.md).  
  
## See Also  
 [Compiler COM Global Functions](../cpp/compiler-com-global-functions.md)