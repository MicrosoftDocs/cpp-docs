---
title: "COMException::HResult Property | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::COMException::HResult"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COMException::HResult Property"
ms.assetid: 53762ab5-ce71-4397-b7b4-8175741c838f
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# COMException::HResult Property
The HRESULT that corresponds to the exception.  
  
## Syntax  
  
```cpp  
public:property int HResult {    int get();}  
```  
  
## Property Value  
 An HRESULT value that specifies the error.  
  
## Remarks  
 For more information about how to interpret the HRESULT value, see [Structure of COM Error Codes](http://go.microsoft.com/fwlink/p/?LinkId=262045).  
  
## Requirements  
 **Minimum supported client:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Minimum supported server:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Namespace:** Platform  
  
 **Header:** vccorlib.h  
  
## Subsection Heading  
  
## See Also  
 [Platform::COMException Class](../cppcx/platform-comexception-class.md)