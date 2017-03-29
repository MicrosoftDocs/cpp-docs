---
title: "Platform::ArrayReference Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: ['VCCORLIB/Platform::ArrayReference::ArrayReference']
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::ArrayReference Class"
ms.assetid: 9ab3b15e-8a60-4600-8fcb-7d6c86284f4b
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Platform::ArrayReference Class
`ArrayReference` is an optimization type that you can substitute for [Platform::Array^](../cppcx/platform-array-class.md) in input parameters when you want to fill a C-style array with the input data.  
  
## Syntax  
  
```cpp  
class ArrayReference  
```
  
### Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[ArrayReference::ArrayReference](#ctor)|Initializes a new instance of the `ArrayReference` class.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[ArrayReference::operator() Operator](#operator-call)|Converts this `ArrayReference` to a `Platform::Array<T>^*`.|  
|[ArrayReference::operator= Operator](#operator-assign)|Assigns the contents of another `ArrayReference` to this instance.|  
  
## Exceptions  
  
### Remarks  
 By using `ArrayReference` to fill a C-style array, you avoid the extra copy operation that would be involved in copying first to a `Platform::Array` variable, and then into the C-style array. When you use `ArrayReference`, there is only one copy operation. For a code example, see [Array and WriteOnlyArray](../cppcx/array-and-writeonlyarray-c-cx.md).  
  
### Requirements  
 **Minimum supported client:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Minimum supported server:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Namespace:** Platform  
  
 **Header:** vccorlib.h  
  
## <a name="ctor"></a>  ArrayReference::ArrayReference Constructor
Initializes a new instance of the [Platform::ArrayReference](../cppcx/platform-arrayreference-class.md) class.  
  
### Syntax  
  
```cpp  
ArrayReference(TArg* ataArg, unsigned int sizeArg, bool needsInitArg = false);  
ArrayReference(ArrayReference&& otherArg)  
  
```  
  
### Parameters  
 `dataArg`  
 A pointer to the array data.  
  
 `sizeArg`  
 The number of elements in the source array.  
  
 `otherArg`  
 An `ArrayReference` object whose data will be moved to initialize the new instance.  
  
### Remarks  
  


## <a name="operator-assign"></a>  ArrayReference::operator= Operator
Assigns the specified object to the current [Platform::ArrayReference](../cppcx/platform-arrayreference-class.md) object by using move semantics.  
  
### Syntax  
  
```cpp  
  
ArrayReference& operator=(ArrayReference&& otherArg);  
  
```  
  
### Parameters  
 `otherArg`  
 The object that is moved to the current `ArrayReference` object.  
  
### Return Value  
 A reference to an object of type `ArrayReference`.  
  
### Remarks  
 `Platform::ArrayReference` is a standard C++ class template, not a ref class.  
  


## <a name="operator-call"></a>  ArrayReference::operator() Operator
Converts the current [Platform::ArrayReference](../cppcx/platform-arrayreference-class.md) object back to a [Platform::Array](../cppcx/platform-array-class.md) class.  
  
### Syntax  
  
```cpp  
  
Array<TArg>^ operator ();  
  
```  
  
### Return Value  
 A handle-to-object of type `Array<TArg>^`  
  
### Remarks  
 [Platform::ArrayReference](../cppcx/platform-arrayreference-class.md) and [Platform::Array](../cppcx/platform-array-class.md) are standard C++ class templates, not ref classes.  
  


  
  
## See Also  
 [Platform namespace](../cppcx/platform-namespace-c-cx.md)