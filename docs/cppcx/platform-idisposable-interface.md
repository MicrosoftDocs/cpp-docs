---
title: "Platform::IDisposable Interface | Microsoft Docs"
ms.custom: ""
ms.date: "02/03/2017"
ms.technology: "cpp-windows"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "VCCORLIB/Platform::IDisposable"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::IDisposable Interface"
ms.assetid: f4344056-7030-42ed-bc98-b140edffddcd
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Platform::IDisposable Interface
Used to release unmanaged resources.  
  
## Syntax  
  
```cpp  
public interface class IDisposable  
```  
  
## Attributes  
 **GuidAttribute**("de0cbaea-8065-4a45-b196-c9d443f9bab3")  
  
 **VersionAttribute**(NTDDI_WIN8)  
  
### Members  
 The IDisposable interface inherits from the IUnknown interface. IDisposable also has the following types of members:  
  
 **Methods**  
  
 The IDisposable interface has the following methods.  
  
|Method|Description|  
|------------|-----------------|  
|Dispose|Used to release unmanaged resources.|  
  
### Requirements  
 **Minimum supported client:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Minimum supported server:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Namespace:** Platform