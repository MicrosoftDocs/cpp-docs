---
title: "Object::GetHashCode Method | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::Object::GetHashCode"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform, Object::GetHashCode"
ms.assetid: 403a60e9-be1d-4702-b14d-27fa4b2a043b
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Object::GetHashCode Method
Returns the [IUnknown](../Topic/IUnknown.md)* identity value for this instance if it is a COM object, or a computed hash value if it is not a COM object.  
  
## Syntax  
  
```cpp  
public:int GetHashCode()  
```  
  
## Return Value  
 A numeric value that uniquely identifies this object.  
  
## Remarks  
 You can use GetHashCode to create keys for objects in maps. You can compare hash codes by using [Object::Equals Method](../cppcx/object-equals-method.md). If the code path is extremely critical and `GetHashCode` and `Equals` are not sufficiently fast, then you can drop down to the underlying COM layer and do native [IUnknown](../Topic/IUnknown.md) pointer comparisons.  
  
## Requirements  
 **Minimum supported client:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Minimum supported server:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Namespace:** Platform  
  
 **Header:** vccorlib.h  
  
## See Also  
 [Platform::Object Class](../cppcx/platform-object-class.md)