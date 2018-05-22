---
title: "ConvertBSTRToString | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "ConvertBSTRToString"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ConvertBSTRToString function"
ms.assetid: ab6ce555-3d75-4e9c-9cb8-ada6d8ce43b1
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# ConvertBSTRToString
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [ConvertBSTRToString](https://docs.microsoft.com/cpp/cpp/convertbstrtostring).  
  
Microsoft Specific**  
  
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
  
```Output  
BSTR text: Test  
char * text: Test  
```  
  
## END Microsoft Specific  
  
## Requirements  
 **Header:** comutil.h.  
  
 **Lib:** comsuppw.lib or comsuppwd.lib (see [/Zc:wchar_t (wchar_t Is Native Type)](../build/reference/zc-wchar-t-wchar-t-is-native-type.md) for more information)  
  
## See Also  
 [Compiler COM Global Functions](../cpp/compiler-com-global-functions.md)





