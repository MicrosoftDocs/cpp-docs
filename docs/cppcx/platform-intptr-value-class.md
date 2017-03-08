---
title: "Platform::IntPtr value class | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::IntPtr"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::IntPtr Struct"
ms.assetid: 6c0326e8-edfd-4e53-a963-240b845dcde8
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Platform::IntPtr value class
Represents an signed pointer or handle, and whose size is platform-specific (32-bit or 64-bit).  
  
## Syntax  
  
```cpp  
public value struct IntPtr  
```  
  
## Members  
 IntPtr has the following members:  
  
|Member|Description|  
|------------|-----------------|  
|[IntPtr::IntPtr Constructor](#ctor)|Initializes a new instance of IntPtr.|  
|[IntPtr::op_explicit Operator](#op-explicit)|Converts the specified parameter to an IntPtr or a pointer to an IntPtr value.|  
|[IntPtr::ToInt32 Method](#toint32)|Converts the current IntPtr to a 32-bit integer.|  
  
## Requirements  
 **Minimum supported client:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Minimum supported server:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Namespace:** Platform  
  
 **Metadata:** platform.winmd  

## <a name="ctor"> </a> IntPtr::IntPtr Constructor
Initializes a new instance of an IntPtr with the specified value.  
  
### Syntax  
  
```cpp  
IntPtr( __int64 handle-or-pointer );   IntPtr( void* value );   IntPtr( int 32-bit_value );  
```  
  
### Parameters  
 value  
 A 64-bit handle or pointer, or a pointer to a 64-bit value, or a 32-bit value that can be converted to a 64-bit value.  
  


## <a name="op_explicit"> </a> IntPtr::op_explicit Operator
Converts the specified parameter to an IntPtr or a pointer to an IntPtr value.  
  
### Syntax  
  
```cpp  
static IntPtr::operator IntPtr( void* value1);   static IntPtr::operator IntPtr( int value2);   static IntPtr::operator void*( IntPtr value3 );  
```  
  
### Parameters  
 value1  
 A pointer to a handle or IntPtr.  
  
 value2  
 An 32-bit integer that can be converted to an IntPtr.  
  
 value3  
 An IntPtr.  
  
### Return Value  
 The first and second operators return an IntPtr. The third operator returns a pointer to the value represented by the current IntPtr.  
  


## <a name="toint32"> </a> IntPtr::ToInt32 Method
Converts the current IntPtr value to a 32-bit integer.  
  
### Syntax  
  
```cpp  
int32 IntPtr::ToInt32();  
```  
  
### Return Value  
 A 32-bit integer.  
  
  
## See Also  
 [Platform namespace](../cppcx/platform-namespace-c-cx.md)