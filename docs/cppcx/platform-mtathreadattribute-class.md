---
title: "Platform::MTAThreadAttribute Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.technology: "cpp-windows"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "VCCORLIB/Platform::MTAThreadAttribute::Equals"
  - "VCCORLIB/Platform::MTAThreadAttribute::GetHashCode"
  - "VCCORLIB/Platform::MTAThreadAttribute::ToString"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::MTAThreadAttribute Class"
ms.assetid: bfc546a7-4333-4407-85b4-4721565e1f44
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
ms.workload: 
  - "cplusplus"
---
# Platform::MTAThreadAttribute Class
Indicates that the threading model for an application is multi-threaded apartment (MTA).  
  
## Syntax  
  
```  
public ref class MTAThreadAttribute sealed : Attribute  
```  
  
### Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[MTAThreadAttribute Constructor 1](#ctor) constructor|Initializes a new instance of the class.|  
  
### Public Methods  
 The MTAThreadAttribute attribute inherits from [Platform::Object Class](../cppcx/platform-object-class.md). MTAThreadAttribute also overloads or has the following members:  
  
|Name|Description|  
|----------|-----------------|  
|[MTAThreadAttribute::Equals](#equals)|Determines whether the specified object is equal to the current object.|  
|[MTAThreadAttribute::GetHashCode](#gethashcode)|Returns the hash code for this instance.|  
|[MTAThreadAttribute::ToString](#tostring)|Returns a string that represents the current object.|  
  
## Inheritance Hierarchy  
 `Platform`  
  
### Requirements  
 **Metadata:** platform.winmd  
  
 **Namespace:** Platform  



## <a name="ctor"></a> MTAThreadAttribute Constructor
Initializes a new instance of the MTAThreadAttribute class.  
  
### Syntax  
  
```cpp  
public:MTAThreadAttribute()  
```  
  


## <a name="equals"></a> MTAThreadAttribute::Equals
Determines whether the specified object is equal to the current object.  
  
### Syntax  
  
```cpp  
public:virtual override bool Equals(  Object^ obj)  
```  
  
### Parameters  
 obj  
 The object to compare.  
  
### Return Value  
 `true` if the objects are equal; otherwise, `false`.  
  


## <a name="gethashcode"></a> MTAThreadAttribute::GetHashCode
Returns the hash code for this instance.  
  
### Syntax  
  
```cpp  
public:int GetHashCode()  
```  
  
### Return Value  
 The hash code for this instance.  
  


## <a name="tostring"></a> MTAThreadAttribute::ToString
Returns a string that represents the current object.  
  
### Syntax  
  
```cpp  
public:String^ ToString()  
```  
  
### Return Value  
 A string that represents the current object.  
    
## See Also  
 [Platform Namespace](platform-namespace-c-cx.md)