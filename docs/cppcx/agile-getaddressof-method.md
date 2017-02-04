---
title: "Agile::GetAddressOf Method | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "agile/Platform::Agile::GetAddressOf"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::Agile::GetAddressOf"
ms.assetid: f015edf9-4155-4992-a6fc-7ff1edcc5d1e
caps.latest.revision: 2
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Agile::GetAddressOf Method
Reinitializes the current Agile object, and then returns the address of a handle to an object of type `T`.  
  
## Syntax  
  
```cpp  
  
T^* GetAddressOf()   
throw();  
```  
  
#### Parameters  
 `T`  
 A type specified by the template typename parameter.  
  
## Return Value  
 The address of a handle to an object of type `T`.  
  
## Remarks  
 This operation releases the current representation of a object of type `T`, if any; reinitializes the Agile object's data members; acquires the current threading context; and then returns the address of a handle-to-object variable that can represent a non-agile object. To cause an Agile class instance to represent an object, use the assignment operator ([Agile::operator=](../cppcx/agile-operator-assign-operator.md)) to assign the object to the Agile class instance.  
  
## Requirements  
 **Minimum supported client:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Minimum supported server:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Namespace:** Platform  
  
 **Header:** vccorlib.h  
  
## See Also  
 [Platform::Agile Class](../cppcx/platform-agile-class.md)