---
title: "CException Class"
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
  - "CException"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COleDispatchException class, base class"
  - "CException class"
  - "exceptions, classes for"
  - "CInternetException class, base class"
  - "macros, exception handling"
  - "CNotSupportedException class, base class"
  - "CFileException class, base class"
  - "CDBException class, base class"
  - "CArchiveException class, base class"
  - "CUserException class"
  - "CDaoException class, base class"
  - "CMemoryException class, base class"
  - "COleException class, base class"
  - "CResourceException class, base class"
ms.assetid: cfacf14d-bfe4-4666-a5c7-38b800512920
caps.latest.revision: 20
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
# CException Class
The base class for all exceptions in the Microsoft Foundation Class Library.  
  
## Syntax  
  
```  
class AFX_NOVTABLE CException : public CObject  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CException::CException](#cexception__cexception)|Constructs a `CException` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CException::Delete](#cexception__delete)|Deletes a `CException` object.|  
|[CException::ReportError](#cexception__reporterror)|Reports an error message in a message box to the user.|  
  
## Remarks  
 Because `CException` is an abstract base class you cannot create `CException` objects directly; you must create objects of derived classes. If you need to create your own `CException`-style class, use one of the derived classes listed above as a model. Make sure that your derived class also uses `IMPLEMENT_DYNAMIC`.  
  
 The derived classes and their descriptions are listed below:  
  
|||  
|-|-|  
|[CSimpleException](../mfcref/csimpleexception-class.md)|A base class for resource-critical MFC exceptions|  
|[CInvalidArgException](../mfcref/cinvalidargexception-class.md)|Invalid argument exception condition|  
|[CMemoryException](../mfcref/cmemoryexception-class.md)|Out-of-memory exception|  
|[CNotSupportedException](../mfcref/cnotsupportedexception-class.md)|Request for an unsupported operation|  
|[CArchiveException](../mfcref/carchiveexception-class.md)|Archive-specific exception|  
|[CFileException](../mfcref/cfileexception-class.md)|File-specific exception|  
|[CResourceException](../mfcref/cresourceexception-class.md)|Windows resource not found or not creatable|  
|[COleException](../mfcref/coleexception-class.md)|OLE exception|  
|[CDBException](../mfcref/cdbexception-class.md)|Database exception (that is, exception conditions arising for MFC database classes based on Open Database Connectivity)|  
|[COleDispatchException](../mfcref/coledispatchexception-class.md)|OLE dispatch (automation) exception|  
|[CUserException](../mfcref/cuserexception-class.md)|Exception that indicates that a resource could not be found|  
|[CDaoException](../mfcref/cdaoexception-class.md)|Data access object exception (that is, exception conditions arising for DAO classes)|  
|[CInternetException](../mfcref/cinternetexception-class.md)|Internet exception (that is, exception conditions arising for Internet classes).|  
  
 These exceptions are intended to be used with the [THROW](../Topic/THROW%20\(MFC\).md), [THROW_LAST](../Topic/THROW_LAST.md), [TRY](../Topic/TRY.md), [CATCH](../Topic/CATCH.md), [AND_CATCH](../Topic/AND_CATCH.md), and [END_CATCH](../Topic/END_CATCH.md) macros. For more information on exceptions, see [Exception Processing](../mfcref/exception-processing.md), or see the article [Exception Handling (MFC)](../mfc/exception-handling-in-mfc.md).  
  
 To catch a specific exception, use the appropriate derived class. To catch all types of exceptions, use `CException`, and then use [CObject::IsKindOf](../mfcref/cobject-class.md#cobject__iskindof) to differentiate among `CException`-derived classes. Note that `CObject::IsKindOf` works only for classes declared with the [IMPLEMENT_DYNAMIC](../Topic/IMPLEMENT_DYNAMIC.md) macro, in order to take advantage of dynamic type checking. Any `CException`-derived class that you create should use the `IMPLEMENT_DYNAMIC` macro, too.  
  
 You can report details about exceptions to the user by calling [GetErrorMessage](../mfcref/cfileexception-class.md#cfileexception__geterrormessage) or [ReportError](#cexception__reporterror), two member functions that work with any of `CException`'s derived classes.  
  
 If an exception is caught by one of the macros, the `CException` object is deleted automatically; do not delete it yourself. If an exception is caught by using a **catch** keyword, it is not automatically deleted. See the article [Exception Handling (MFC)](../mfc/exception-handling-in-mfc.md) for more information about when to delete an exeption object.  
  
## Inheritance Hierarchy  
 [CObject](../mfcref/cobject-class.md)  
  
 `CException`  
  
## Requirements  
 **Header:** afx.h  
  
##  <a name="cexception__cexception"></a>  CException::CException  
 This member function constructs a `CException` object.  
  
```  
explicit CException( BOOL bAutoDelete );  
```  
  
### Parameters  
 *b_AutoDelete*  
 Specify **TRUE** if the memory for the `CException` object has been allocated on the heap. This will cause the `CException` object to be deleted when the **Delete** member function is called to delete the exception. Specify **FALSE** if the `CException` object is on the stack or is a global object. In this case, the `CException` object will not be deleted when the **Delete** member function is called.  
  
### Remarks  
 You would normally never need to call this constructor directly. A function that throws an exception should create an instance of a `CException`-derived class and call its constructor, or it should use one of the MFC throw functions, such as [AfxThrowFileException](../Topic/AfxThrowFileException.md), to throw a predefined type. This documentation is provided only for completeness.  
  
##  <a name="cexception__delete"></a>  CException::Delete  
 This function checks to see if the **CException** object was created on the heap, and if so, it calls the **delete** operator on the object.  
  
```  
void Delete();  
```  
  
### Remarks  
 When deleting a **CException** object, use the **Delete** member function to delete the exception. Do not use the **delete** operator directly, because the `CException` object may be a global object or have been created on the stack.  
  
 You can specify whether the object should be deleted when the object is constructed. For more information, see [CException::CException](#cexception__cexception).  
  
 You only need to call **Delete** if you are using the C++ **try**- **catch** mechanism. If you are using the MFC macros **TRY** and **CATCH**, then these macros will automatically call this function.  
  
### Example  
 [!code[NVC_MFCExceptions#21](../mfc/codesnippet/CPP/cexception-class_1.cpp)]  
  
##  <a name="cexception__reporterror"></a>  CException::ReportError  
 Call this member function to report error text in a message box to the user.  
  
```  
virtual int ReportError(  
    UINT nType = MB_OK,  
    UINT nMessageID = 0  );  
```  
  
### Parameters  
 `nType`  
 Specifies the style of the message box. Apply any combination of the [message-box styles](../mfcref/message-box-styles.md) to the box. If you don't specify this parameter, the default is **MB_OK**.  
  
 *nMessageID*  
 Specifies the resource ID (string table entry) of a message to display if the exception object does not have an error message. If 0, the message "No error message is available" is displayed.  
  
### Return Value  
 An `AfxMessageBox` value; otherwise 0 if there is not enough memory to display the message box. See [AfxMessageBox](../Topic/AfxMessageBox.md) for the possible return values.  
  
### Example  
 Here is an example of the use of `CException::ReportError`. For another example, see the example for [CATCH](../Topic/CATCH.md).  
  
 [!code[NVC_MFCExceptions#23](../mfc/codesnippet/CPP/cexception-class_2.cpp)]  
  
## See Also  
 [CObject Class](../mfcref/cobject-class.md)   
 [Hierarchy Chart](../mfc/hierarchy-chart.md)   
 [Exception Processing](../mfcref/exception-processing.md)   
 [How Do I: Create my Own Custom Exception Classes?](http://go.microsoft.com/fwlink/?LinkId=128045)