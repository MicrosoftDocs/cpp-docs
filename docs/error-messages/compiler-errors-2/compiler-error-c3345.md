---
title: "Compiler Error C3345 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3345"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3345"
ms.assetid: 1dda4c79-73bb-441b-b939-746154c3afba
caps.latest.revision: 4
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
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