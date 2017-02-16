---
title: "Platform::Array Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vccorlib/Platform::Array"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::Array Class"
ms.assetid: 7815ab40-88c5-42b0-83b8-081cef0cda31
caps.latest.revision: 9
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Platform::Array Class
Represents a one-dimensional, modifiable array that can be received and passed across the application binary interface (ABI).  
  
## Syntax  
  
```cpp  
  
template <typename T>  
    private ref class Array<TArg,1> :   
         public WriteOnlyArray<TArg, 1>,  
         public IBoxArray<TArg>  
  
```  
  
## Members  
 Platform::Array inherits all its methods from [Platform::WriteOnlyArray Class](../cppcx/platform-writeonlyarray-class.md) and implements the `Value` property of the [Platform::IBoxArray Interface](../cppcx/platform-iboxarray-interface.md).  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[Array Constructors](../cppcx/array-constructors.md)|Initializes a one-dimensional, modifiable array of types specified by the class template parameter, *T*.|  
  
### Methods  
 See [Platform::WriteOnlyArray Class](../cppcx/platform-writeonlyarray-class.md).  
  
### Properties  
  
|||  
|-|-|  
|[Array::Value Property](../cppcx/array-value-property.md)|Retrieves a handle to the current array.|  
  
## Remarks  
 The Array class is sealed and cannot be inherited.  
  
 The Windows Runtime type system does not support the concept of jagged arrays and therefore you cannot pass an IVector<Platform::Array\<T>> as a return value or method parameter. To pass a jagged array or a sequence of sequences across the ABI, use `IVector<IVector<T>^>`.  
  
 For more information about when and how to use Platform::Array, see [Array and WriteOnlyArray](../cppcx/array-and-writeonlyarray-c-cx.md).  
  
 The Windows Runtime type system does not support the concept of jagged arrays and therefore you cannot pass an IVector<Platform::Array\<T>> as a return value or method parameter. To pass a jagged array or a sequence of sequences across the ABI, use `IVector<IVector<T>^>`.  
  
 This class is defined in the vccorlib.h header, which is automatically included by the compiler. It is visible in Intellisense but not in Object Browser because it is not a public type defined in platform.winmd.  
  
## Requirements  
 Compiler option: **/ZW**  
  
## See Also  
 [Platform namespace](../cppcx/platform-namespace-c-cx.md)   
 [Array and WriteOnlyArray](../cppcx/array-and-writeonlyarray-c-cx.md)