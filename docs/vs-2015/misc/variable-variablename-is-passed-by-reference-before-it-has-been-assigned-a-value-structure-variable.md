---
title: "Variable &#39;&lt;variablename&gt;&#39; is passed by reference before it has been assigned a value (Structure Variable) | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc42108"
  - "vbc42108"
helpviewer_keywords: 
  - "BC42108"
ms.assetid: 8f858dd7-db04-408e-ae67-e4ff2f0e5e30
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Variable &#39;&lt;variablename&gt;&#39; is passed by reference before it has been assigned a value (Structure Variable)
Variable '\<variablename>' is passed by reference before it has been assigned a value. A null reference exception could result at runtime. Make sure the structure or all the reference members are initialized before use  
  
 A procedure call passes a structure variable as an argument to a `ByRef` parameter before any value is assigned to the variable.  
  
 If a structure variable has never been assigned a value, each structure member holds the default value for its data type. For a reference data type, that default value is [Nothing](http://msdn.microsoft.com/library/06176e2d-bbf7-4a37-afaa-a86ad21ee99f). Reading a reference member that has a value of `Nothing` can cause a <xref:System.NullReferenceException> in some circumstances.  
  
 Passing an argument to a procedure `ByRef` exposes the variable underlying the argument to possible modification by the procedure.  
  
 By default, this message is a warning. For more information about hiding warnings or treating warnings as errors, please see [Configuring Warnings in Visual Basic](http://msdn.microsoft.com/library/99cf4781-bd4d-47b4-91b9-217933509f82).  
  
 **Error ID:** BC42108  
  
### To correct this error  
  
-   If you intend the procedure to assign values to structure members through the `ByRef` argument, and if it does not matter whether the members already hold values, then no action is necessary.  
  
-   If the logic in the procedure reads a structure member before assigning any value to it, and if the member is of a value type, then make sure that the procedure logic does not depend on whether the member holds its default value or not.  
  
-   If the logic in the procedure reads a structure member before assigning any value to it, and if the member is of a reference type, then make sure that the procedure logic can handle a value of `Nothing`. For example, it could use a [Try...Catch...Finally Statement](http://msdn.microsoft.com/library/d6488026-ccb3-42b8-a810-0d97b9d6472b) to catch a <xref:System.NullReferenceException>.  
  
## See Also  
 [Dim Statement](http://msdn.microsoft.com/library/fae3eca1-f0b2-4400-994b-7aa58a848448)   
 [Value Types and Reference Types](http://msdn.microsoft.com/library/fc82ce15-5a40-4c5c-a1e1-a556830e7391)   
 [Passing Arguments by Value and by Reference](http://msdn.microsoft.com/library/fd8a9de6-7178-44d5-a9bf-458d4ad907c2)   
 [ByRef](http://msdn.microsoft.com/library/4692e032-46f3-4e41-b0fa-3004364d9138)   
 [Variable Declaration](http://msdn.microsoft.com/library/d8f10226-92b1-480f-9f53-df377b2d7e15)   
 [Structures](http://msdn.microsoft.com/library/55e86462-5e99-4d33-8018-6d097ca491b2)   
 [Structure Statement](http://msdn.microsoft.com/library/9bd1deea-2a89-4cdc-812c-6dcbb947c391)   
 [Troubleshooting Variables](http://msdn.microsoft.com/library/928a2dc8-e565-4ae4-8ba3-80cc0cb50090)