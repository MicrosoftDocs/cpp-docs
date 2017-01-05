---
title: "String Conversion Macros | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
ms.assetid: 2ff7c0b6-2bde-45fe-897f-6128e18e0c27
caps.latest.revision: 16
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
# String Conversion Macros
These macros provide string conversion features.  
  
|||  
|-|-|  
|[ATL and MFC String Conversion Macros](http://msdn.microsoft.com/library/8f53659e-0464-4424-97db-6b8453c49863)|Set of macros that convert between string types.|  
|[DEVMODE and TEXTMETRIC String Conversion Macros](http://msdn.microsoft.com/library/85cebec0-2a18-48e5-9c1c-99d5b7f15425)|Set of macros that convert the strings within `DEVMODE` and `TEXTMETRIC` structures.|  
  
##  <a name="atl_and_mfc_string_conversion_macros"></a>  ATL and MFC String Conversion Macros  
 The string conversion macros discussed here are valid for both ATL and MFC. For more information on MFC string conversion, see [TN059: Using MFC MBCS/Unicode Conversion Macros](../../mfc/tn059-using-mfc-mbcs-unicode-conversion-macros.md) and [MFC Macros and Globals](../../mfc/reference/mfc-macros-and-globals.md).  
  
##  <a name="devmode_and_textmetric_string_conversion_macros"></a>  DEVMODE and TEXTMETRIC String Conversion Macros  
 These macros create a copy of a [DEVMODE](http://msdn.microsoft.com/library/windows/desktop/dd183565) or [TEXTMETRIC](http://msdn.microsoft.com/library/windows/desktop/dd145132) structure and convert the strings within the new structure to a new string type. The macros allocate memory on the stack for the new structure and return a pointer to the new structure.  
  
```
MACRONAME( address_of_structure )
```  
  
### Remarks  
 For example:  
  
 [!code-cpp[NVC_ATL_Utilities#128](../../atl/codesnippet/cpp/string-conversion-macros_1.cpp)]  
  
 and:  
  
 [!code-cpp[NVC_ATL_Utilities#129](../../atl/codesnippet/cpp/string-conversion-macros_2.cpp)]  
  
 In the macro names, the string type in the source structure is on the left (for example, **A**) and the string type in the destination structure is on the right (for example, **W**). **A** stands for **LPSTR**, **OLE** stands for `LPOLESTR`, **T** stands for `LPTSTR`, and **W** stands for `LPWSTR`.  
  
 Thus, `DEVMODEA2W` copies a `DEVMODE` structure with **LPSTR** strings into a `DEVMODE` structure with `LPWSTR` strings, `TEXTMETRICOLE2T` copies a `TEXTMETRIC` structure with `LPOLESTR` strings into a `TEXTMETRIC` structure with `LPTSTR` strings, and so on.  
  
 The two strings converted in the `DEVMODE` structure are the device name ( **dmDeviceName**) and the form name ( **dmFormName**). The `DEVMODE` string conversion macros also update the structure size ( **dmSize**).  
  
 The four strings converted in the `TEXTMETRIC` structure are the first character ( **tmFirstChar**), the last character ( **tmLastChar**), the default character ( **tmDefaultChar**), and the break character ( **tmBreakChar**).  
  
 The behavior of the `DEVMODE` and `TEXTMETRIC` string conversion macros depends on the compiler directive in effect, if any. If the source and destination types are the same, no conversion takes place. Compiler directives change **T** and **OLE** as follows:  
  
|Compiler directive in effect|T becomes|OLE becomes|  
|----------------------------------|---------------|-----------------|  
|none|**A**|**W**|  
|**_UNICODE**|**W**|**W**|  
|**OLE2ANSI**|**A**|**A**|  
|**_UNICODE** and **OLE2ANSI**|**W**|**A**|  
  
 The following table lists the `DEVMODE` and `TEXTMETRIC` string conversion macros.  
  
### DEVMODE and TEXTMETRIC String Conversion Macros  
  
|||  
|-|-|  
|`DEVMODEA2W`|`TEXTMETRICA2W`|  
|`DEVMODEOLE2T`|`TEXTMETRICOLE2T`|  
|`DEVMODET2OLE`|`TEXTMETRICT2OLE`|  
|`DEVMODEW2A`|`TEXTMETRICW2A`|  
  
## See Also  
 [Macros](../../atl/reference/atl-macros.md)

