---
title: "Exception Handling in MFC"
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
ms.topic: article
ms.assetid: 0926627d-2ba7-44a6-babe-d851a4a2517c
caps.latest.revision: 10
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
# Exception Handling in MFC
This article explains the exception-handling mechanisms available in MFC. Two mechanisms are available:  
  
-   C++ exceptions, available in MFC version 3.0 and later  
  
-   The MFC exception macros, available in MFC versions 1.0 and later  
  
 If you're writing a new application using MFC, you should use the C++ mechanism. You can use the macro-based mechanism if your existing application already uses that mechanism extensively.  
  
 You can readily convert existing code to use C++ exceptions instead of the MFC exception macros. Advantages of converting your code and guidelines for doing so are described in the article [Exceptions: Converting from MFC Exception Macros](../VS_visualcpp/Exceptions--Converting-from-MFC-Exception-Macros.md).  
  
 If you have already developed an application using the MFC exception macros, you can continue using these macros in your existing code, while using C++ exceptions in your new code. The article [Exceptions: Changes to Exception Macros in Version 3.0](../VS_visualcpp/Exceptions--Changes-to-Exception-Macros-in-Version-3.0.md) gives guidelines for doing so.  
  
> [!NOTE]
>  To enable C++ exception handling in your code, select Enable C++ Exceptions on the Code Generation page in the C/C++ folder of the project's [Property Pages](../VS_visualcpp/Property-Pages--Visual-C---.md) dialog box, or use the /GX compiler option. The default is /GX–, which disables exception handling.  
  
 This article covers the following topics:  
  
-   [When to use exceptions](#_core_when_to_use_exceptions)  
  
-   [MFC exception support](#_core_mfc_exception_support)  
  
-   [Further reading about exceptions](#_core_further_reading_about_exceptions)  
  
##  <a name="_core_when_to_use_exceptions"></a> When to Use Exceptions  
 Three categories of outcomes can occur when a function is called during program execution: normal execution, erroneous execution, or abnormal execution. Each category is described below.  
  
-   Normal execution  
  
     The function may execute normally and return. Some functions return a result code to the caller, which indicates the outcome of the function. The possible result codes are strictly defined for the function and represent the range of possible outcomes of the function. The result code can indicate success or failure or can even indicate a particular type of failure that is within the normal range of expectations. For example, a file-status function can return a code that indicates that the file does not exist. Note that the term "error code" is not used because a result code represents one of many expected outcomes.  
  
-   Erroneous execution  
  
     The caller makes some mistake in passing arguments to the function or calls the function in an inappropriate context. This situation causes an error, and it should be detected by an assertion during program development. (For more information on assertions, see [C/C++ Assertions](../Topic/C-C++%20Assertions.md).)  
  
-   Abnormal execution  
  
     Abnormal execution includes situations where conditions outside the program's control, such as low memory or I/O errors, are influencing the outcome of the function. Abnormal situations should be handled by catching and throwing exceptions.  
  
 Using exceptions is especially appropriate for abnormal execution.  
  
##  <a name="_core_mfc_exception_support"></a> MFC Exception Support  
 Whether you use the C++ exceptions directly or use the MFC exception macros, you will use [CException Class](../VS_visualcpp/CException-Class.md) or `CException`-derived objects that may be thrown by the framework or by your application.  
  
 The following table shows the predefined exceptions provided by MFC.  
  
|Exception class|Meaning|  
|---------------------|-------------|  
|[CMemoryException Class](../VS_visualcpp/CMemoryException-Class.md)|Out-of-memory|  
|[CFileException Class](../VS_visualcpp/CFileException-Class.md)|File exception|  
|[CArchiveException Class](../VS_visualcpp/CArchiveException-Class.md)|Archive/Serialization exception|  
|[CNotSupportedException Class](../VS_visualcpp/CNotSupportedException-Class.md)|Response to request for unsupported service|  
|[CResourceException Class](../VS_visualcpp/CResourceException-Class.md)|Windows resource allocation exception|  
|[CDaoException Class](../VS_visualcpp/CDaoException-Class.md)|Database exceptions (DAO classes)|  
|[CDBException Class](../VS_visualcpp/CDBException-Class.md)|Database exceptions (ODBC classes)|  
|[COleException Class](../VS_visualcpp/COleException-Class.md)|OLE exceptions|  
|[COleDispatchException Class](../VS_visualcpp/COleDispatchException-Class.md)|Dispatch (automation) exceptions|  
|[CUserException Class](../VS_visualcpp/CUserException-Class.md)|Exception that alerts the user with a message box, then throws a generic [CException Class](../VS_visualcpp/CException-Class.md)|  
  
> [!NOTE]
>  MFC supports both C++ exceptions and the MFC exception macros. MFC does not directly support Windows NT structured exception handlers (SEH), as discussed in [Structured Exception Handling](http://msdn.microsoft.com/library/windows/desktop/ms680657).  
  
##  <a name="_core_further_reading_about_exceptions"></a> Further Reading About Exceptions  
 The following articles explain using the MFC library for exception handing:  
  
-   [Exceptions: Catching and Deleting Exceptions](../VS_visualcpp/Exceptions--Catching-and-Deleting-Exceptions.md)  
  
-   [Exceptions: Examining Exception Contents](../VS_visualcpp/Exceptions--Examining-Exception-Contents.md)  
  
-   [Exceptions: Freeing Objects in Exceptions](../VS_visualcpp/Exceptions--Freeing-Objects-in-Exceptions.md)  
  
-   [Exceptions: Throwing Exceptions from Your Own Functions](../VS_visualcpp/Exceptions--Throwing-Exceptions-from-Your-Own-Functions.md)  
  
-   [Exceptions: Database Exceptions](../VS_visualcpp/Exceptions--Database-Exceptions.md)  
  
-   [Exceptions: OLE Exceptions](../VS_visualcpp/Exceptions--OLE-Exceptions.md)  
  
 The following articles compare the MFC exception macros with the C++ exception keywords and explain how you can adapt your code:  
  
-   [Exceptions: Changes to Exception Macros in Version 3.0](../VS_visualcpp/Exceptions--Changes-to-Exception-Macros-in-Version-3.0.md)  
  
-   [Exceptions: Converting from MFC Exception Macros](../VS_visualcpp/Exceptions--Converting-from-MFC-Exception-Macros.md)  
  
-   [Exceptions: Using MFC Macros and C++ Exceptions](../VS_visualcpp/Exceptions--Using-MFC-Macros-and-C---Exceptions.md)  
  
## See Also  
 [C++ Exception Handling](../VS_visualcpp/C---Exception-Handling.md)   
 [How Do I: Create my Own Custom Exception Classes?](http://go.microsoft.com/fwlink/?LinkId=128045)