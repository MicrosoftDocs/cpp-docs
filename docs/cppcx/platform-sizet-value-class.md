---
title: "Platform::SizeT value class | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: ['VCCORLIB/PlatformSizeT::SizeT constructor']
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::SizeT Struct"
ms.assetid: 0803612c-8ba1-430c-9b7b-1bebae88608d
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Platform::SizeT value class
Represents the size of an object. SizeT is an unsigned data type.  
  
## Syntax  
  
```cpp  
public ref class SizeT sealed : ValueType  
```  
  
### Members  
  
|Member|Description|  
|------------|-----------------|  
|[SizeT::SizeT constructor](#ctor)|Initializes a new instance of the class with the specified value.|  
  
### Requirements  
 **Minimum supported client:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Minimum supported server:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Namespace:** Platform  
  
 **Metadata:** platform.winmd  

 ## <a name="ctor"></a>  SizeT::SizeT constructor
Initializes a new instance of SizeT with the specified value.  
  
### Syntax  
  
```cpp  
SizeT( uint32 value1 );   SizeT( void* value2 );  
```  
  
### Parameters  
 value1  
 An unsigned 32-bit value.  
  
 value2  
 Pointer to an unsigned 32-bit value.  
  
  
## See Also  
 [Platform namespace](../cppcx/platform-namespace-c-cx.md)