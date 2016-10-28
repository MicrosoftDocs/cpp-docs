---
title: "CUserException Class"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "reference"
f1_keywords: 
  - "CUserException"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operations [C++], stopping"
  - "exceptions, throwing"
  - "CUserException class"
  - "errors [C++], trapping"
  - "operations [C++]"
  - "throwing exceptions, stopping user operations"
ms.assetid: 2156ba6d-2cce-415a-9000-6f02c26fcd7d
caps.latest.revision: 19
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
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
  
 [!code[NVC_MFCExceptions#24](../mfc/codesnippet/CPP/cuserexception-class_1.cpp)]  
  
 For more information on using `CUserException`, see the article [Exception Handling (MFC)](../mfc/exception-handling-in-mfc.md).  
  
## Inheritance Hierarchy  
 [CObject](../mfcref/cobject-class.md)  
  
 [CException](../mfcref/cexception-class.md)  
  
 [CSimpleException](../mfcref/csimpleexception-class.md)  
  
 `CUserException`  
  
## Requirements  
 **Header:** afxwin.h  
  
## See Also  
 [Hierarchy Chart](../mfc/hierarchy-chart.md)   
 [CException Class](../mfcref/cexception-class.md)   
 [AfxMessageBox](../Topic/AfxMessageBox.md)   
 [AfxThrowUserException](../Topic/AfxThrowUserException.md)   
 [How Do I: Create my Own Custom Exception Classes?](http://go.microsoft.com/fwlink/?LinkId=128045)