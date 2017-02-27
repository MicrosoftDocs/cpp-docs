---
title: "Platform::WriteOnlyArray Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::WriteOnlyArray"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::WriteOnlyArray Class"
ms.assetid: 92d7dd56-ec58-4b8c-88ba-9c903668b687
caps.latest.revision: 11
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Platform::WriteOnlyArray Class
Represents a one-dimensional array that's used as an input parameter when the caller passes an array for the method to fill.  
  
 This ref class is declared as private in vccorlib.h; therefore, it's not emitted in metadata and is only consumable from C++. This class is intended only for use as an input parameter that receives an array that the caller has allocated. It is not constructible from user code. It enables a C++ method to write directly into that array—a pattern that's known as the *FillArray* pattern. For more information, see [Array and WriteOnlyArray](../cppcx/array-and-writeonlyarray-c-cx.md).  
  
## Syntax  
  
```cpp  
private ref class WriteOnlyArray<T, 1>  
```  
  
## Members  
  
### Public Methods  
 These methods have internal accessibility—that is, they are only accessible within the C++ app or component.  
  
|Name|Description|  
|----------|-----------------|  
|[WriteOnlyArray::begin Method](../cppcx/writeonlyarray-begin-method.md)|An iterator that points to the first element of the array.|  
|[WriteOnlyArray::Data Property](../cppcx/writeonlyarray-data-property.md)|A pointer to the data buffer.|  
|[WriteOnlyArray::end Method](../cppcx/writeonlyarray-end-method.md)|An iterator that points to one past the last element in the array.|  
|[WriteOnlyArray::FastPass Property](../cppcx/writeonlyarray-fastpass-property.md)|Indicates whether the array can use the FastPass mechanism, which is an optimization transparently performed by the system. Don’t use this in your code|  
|[WriteOnlyArray::Length Property](../cppcx/writeonlyarray-length-property.md)|Returns the number of elements in the array.|  
|[WriteOnlyArray::set Function](../cppcx/writeonlyarray-set-function.md)|Sets the specified element to the specified value.|  
  
## Inheritance Hierarchy  
 `WriteOnlyArray`  
  
## Requirements  
 Compiler option: **/ZW**  
  
 **Metadata:** Platform.winmd  
  
 **Namespace:** Platform  
  
## See Also  
 [Platform Namespace](platform-namespace-c-cx.md)   
 [Creating Windows Runtime Components in C++](/MicrosoftDocs/windows-uwp/blob/docs/windows-apps-src/winrt-components/creating-windows-runtime-components-in-cpp.md)