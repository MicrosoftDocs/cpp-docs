---
title: "CFileException Class"
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
ms.assetid: f6491bb9-bfbc-42fd-a952-b33f9b62323f
caps.latest.revision: 17
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
  
 `CFileException` objects are constructed and thrown in `CFile` member functions and in member functions of derived classes. You can access these objects within the scope of a **CATCH** expression. For portability, use only the cause code to get the reason for an exception. For more information about exceptions, see the article [Exception Handling (MFC)](../VS_visualcpp/Exception-Handling-in-MFC.md).  
  
## Inheritance Hierarchy  
 [CObject](../VS_visualcpp/CObject-Class.md)  
  
 [CException](../VS_visualcpp/CException-Class.md)  
  
 `CFileException`  
  
## Requirements  
 **Header:** afx.h  
  
##  <a name="cfileexception__cfileexception"></a>  CFileException::CFileException  
 Constructs a `CFileException` object that stores the cause code and the operating-system code in the object.  
  
```  
CFileException(  
    int cause = CFileException::none,  
     LONG lOsError = -1,  
     LPCTSTR lpszArchiveName = NULL );  
```  
  
### Parameters  
 `cause`  
 An enumerated type variable that indicates the reason for the exception. See [CFileException::m_cause](#cfileexception__m_cause) for a list of the possible values.  
  
 `lOsError`  
 An operating-system-specific reason for the exception, if available. The `lOsError` parameter provides more information than `cause` does.  
  
 `lpszArchiveName`  
 Points to a string containing the name of the `CFile` object causing the exception.  
  
### Remarks  
 Do not use this constructor directly, but rather call the global function [AfxThrowFileException](../Topic/AfxThrowFileException.md).  
  
> [!NOTE]
>  The variable `lOsError` applies only to `CFile` and `CStdioFile` objects. The `CMemFile` class does not handle this error code.  
  
##  <a name="cfileexception__errnotoexception"></a>  CFileException::ErrnoToException  
 Converts a given run-time library error value to a `CFileException` enumerated error value.  
  
```  
static int PASCAL ErrnoToException( int nErrno );  
```  
  
### Parameters  
 `nErrno`  
 An integer error code as defined in the run-time include file ERRNO.H.  
  
### Return Value  
 Enumerated value that corresponds to a given run-time library error value.  
  
### Remarks  
 See [CFileException::m_cause](#cfileexception__m_cause) for a list of the possible enumerated values.  
  
### Example  
 [!CODE [NVC_MFCFiles#26](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCFiles#26)]  
  
##  <a name="cfileexception__geterrormessage"></a>  CFileException::GetErrorMessage  
 Retrieves text that describes an exception.  
  
```  
virtual BOOL GetErrorMessage(  
    LPTSTR lpszError,  
    UINT nMaxError,  
    PUINT pnHelpContext = NULL   
) const;  
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
  
 [!CODE [NVC_MFCExceptions#22](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCExceptions#22)]  
  
##  <a name="cfileexception__m_cause"></a>  CFileException::m_cause  
 Contains values defined by a `CFileException` enumerated type.  
  
```  
int m_cause;  
```  
  
### Remarks  
 This data member is a public variable of type `int`. The enumerators and their meanings are as follows:  
  
-   `CFileException::none` 0: No error occurred.  
  
-   `CFileException::genericException` 1: An unspecified error occurred.  
  
-   `CFileException::fileNotFound` 2: The file could not be located.  
  
-   `CFileException::badPath` 3: All or part of the path is invalid.  
  
-   `CFileException::tooManyOpenFiles` 4: The permitted number of open files was exceeded.  
  
-   `CFileException::accessDenied` 5: The file could not be accessed.  
  
-   `CFileException::invalidFile` 6: There was an attempt to use an invalid file handle.  
  
-   `CFileException::removeCurrentDir` 7: The current working directory cannot be removed.  
  
-   `CFileException::directoryFull` 8: There are no more directory entries.  
  
-   `CFileException::badSeek` 9: There was an error trying to set the file pointer.  
  
-   `CFileException::hardIO` 10: There was a hardware error.  
  
-   `CFileException::sharingViolation` 11: SHARE.EXE was not loaded, or a shared region was locked.  
  
-   `CFileException::lockViolation` 12: There was an attempt to lock a region that was already locked.  
  
-   `CFileException::diskFull` 14: The disk is full.  
  
-   `CFileException::endOfFile` 15: The end of file was reached.  
  
    > [!NOTE]
    >  These `CFileException` cause enumerators are distinct from the `CArchiveException` cause enumerators.  
  
    > [!NOTE]
    >  `CArchiveException::generic` is deprecated. Use `genericException` instead. If `generic` is used in an application and built with /clr, the resulting syntax errors are not easy to decipher.  
  
### Example  
 [!CODE [NVC_MFCFiles#30](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCFiles#30)]  
  
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
static int PASCAL OsErrorToException( LONG lOsError );  
```  
  
### Parameters  
 `lOsError`  
 An operating-system-specific error code.  
  
### Return Value  
 Enumerated value that corresponds to a given operating-system error value.  
  
### Example  
 [!CODE [NVC_MFCFiles#27](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCFiles#27)]  
  
##  <a name="cfileexception__throwerrno"></a>  CFileException::ThrowErrno  
 Constructs a `CFileException` object corresponding to a given `nErrno` value, then throws the exception.  
  
```  
static void PASCAL ThrowErrno(  
    int nErrno, LPCTSTR lpszFileName = NULL );  
```  
  
### Parameters  
 `nErrno`  
 An integer error code as defined in the run-time include file ERRNO.H.  
  
 `lpszFileName`  
 A pointer to the string containing the name of the file that caused the exception, if available.  
  
### Example  
 [!CODE [NVC_MFCFiles#28](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCFiles#28)]  
  
##  <a name="cfileexception__throwoserror"></a>  CFileException::ThrowOsError  
 Throws a `CFileException` corresponding to a given `lOsError` value. If the error code is unknown, then the function throws an exception coded as **CFileException::generic**.  
  
```  
static void PASCAL ThrowOsError(  
    LONG lOsError, LPCTSTR lpszFileName = NULL );  
```  
  
### Parameters  
 `lOsError`  
 An operating-system-specific error code.  
  
 `lpszFileName`  
 A pointer to the string containing the name of the file that caused the exception, if available.  
  
### Example  
 [!CODE [NVC_MFCFiles#29](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCFiles#29)]  
  
## See Also  
 [CException Class](../VS_visualcpp/CException-Class.md)   
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)   
 [Exception Processing](../VS_visualcpp/Exception-Processing.md)