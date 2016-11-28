---
title: "CFileException Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CFileException"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CFile class, exceptions of"
  - "exceptions, file type"
  - "CFileException class"
ms.assetid: f6491bb9-bfbc-42fd-a952-b33f9b62323f
caps.latest.revision: 20
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
# CFileException Class
Represents a file-related exception condition.  
  
## Syntax  
  
```  
class CFileException : public CException  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CFileException::CFileException](#cfileexception__cfileexception)|Constructs a `CFileException` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CFileException::ErrnoToException](#cfileexception__errnotoexception)|Returns cause code corresponding to a run-time error number.|  
|[CFileException::GetErrorMessage](#cfileexception__geterrormessage)|Retrieves the message describing an exception.|  
|[CFileException::OsErrorToException](#cfileexception__oserrortoexception)|Returns a cause code corresponding to an operating system error code.|  
|[CFileException::ThrowErrno](#cfileexception__throwerrno)|Throws a file exception based on a runtime error number.|  
|[CFileException::ThrowOsError](#cfileexception__throwoserror)|Throws a file exception based on an operating system error number.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CFileException::m_cause](#cfileexception__m_cause)|Contains portable code corresponding to the exception cause.|  
|[CFileException::m_lOsError](#cfileexception__m_loserror)|Contains the related operating-system error number.|  
|[CFileException::m_strFileName](#cfileexception__m_strfilename)|Contains the name of the file for this exception.|  
  
## Remarks  
 The `CFileException` class includes public data members that hold the portable cause code and the operating-system-specific error number. The class also provides static member functions for throwing file exceptions and for returning cause codes for both operating-system errors and C run-time errors.  
  
 `CFileException` objects are constructed and thrown in `CFile` member functions and in member functions of derived classes. You can access these objects within the scope of a **CATCH** expression. For portability, use only the cause code to get the reason for an exception. For more information about exceptions, see the article [Exception Handling (MFC)](../../mfc/exception-handling-in-mfc.md).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CException](../../mfc/reference/cexception-class.md)  
  
 `CFileException`  
  
## Requirements  
 **Header:** afx.h  
  
##  <a name="cfileexception__cfileexception"></a>  CFileException::CFileException  
 Constructs a `CFileException` object that stores the cause code and the operating-system code in the object.  
  
```  
CFileException(
    int cause = CFileException::none,  
    LONG lOsError = -1,  
    LPCTSTR lpszArchiveName = NULL);
```  
  
### Parameters  
 `cause`  
 An enumerated type variable that indicates the reason for the exception. See [CFileException::m_cause](#cfileexception__m_cause) for a list of the possible values.  
  
 `lOsError`  
 An operating-system-specific reason for the exception, if available. The `lOsError` parameter provides more information than `cause` does.  
  
 `lpszArchiveName`  
 Points to a string containing the name of the `CFile` object causing the exception.  
  
### Remarks  
 Do not use this constructor directly, but rather call the global function [AfxThrowFileException](exception-processing.md#afxthrowfileexception).  
  
> [!NOTE]
>  The variable `lOsError` applies only to `CFile` and `CStdioFile` objects. The `CMemFile` class does not handle this error code.  
  
##  <a name="cfileexception__errnotoexception"></a>  CFileException::ErrnoToException  
 Converts a given run-time library error value to a `CFileException` enumerated error value.  
  
```  
static int PASCAL ErrnoToException(int nErrno);
```  
  
### Parameters  
 `nErrno`  
 An integer error code as defined in the run-time include file ERRNO.H.  
  
### Return Value  
 Enumerated value that corresponds to a given run-time library error value.  
  
### Remarks  
 See [CFileException::m_cause](#cfileexception__m_cause) for a list of the possible enumerated values.  
  
### Example  
 [!code-cpp[NVC_MFCFiles#26](../../atl-mfc-shared/reference/codesnippet/cpp/cfileexception-class_1.cpp)]  
  
##  <a name="cfileexception__geterrormessage"></a>  CFileException::GetErrorMessage  
 Retrieves text that describes an exception.  
  
```  
virtual BOOL GetErrorMessage(
    LPTSTR lpszError,  
    UINT nMaxError,  
    PUINT pnHelpContext = NULL) const;

 
```  
  
### Parameters  
 [in, out] `lpszError`  
 Pointer to a buffer that receives an error message.  
  
 [in] `nMaxError`  
 The maximum number of characters the specified buffer can hold. This includes the terminating null character.  
  
 [in, out] `pnHelpContext`  
 Pointer to an unsigned integer that receives the help context ID. If `NULL`, no ID is returned.  
  
### Return Value  
 `TRUE` if the method was successful; otherwise `FALSE`.  
  
### Remarks  
 If the specified buffer is too small, the error message is truncated.  
  
### Example  
 The following example uses `CFileException::GetErrorMessage`.  
  
 [!code-cpp[NVC_MFCExceptions#22](../../mfc/codesnippet/cpp/cfileexception-class_2.cpp)]  
  
##  <a name="cfileexception__m_cause"></a>  CFileException::m_cause  
 Contains values defined by a `CFileException` enumerated type.  
  
```  
int m_cause;  
```  
  
### Remarks  
 This data member is a public variable of type `int`. The enumerators and their meanings are as follows:  
  
- `CFileException::none` 0: No error occurred.  
  
- `CFileException::genericException` 1: An unspecified error occurred.  
  
- `CFileException::fileNotFound` 2: The file could not be located.  
  
- `CFileException::badPath` 3: All or part of the path is invalid.  
  
- `CFileException::tooManyOpenFiles` 4: The permitted number of open files was exceeded.  
  
- `CFileException::accessDenied` 5: The file could not be accessed.  
  
- `CFileException::invalidFile` 6: There was an attempt to use an invalid file handle.  
  
- `CFileException::removeCurrentDir` 7: The current working directory cannot be removed.  
  
- `CFileException::directoryFull` 8: There are no more directory entries.  
  
- `CFileException::badSeek` 9: There was an error trying to set the file pointer.  
  
- `CFileException::hardIO` 10: There was a hardware error.  
  
- `CFileException::sharingViolation` 11: SHARE.EXE was not loaded, or a shared region was locked.  
  
- `CFileException::lockViolation` 12: There was an attempt to lock a region that was already locked.  
  
- `CFileException::diskFull` 14: The disk is full.  
  
- `CFileException::endOfFile` 15: The end of file was reached.  
  
    > [!NOTE]
    >  These `CFileException` cause enumerators are distinct from the `CArchiveException` cause enumerators.  
  
    > [!NOTE]
    > `CArchiveException::generic` is deprecated. Use `genericException` instead. If `generic` is used in an application and built with /clr, the resulting syntax errors are not easy to decipher.  
  
### Example  
 [!code-cpp[NVC_MFCFiles#30](../../atl-mfc-shared/reference/codesnippet/cpp/cfileexception-class_3.cpp)]  
  
##  <a name="cfileexception__m_loserror"></a>  CFileException::m_lOsError  
 Contains the operating-system error code for this exception.  
  
```  
LONG m_lOsError;  
```  
  
### Remarks  
 See your operating-system technical manual for a listing of error codes. This data member is a public variable of type **LONG**.  
  
##  <a name="cfileexception__m_strfilename"></a>  CFileException::m_strFileName  
 Contains the name of the file for this exception condition.  
  
```  
CString m_strFileName;  
```  
  
##  <a name="cfileexception__oserrortoexception"></a>  CFileException::OsErrorToException  
 Returns an enumerator that corresponds to a given `lOsError` value. If the error code is unknown, then the function returns **CFileException::generic**.  
  
```  
static int PASCAL OsErrorToException(LONG lOsError);
```  
  
### Parameters  
 `lOsError`  
 An operating-system-specific error code.  
  
### Return Value  
 Enumerated value that corresponds to a given operating-system error value.  
  
### Example  
 [!code-cpp[NVC_MFCFiles#27](../../atl-mfc-shared/reference/codesnippet/cpp/cfileexception-class_4.cpp)]  
  
##  <a name="cfileexception__throwerrno"></a>  CFileException::ThrowErrno  
 Constructs a `CFileException` object corresponding to a given `nErrno` value, then throws the exception.  
  
```  
static void PASCAL ThrowErrno(
    int nErrno, LPCTSTR lpszFileName = NULL);
```  
  
### Parameters  
 `nErrno`  
 An integer error code as defined in the run-time include file ERRNO.H.  
  
 `lpszFileName`  
 A pointer to the string containing the name of the file that caused the exception, if available.  
  
### Example  
 [!code-cpp[NVC_MFCFiles#28](../../atl-mfc-shared/reference/codesnippet/cpp/cfileexception-class_5.cpp)]  
  
##  <a name="cfileexception__throwoserror"></a>  CFileException::ThrowOsError  
 Throws a `CFileException` corresponding to a given `lOsError` value. If the error code is unknown, then the function throws an exception coded as **CFileException::generic**.  
  
```  
static void PASCAL ThrowOsError(
    LONG lOsError, LPCTSTR lpszFileName = NULL);
```  
  
### Parameters  
 `lOsError`  
 An operating-system-specific error code.  
  
 `lpszFileName`  
 A pointer to the string containing the name of the file that caused the exception, if available.  
  
### Example  
 [!code-cpp[NVC_MFCFiles#29](../../atl-mfc-shared/reference/codesnippet/cpp/cfileexception-class_6.cpp)]  
  
## See Also  
 [CException Class](../../mfc/reference/cexception-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Exception Processing](../../mfc/reference/exception-processing.md)



