---
title: "Agile::Agile Constructor | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "agile/Platform::Agile::Agile"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::Agile::Agile"
ms.assetid: 33c1df82-f5db-4750-98cc-0daa03be4e59
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Agile::Agile Constructor
Initializes a new instance of the Agile class.  
  
## Syntax  
  
```cpp  
  
 Agile();  
  
Agile(T^ object);   
  
Agile(const Agile<T>& object);  
  
Agile(Agile<T>&& object);  
  
```  
  
#### Parameters  
 `T`  
 A type specified by the template typename parameter.  
  
 `object`  
 In the second version of this constructor, an object used to initialize a new Agile instance. In the third version, the object that is copied to the new Agile instance. In the fourth version, the object that is moved to the new Agile instance.  
  
## Remarks  
 The first version of this constructor is the default constructor. The second version initializes new Agile instance class from the object specified by the `object` parameter. The third version is the copy constructor. The fourth version is the move constructor. This constructor cannot throw exceptions.  
  
## Requirements  
 **Minimum supported client:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Minimum supported server:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Namespace:** Platform  
  
 **Header:** vccorlib.h  
  
## See Also  
 [Platform::Agile Class](../cppcx/platform-agile-class.md)