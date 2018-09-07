---
title: "embedded_idl | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["embedded_idl"]
dev_langs: ["C++"]
helpviewer_keywords: ["embedded_idl attribute"]
ms.assetid: f1c1c2e8-3872-4172-8795-8d1288a20452
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# embedded_idl
**C++ Specific**  
  
Specifies that the type library is written to the .tlh file with the attribute-generated code preserved.  
  
## Syntax  
  
```  
embedded_idl[("param")]  
```  
  
### Parameters  
*param*  
Can be one of two values:  
  
- emitidl: Type information imported from the typelib will be present in the IDL generated for the attributed project.  This is the default and will be in effect if you do not specify a parameter to `embedded_idl`.  
  
- no_emitidl: Type information imported from the typelib will not be present in the IDL generated for the attributed project.  
  
## Example  
  
```cpp  
// import_embedded_idl.cpp  
// compile with: /LD  
#include <windows.h>  
[module(name="MyLib2")];  
#import "\school\bin\importlib.tlb" embedded_idl("no_emitidl")  
```  
  
## Remarks  
 
**END C++ Specific**  
  
## See Also  
 
[#import Attributes](../preprocessor/hash-import-attributes-cpp.md)   
[#import Directive](../preprocessor/hash-import-directive-cpp.md)