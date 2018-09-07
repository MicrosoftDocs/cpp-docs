---
title: "Compiler Warning (level 1) C4581 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4581"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4581"]
ms.assetid: 598bcd87-257d-4eb3-94e4-15bb31aadc99
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4581
deprecated behavior: '"string1"' replaced with 'string2' to process attribute  
  
 This error can be generated as a result of compiler conformance work that was done for Visual C++ 2005: parameter checking for Visual C++ attributes.  
  
 In previous versions, attribute values were accepted whether or not they were enclosed in quotation marks. If the value is an enumeration, it must not be enclosed in quotation marks.  
  
## Example  
 The following sample generates C4581.  
  
```  
// C4581.cpp  
// compile with: /c /W1  
#include "unknwn.h"  
[object, uuid("00000000-0000-0000-0000-000000000001")]  
__interface IMyI : IUnknown {};  
  
[coclass, uuid(12345678-1111-2222-3333-123456789012), threading("free")]   // C4581  
// try the following line instead  
// [coclass, uuid(12345678-1111-2222-3333-123456789012), threading(free)]  
class CSample : public IMyI {};  
```