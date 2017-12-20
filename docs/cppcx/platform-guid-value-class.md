---
title: "Platform::Guid value class | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.technology: "cpp-windows"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "VCCORLIB/Platform::Guid"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::Guid Struct"
ms.assetid: 25c0bfb2-7f93-44d8-bdf4-ef4fbac3424a
caps.latest.revision: 6
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
ms.workload: 
  - "cplusplus"
---
# Platform::Guid value class
Represents a [GUID](http://msdn.microsoft.com/library/windows/desktop/aa373931\(v=vs.85\).aspx) type in the Windows Runtime type system.  
  
## Syntax  
  
```cpp  
public value struct Guid  
```  
  
### Members  
 Guid has the Equals(), GetHashCode(), and ToString() methods derived from the [Platform::Object Class](../cppcx/platform-object-class.md), and the GetTypeCode() method derived from the [Platform::Type Class](../cppcx/platform-type-class.md). Guid also has the following members.  
  
|Member|Description|  
|------------|-----------------|  
|[Guid](#ctor)|Initializes a new instance of the Guid struct.|  
|[operator==](#operator-equality)|Equals operator.|  
|[operator!=](#operator-not-equal)|Not equals operator.|  
|[operator()](#operator-call)|Converts a Guid to a GUID.|  
  
### Remarks  
 For an example of how to generate a new Platform::Guid using the Windows function [CoCreateGuid](http://msdn.microsoft.com/library/windows/desktop/ms688568\(v=vs.85\).aspx), see [WinRT component: How to generate a GUID?](http://blogs.msdn.com/b/eternalcoding/archive/2013/03/25/winrt-component-how-to-generate-a-guid.aspx)  
  
### Requirements  
 **Minimum supported client:** Windows 8  
  
 **Minimum supported server:** Windows Server 2012  
  
 **Namespace:** Platform  
  
 **Metadata:** platform.winmd  

 
## <a name="ctor"></a> Guid::Guid Constructors
Initializes a new instance of a Guid struct.  
  
### Syntax  
  
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
        unsigned char k  );  
  
    Guid(GUID m);  
  
    Guid(  
        unsigned int a,   
        unsigned short b,   
        unsigned short c,   
        Array<unsigned char>^ n );  
```  
  
### Parameters  
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
  

## <a name="operator-equality"></a> Guid::operator== Operator
Compares two guids.  
  
### Syntax  
  
```cpp  
Platform::Guid::operator==  
```  
  
### Return Value  
 True if the two guids are equal.

## <a name="operator-inequality"></a> Guid::operator!= Operator
Compares two guids.  
  
### Syntax  
  
```cpp  
Platform::Guid::operator!=  
```  
  
### Return Value  
 True if the two guids are not equal.



## <a name="operator-call"></a> Guid::operator() Operator
Implicitly converts a [GUID structure](http://msdn.microsoft.com/library/windows/desktop/aa373931\(v=vs.85\).aspx)GUID to a Platform::Guid.  
  
### Syntax  
  
```cpp  
Platform::Guid operator()  
```  
  
### Return Value  
 A Guid struct.  
  
  
## See Also  
 [Platform namespace](../cppcx/platform-namespace-c-cx.md)