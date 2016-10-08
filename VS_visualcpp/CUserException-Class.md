---
title: "CUserException Class"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: 2156ba6d-2cce-415a-9000-6f02c26fcd7d
caps.latest.revision: 19
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# CUserException Class
Thrown to stop an end-user operation.  
  
## Syntax  
  
```  
class CUserException : public CSimpleException  
```  
  
## Remarks  
 Use `CUserException` when you want to use the throw/catch exception mechanism for application-specific exceptions. "User" in the class name can be interpreted as "my user did something exceptional that I need to handle."  
  
 A `CUserException` is usually thrown after calling the global function `AfxMessageBox` to notify the user that an operation has failed. When you write an exception handler, handle the exception specially since the user usually has already been notified of the failure. The framework throws this exception in some cases. To throw a `CUserException` yourself, alert the user and then call the global function `AfxThrowUserException`.  
  
 In the example below, a function containing operations that may fail alerts the user and throws a `CUserException`. The calling function catches the exception and handles it specially:  
  
 [!CODE [NVC_MFCExceptions#24](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCExceptions#24)]  
  
 For more information on using `CUserException`, see the article [Exception Handling (MFC)](../VS_visualcpp/Exception-Handling-in-MFC.md).  
  
## Inheritance Hierarchy  
 [CObject](../VS_visualcpp/CObject-Class.md)  
  
 [CException](../VS_visualcpp/CException-Class.md)  
  
 [CSimpleException](../VS_visualcpp/CSimpleException-Class.md)  
  
 `CUserException`  
  
## Requirements  
 **Header:** afxwin.h  
  
## See Also  
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)   
 [CException Class](../VS_visualcpp/CException-Class.md)   
 [AfxMessageBox](../Topic/AfxMessageBox.md)   
 [AfxThrowUserException](../Topic/AfxThrowUserException.md)   
 [How Do I: Create my Own Custom Exception Classes?](http://go.microsoft.com/fwlink/?LinkId=128045)