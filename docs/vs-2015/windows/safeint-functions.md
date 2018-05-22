---
title: "SafeInt Functions | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "functions, SafeInt"
ms.assetid: fdc208e5-5d8a-41a9-8271-567fd438958d
caps.latest.revision: 15
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# SafeInt Functions
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [SafeInt Functions](https://docs.microsoft.com/cpp/windows/safeint-functions).  
  
The SafeInt library provides several functions that you can use without creating an instance of the [SafeInt Class](../windows/safeint-class.md). If you want to protect a single mathematical operation from integer overflow, you can use these functions. If you want to protect multiple mathematical operations, you should create `SafeInt` objects. It is more efficient to create `SafeInt` objects than to use these functions multiple times.  
  
 These functions enable you to compare or perform mathematical operations on two different types of parameters without having to convert them to the same type first.  
  
 Each of these functions has two template types: `T` and `U`. Each of these types can be a Boolean, character, or integral type. Integral types can be signed or unsigned and any size from 8 bits to 64 bits.  
  
## In This Section  
  
|Function|Description|  
|--------------|-----------------|  
|[SafeAdd](../windows/safeadd.md)|Adds two numbers and protects against overflow.|  
|[SafeCast](../windows/safecast.md)|Casts one type of parameter to another type.|  
|[SafeDivide](../windows/safedivide.md)|Divides two numbers and protects against dividing by zero.|  
|[SafeEquals](../windows/safeequals.md), [SafeGreaterThan](../windows/safegreaterthan.md), [SafeGreaterThanEquals](../windows/safegreaterthanequals.md), [SafeLessThan](../windows/safelessthan.md), [SafeLessThanEquals](../windows/safelessthanequals.md), [SafeNotEquals](../windows/safenotequals.md)|Compares two numbers. These functions enable you to compare two different types of numbers without changing their types.|  
|[SafeModulus](../windows/safemodulus.md)|Performs the modulus operation on two numbers.|  
|[SafeMultiply](../windows/safemultiply.md)|Multiplies two numbers together and protects against overflow.|  
|[SafeSubtract](../windows/safesubtract.md)|Subtracts two numbers and protects against overflow.|  
  
## Related Sections  
  
|Section|Description|  
|-------------|-----------------|  
|[SafeInt Class](../windows/safeint-class.md)|The `SafeInt` class.|  
|[SafeIntException Class](../windows/safeintexception-class.md)|The exception class specific to the SafeInt library.|



