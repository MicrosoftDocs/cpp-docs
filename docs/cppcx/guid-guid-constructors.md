---
title: "Guid::Guid Constructors | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::Guid::Guid"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform, Guid::Guid"
  - "Guid::Guid"
ms.assetid: dfa4dcad-1c3b-481f-9f60-05141b9788d1
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Guid::Guid Constructors
Initializes a new instance of a Guid struct.  
  
## Syntax  
  
```cpp  
  
    Guid(  
        unsigned int a,   
        unsigned short b,   
        unsigned short c,   
        unsigned char d,   
        unsigned char e,   
        unsigned char f,   
        unsigned char g,   
        unsigned char h,   
        unsigned char i,   
        unsigned char j,   
        unsigned char k  
);  
  
    Guid(   
        GUID m  
);  
  
    Guid(  
        unsigned int a,   
        unsigned short b,   
        unsigned short c,   
        Array<unsigned char>^ n  
);  
```  
  
#### Parameters  
 `a`  
 The first 4 bytes of the GUID.  
  
 `b`  
 The next 2 bytes of the GUID.  
  
 `c`  
 The next 2 bytes of the GUID.  
  
 `d`  
 The next byte of the GUID.  
  
 `e`  
 The next byte of the GUID.  
  
 `f`  
 The next byte of the GUID.  
  
 `g`  
 The next byte of the GUID.  
  
 `h`  
 The next byte of the GUID.  
  
 `i`  
 The next byte of the GUID.  
  
 `j`  
 The next byte of the GUID.  
  
 `k`  
 The next byte of the GUID.  
  
 `m`  
 A GUID as defined .  
  
 `n`  
 The remaining 8 bytes of the GUID.  
  
## Requirements  
 **Minimum supported client:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Minimum supported server:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Namespace:** Platform  
  
 **Metadata:** platform.winmd  
  
## See Also  
 [Platform::Guid value class](../cppcx/platform-guid-value-class.md)