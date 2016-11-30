---
title: "CSimpleException Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CSimpleException"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CSimpleException class"
ms.assetid: be0eb8ef-e5b9-47d6-b0fb-efaff2d1e666
caps.latest.revision: 19
author: "mikeblome"
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
# CSimpleException Class
This class is a base class for resource-critical MFC exceptions.  
  
## Syntax  
  
```  
class AFX_NOVTABLE CSimpleException : public CException  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CSimpleException::CSimpleException](#csimpleexception__csimpleexception)|The constructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CSimpleException::GetErrorMessage](#csimpleexception__geterrormessage)|Provides text about an error that has occurred.|  
  
## Remarks  
 `CSimpleException` is the base class for resource-critical MFC exceptions and handles the ownership and initialization of an error message. The following classes use `CSimpleException` as their base class:  
  
|||  
|-|-|  
|[CMemoryException Class](../../mfc/reference/cmemoryexception-class.md)|Out-of-memory exception|  
|[CNotSupportedException Class](../../mfc/reference/cnotsupportedexception-class.md)|Requests for an unsupported operation|  
|[CResourceException Class](../../mfc/reference/cresourceexception-class.md)|Windows resource not found or not creatable|  
|[CUserException Class](../../mfc/reference/cuserexception-class.md)|Exception that indicates a resource could not be found|  
|[CInvalidArgException Class](../../mfc/reference/cinvalidargexception-class.md)|Exception that indicates an invalid argument|  
  
 Because `CSimpleException` is an abstract base class, you cannot declare a `CSimpleException` object directly. Instead, you must declare derived objects such as those in the previous table. If you are declaring your own derived class, use the previous classes as a model.  
  
 For more information, see the [CException Class](../../mfc/reference/cexception-class.md) topic and [Exception Handling (MFC)](../../mfc/exception-handling-in-mfc.md).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CException](../../mfc/reference/cexception-class.md)  
  
 `CSimpleException`  
  
## Requirements  
 **Header:** afx.h  
  
##  <a name="csimpleexception__csimpleexception"></a>  CSimpleException::CSimpleException  
 The constructor.  
  
```  
CSimpleException();

 
explicit CSimpleException(BOOL bAutoDelete);
```  
  
### Parameters  
 `bAutoDelete`  
 Specify **TRUE** if the memory for the `CSimpleException` object has been allocated on the heap. This will cause the `CSimpleException` object to be deleted when the **Delete** member function is called to delete the exception. Specify **FALSE** if the `CSimpleException` object is on the stack or is a global object. In this case, the `CSimpleException` object will not be deleted when the **Delete** member function is called.  
  
### Remarks  
 You would normally never need to call this constructor directly. A function that throws an exception should create an instance of a `CException`-derived class and call its constructor, or it should use one of the MFC throw functions, such as [AfxThrowFileException]--brokenlink--(exception-processing.md#afxthrowfileexception), to throw a predefined type.  
  
##  <a name="csimpleexception__geterrormessage"></a>  CSimpleException::GetErrorMessage  
 Call this member function to provide text about an error that has occurred.  
  
```  
virtual BOOL GetErrorMessage(
    LPTSTR lpszError,
    UINT  nMaxError,
    PUNIT  pnHelpContext = NULL);
```  
  
### Parameters  
 `lpszError`  
 A pointer to a buffer that will receive an error message.  
  
 `nMaxError`  
 The maximum number of characters the buffer can hold, including the **NULL** terminator.  
  
 `pnHelpContext`  
 The address of a **UINT** that will receive the help context ID. If **NULL**, no ID will be returned.  
  
### Return Value  
 Nonzero if the function is successful; otherwise 0 if no error message text is available.  
  
### Remarks  
 For more information, see [CException::GetErrorMessage](../../mfc/reference/cfileexception-class.md#cfileexception__geterrormessage).  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CException Class](../../mfc/reference/cexception-class.md)   
 [Exception Handling](../../mfc/exception-handling-in-mfc.md)



