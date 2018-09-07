---
title: "Compiler Error C3345 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3345"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3345"]
ms.assetid: 1dda4c79-73bb-441b-b939-746154c3afba
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3345
'identifier': invalid identifier for module name  
  
 The *identifier* for a module contains one or more unacceptable characters. An identifier is valid if the first character is an alphabetical, underscore, or high ANSI (0x80-FF) character, and any subsequent character is an alphanumeric, underscore, or high ANSI character.  
  
### To correct this error  
  
1.  Ensure that *identifier* does not contain blanks or other unacceptable characters.  
  
## Example  
 The following code example causes error message C3345 because the `name` parameter of the `module` attribute contains a blank.  
  
```  
// cpp_attr_name_module.cpp  
// compile with: /LD /link /OPT:NOREF  
#include <atlbase.h>  
#include <atlcom.h>  
#include <atlwin.h>  
#include <atltypes.h>  
#include <atlctl.h>  
#include <atlhost.h>  
#include <atlplus.h>  
  
// C3345 expected  
[module(dll, name="My Library", version="1.2", helpfile="MyHelpFile")]   
// Try the following line instead  
//[module(dll, name="MyLibrary", version="1.2", helpfile="MyHelpFile")]   
// Module attribute now applies to this class  
class CMyClass {  
public:  
BOOL WINAPI DllMain(DWORD dwReason, LPVOID lpReserved) {  
   // add your own code here  
   return __super::DllMain(dwReason, lpReserved);  
   }  
};  
```  
  
## See Also  
 [__iscsym](../../c-runtime-library/reference/iscsym-functions.md)   
 [Character Classification](../../c-runtime-library/character-classification.md)   
 [module](../../windows/module-cpp.md)