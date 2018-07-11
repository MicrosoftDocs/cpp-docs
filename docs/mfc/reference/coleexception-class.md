---
title: "COleException Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["COleException", "AFXDISP/COleException", "AFXDISP/COleException::Process", "AFXDISP/COleException::m_sc"]
dev_langs: ["C++"]
helpviewer_keywords: ["COleException [MFC], Process", "COleException [MFC], m_sc"]
ms.assetid: 2571e9fe-26cc-42f0-9ad9-8ad5b4311ec1
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# COleException Class
Represents an exception condition related to an OLE operation.  
  
## Syntax  
  
```  
class COleException : public CException  
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[COleException::Process](#process)|Translates a caught exception into an OLE return code.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[COleException::m_sc](#m_sc)|Contains the status code that indicates the reason for the exception.|  
  
## Remarks  
 The `COleException` class includes a public data member that holds the status code indicating the reason for the exception.  
  
 In general, you should not create a `COleException` object directly; instead, you should call [AfxThrowOleException](exception-processing.md#afxthrowoleexception).  
  
 For more information on exceptions, see the articles [Exception Handling (MFC)](../../mfc/exception-handling-in-mfc.md) and [Exceptions: OLE Exceptions](../../mfc/exceptions-ole-exceptions.md).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CException](../../mfc/reference/cexception-class.md)  
  
 `COleException`  
  
## Requirements  
 **Header:** afxdisp.h  
  
##  <a name="m_sc"></a>  COleException::m_sc  
 This data member holds the OLE status code that indicates the reason for the exception.  
  
```  
SCODE m_sc;  
```  
  
### Remarks  
 This variable's value is set by [AfxThrowOleException](exception-processing.md#afxthrowoleexception).  
  
 For more information on SCODE, see [Structure of COM Error Codes](http://msdn.microsoft.com/library/windows/desktop/ms690088) in the Windows SDK.  
  
### Example  
 [!code-cpp[NVC_MFCOleContainer#22](../../mfc/codesnippet/cpp/coleexception-class_1.cpp)]  
  
##  <a name="process"></a>  COleException::Process  
 Call the **Process** member function to translate a caught exception into an OLE status code.  
  
```  
static SCODE PASCAL Process(const CException* pAnyException);
```  
  
### Parameters  
 *pAnyException*  
 Pointer to a caught exception.  
  
### Return Value  
 An OLE status code.  
  
### Remarks  
  
> [!NOTE]
>  This function is **static**.  
  
 For more information on SCODE, see [Structure of COM Error Codes](http://msdn.microsoft.com/library/windows/desktop/ms690088) in the Windows SDK.  
  
### Example  
  See the example for [COleDispatchDriver::CreateDispatch](../../mfc/reference/coledispatchdriver-class.md#createdispatch).  
  
## See Also  
 [MFC Sample CALCDRIV](../../visual-cpp-samples.md)   
 [CException Class](../../mfc/reference/cexception-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)



