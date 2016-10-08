---
title: "COleException Class"
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
ms.assetid: 2571e9fe-26cc-42f0-9ad9-8ad5b4311ec1
caps.latest.revision: 18
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
|[COleException::Process](#coleexception__process)|Translates a caught exception into an OLE return code.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[COleException::m_sc](#coleexception__m_sc)|Contains the status code that indicates the reason for the exception.|  
  
## Remarks  
 The `COleException` class includes a public data member that holds the status code indicating the reason for the exception.  
  
 In general, you should not create a `COleException` object directly; instead, you should call [AfxThrowOleException](../Topic/AfxThrowOleException.md).  
  
 For more information on exceptions, see the articles [Exception Handling (MFC)](../VS_visualcpp/Exception-Handling-in-MFC.md) and [Exceptions: OLE Exceptions](../VS_visualcpp/Exceptions--OLE-Exceptions.md).  
  
## Inheritance Hierarchy  
 [CObject](../VS_visualcpp/CObject-Class.md)  
  
 [CException](../VS_visualcpp/CException-Class.md)  
  
 `COleException`  
  
## Requirements  
 **Header:** afxdisp.h  
  
##  <a name="coleexception__m_sc"></a>  COleException::m_sc  
 This data member holds the OLE status code that indicates the reason for the exception.  
  
```  
SCODE m_sc;  
```  
  
### Remarks  
 This variable's value is set by [AfxThrowOleException](../Topic/AfxThrowOleException.md).  
  
 For more information on `SCODE`, see                         [Structure of COM Error Codes](http://msdn.microsoft.com/library/windows/desktop/ms690088) in the Windows SDK.  
  
### Example  
 [!CODE [NVC_MFCOleContainer#22](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCOleContainer#22)]  
  
##  <a name="coleexception__process"></a>  COleException::Process  
 Call the **Process** member function to translate a caught exception into an OLE status code.  
  
```  
static SCODE PASCAL Process( const CException* pAnyException );  
```  
  
### Parameters  
 *pAnyException*  
 Pointer to a caught exception.  
  
### Return Value  
 An OLE status code.  
  
### Remarks  
  
> [!NOTE]
>  This function is **static**.  
  
 For more information on `SCODE`, see                         [Structure of COM Error Codes](http://msdn.microsoft.com/library/windows/desktop/ms690088) in the Windows SDK.  
  
### Example  
  See the example for [COleDispatchDriver::CreateDispatch](../VS_visualcpp/COleDispatchDriver-Class.md#coledispatchdriver__createdispatch).  
  
## See Also  
 [MFC Sample CALCDRIV](../VS_visualcpp/Visual-C---Samples.md)   
 [CException Class](../VS_visualcpp/CException-Class.md)   
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)