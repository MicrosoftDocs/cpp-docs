---
title: "Compiler Warning (level 2) C4275 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4275"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4275"
ms.assetid: 18de967a-0a44-4dbc-a2e8-fc4c067ba909
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
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
# Compiler Warning (level 2) C4275
non – DLL-interface classkey 'identifier' used as base for DLL-interface classkey 'identifier'  
  
 An exported class was derived from a class that was not exported.  
  
 To minimize the possibility of data corruption when exporting a class with [__declspec(dllexport)](../../cpp/dllexport-dllimport.md), ensure that:  
  
-   All your static data is accessed through functions that are exported from the DLL.  
  
-   No inlined methods of your class can modify static data.  
  
-   No inlined methods of your class use CRT functions or other library functions use static data.  
  
-   No inlined class functions use CRT functions, or other library functions, where, for example, you access static data.  
  
-   No methods of your class (regardless of inlining) can use types where the instantiation in the EXE and DLL have static data differences.  
  
 You can avoid exporting classes by defining a DLL that defines a class with virtual functions, and functions you can call to instantiate and delete objects of the type.  You can then just call virtual functions on the type.  
  
 For more information on exporting templates, see [http://support.microsoft.com/default.aspx?scid=KB;EN-US;168958](http://support.microsoft.com/default.aspx?scid=KB;EN-US;168958).  
  
 C4275 can be ignored in Visual C++ if you are deriving from a type in the Standard C++ Library, compiling a debug release (**/MTd**) and where the compiler error message refers to _Container_base.  
  
```  
// C4275.cpp  
// compile with: /EHsc /MTd /W2 /c  
#include <vector>  
using namespace std;  
class Node;  
class __declspec(dllimport) VecWrapper : vector<Node *> {};   // C4275  
```