---
title: "Agile::operator= Operator | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "agile/Platform::Agile::operator="
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::Agile::operator="
ms.assetid: 2c413bef-f103-4911-afb3-0dac5f6a760e
caps.latest.revision: 2
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Agile::operator= Operator
Assigns the specified object to the current Agile object.  
  
## Syntax  
  
```cpp  
  
   Agile<T> operator=(  
   T^ object  
) throw();  
  
   Agile<T> operator=(  
      const Agile<T>& object  
) throw();  
  
   Agile<T> operator=(  
      Agile<T>&& object  
) throw();  
  
   T^ operator=(  
      IUnknown* lp  
) throw();  
  
```  
  
#### Parameters  
 `T`  
 The type specified by the template typename.  
  
 `object`  
 The object or handle to an object that is copied or moved to the current Agile object.  
  
 `lp`  
 The IUnknown interface pointer of a object.  
  
## Return Value  
 A handle to an object of type `T`  
  
## Remarks  
 The first version of the assignment operator copies a handle to a reference type to the current Agile object. The second version copies a reference to an Agile type to the current Agile object. The third version moves an Agile type to the current Agile object. The fourth version moves a pointer to a COM object to the current Agile object.  
  
 The assignment operation automatically persists the context of the current Agile object.  
  
## Requirements  
 **Minimum supported client:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Minimum supported server:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Namespace:** Platform  
  
 **Header:** vccorlib.h  
  
## See Also  
 [Platform::Agile Class](../cppcx/platform-agile-class.md)