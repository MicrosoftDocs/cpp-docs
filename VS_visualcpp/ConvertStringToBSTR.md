---
title: "ConvertStringToBSTR"
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
ms.assetid: 071f9b3b-9643-4e06-a1e5-de96ed15bab2
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
# ConvertStringToBSTR
**Microsoft Specific**  
  
 Converts a **char \*** value to a `BSTR`.  
  
## Syntax  
  
```  
  
      BSTR __stdcall ConvertStringToBSTR(  
   const char* pSrc  
)  
```  
  
#### Parameters  
 `pSrc`  
 A **char \*** variable.  
  
## Example  
  
```  
// ConvertStringToBSTR.cpp  
#include <comutil.h>  
#include <stdio.h>  
  
#pragma comment(lib, "comsuppw.lib")  
#pragma comment(lib, "kernel32.lib")  
  
int main() {  
   char* lpszText = "Test";  
   printf_s("char * text: %s\n", lpszText);  
  
   BSTR bstrText = _com_util::ConvertStringToBSTR(lpszText);  
   wprintf_s(L"BSTR text: %s\n", bstrText);  
  
   SysFreeString(bstrText);  
}  
```  
  
 **char \* text: Test**  
**BSTR text: Test**   
## END Microsoft Specific  
  
## Requirements  
 **Header:** comutil.h  
  
 **Lib:** comsuppw.lib or comsuppwd.lib (see [/Zc:wchar_t (wchar_t Is Native Type)](../VS_visualcpp/-Zc-wchar_t--wchar_t-Is-Native-Type-.md) for more information)  
  
## See Also  
 [Compiler COM Global Functions](../VS_visualcpp/Compiler-COM-Global-Functions.md)