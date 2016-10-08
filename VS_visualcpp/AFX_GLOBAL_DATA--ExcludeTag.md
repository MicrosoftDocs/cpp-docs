---
title: "AFX_GLOBAL_DATA::ExcludeTag"
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
ms.assetid: dc68cc0b-106e-4908-a0e0-92e6ab1d855e
caps.latest.revision: 9
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
# AFX_GLOBAL_DATA::ExcludeTag
Removes the specified XML tag pair from a specified buffer.  
  
## Syntax  
  
```  
BOOL ExcludeTag(  
   CString& strBuffer,  
   LPCTSTR lpszTag,  
   CString& strTag,  
   BOOL bIsCharsList = FALSE  
);  
```  
  
#### Parameters  
 [in] `strBuffer`  
 A buffer of text.  
  
 [in] `lpszTag`  
 The name of a pair of opening and closing XML tags.  
  
 [out] `strTag`  
 When this method returns, the `strTag` parameter contains the text that is between the opening and closing XML tags that are named by the `lpszTag` parameter. Any leading or trailing whitespace is trimmed from the result.  
  
 [in] `bIsCharsList`  
 `TRUE` to convert symbols for escape characters in the `strTag` parameter into actual escape characters; `FALSE` not to perform the conversion.The default value is `FALSE`. For more information, see Remarks.  
  
## Return Value  
 `TRUE` if this method is successful; otherwise, `FALSE`.  
  
## Remarks  
 An XML tag pair consists of named opening and closing tags that indicate the start and end of a run of text in the specified buffer. The `strBuffer` parameter specifies the buffer, and the `lpszTag` parameter specifies the name of the XML tags.  
  
 Use the symbols in the following table to encode a set of escape characters in the specified buffer. Specify `TRUE` for the `bIsCharsList` parameter to convert the symbols in the `strTag` parameter into actual escape characters. The following table uses the [_T()](../VS_visualcpp/Data-Type-Mappings.md) macro to specify the symbol and escape character strings.  
  
|Symbol|Escape character|  
|------------|----------------------|  
|_T("\\\t")|_T("\t")|  
|_T("\\\n")|_T("\n")|  
|_T("\\\r")|_T("\r")|  
|_T("\\\b")|_T("\b")|  
|_T("LT")|_T("<")|  
|_T("GT")|_T(">")|  
|_T("AMP")|_T("&")|  
  
## Requirements  
 **Header:** afxglobals.h  
  
## See Also  
 [AFX_GLOBAL_DATA Structure](../VS_visualcpp/AFX_GLOBAL_DATA-Structure.md)   
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)   
 [Data Type Mappings](../VS_visualcpp/Data-Type-Mappings.md)