---
title: "ConvertBSTRToString"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: language-reference
ms.assetid: ab6ce555-3d75-4e9c-9cb8-ada6d8ce43b1
caps.latest.revision: 9
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# ConvertBSTRToString
**Microsoft Specific**  
  
 Converts a `BSTR` value to a **char \***.  
  
## Syntax  
  
```  
  
      char* __stdcall ConvertBSTRToString(  
   BSTR pSrc  
);  
```  
  
#### Parameters  
 `pSrc`  
 A BSTR variable.  
  
## Remarks  
 `ConvertBSTRToString` allocates a string you must delete.  
  
## Example  
  
```  
// ConvertBSTRToString.cpp  
#include <comutil.h>  
#include <stdio.h>  
  
#pragma comment(lib, "comsuppw.lib")  
  
int main() {  
   BSTR bstrText = ::SysAllocString(L"Test");  
   wprintf_s(L"BSTR text: %s\n", bstrText);  
  
   char* lpszText2 = _com_util::ConvertBSTRToString(bstrText);  
   printf_s("char * text: %s\n", lpszText2);  
  
   SysFreeString(bstrText);  
   delete[] lpszText2;  
}  
```  
  
 **BSTR text: Test**  
**char \* text: Test**   
## END Microsoft Specific  
  
## Requirements  
 **Header:** comutil.h.  
  
 **Lib:** comsuppw.lib or comsuppwd.lib (see [/Zc:wchar_t (wchar_t Is Native Type)](../VS_visualcpp/-Zc-wchar_t--wchar_t-Is-Native-Type-.md) for more information)  
  
## See Also  
 [Compiler COM Global Functions](../VS_visualcpp/Compiler-COM-Global-Functions.md)