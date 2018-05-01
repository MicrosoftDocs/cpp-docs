---
title: "ActivatableClass Macros | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ActivatableClass"
  - "ActivatableClassWithFactory"
  - "ActivatableClassWithFactoryEx"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ActivatableClassWithFactory"
  - "ActivatableClass"
  - "ActivatableClassWithFactoryEx"
ms.assetid: 9bd64709-ec2c-4678-8c96-ea5982622bdd
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# ActivatableClass Macros
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [ActivatableClass Macros](https://docs.microsoft.com/cpp/windows/activatableclass-macros).  
  
  
Populates an internal cache that contains a factory that can create an instance of the specified class.  
  
## Syntax  
  
```cpp  
ActivatableClass(  
   className  
);  
  
ActivatableClassWithFactory(  
   className,   
   factory  
);  
  
ActivatableClassWithFactoryEx(  
   className,   
   factory,   
   serverName  
);  
  
```  
  
#### Parameters  
 `className`  
 Name of the class to create.  
  
 `factory`  
 Factory that will create an instance of the specified class.  
  
 `serverName`  
 A name that specifies a subset of factories in the module.  
  
## Remarks  
 Do not use these macros with classic COM unless you use the `#undef` directive to ensure that the **__WRL_WINRT_STRICT\_\_** macro definition is removed.  
  
## Requirements  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL
 
 ## See Also
 [Module Class](../windows/module-class.md)

