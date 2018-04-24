---
title: "String Conversion Macros | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
ms.assetid: 2ff7c0b6-2bde-45fe-897f-6128e18e0c27
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# String Conversion Macros
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [String Conversion Macros](https://docs.microsoft.com/cpp/atl/reference/string-conversion-macros).  
  
  
These macros provide string conversion features.  
  
|||  
|-|-|  
|[ATL and MFC String Conversion Macros](../Topic/ATL%20and%20MFC%20String%20Conversion%20Macros.md)|Set of macros that convert between string types.|  
|[DEVMODE and TEXTMETRIC String Conversion Macros](../Topic/DEVMODE%20and%20TEXTMETRIC%20String%20Conversion%20Macros.md)|Set of macros that convert the strings within `DEVMODE` and `TEXTMETRIC` structures.|  
  
##  <a name="atl_and_mfc_string_conversion_macros"></a>  ATL and MFC String Conversion Macros  
 The string conversion macros discussed here are valid for both ATL and MFC. For more information on MFC string conversion, see [TN059: Using MFC MBCS/Unicode Conversion Macros](../../mfc/tn059-using-mfc-mbcs-unicode-conversion-macros.md) and [MFC Macros and Globals](../../mfc/reference/mfc-macros-and-globals.md).  
  
- [ATL 7.0 String Conversion Classes and Macros](#atl70stringconversionclassesmacros)  
  
- [ATL 3.0 String Conversion Macros](#atl30stringconversionmacros)  
  
##  <a name="devmode_and_textmetric_string_conversion_macros"></a>  DEVMODE and TEXTMETRIC String Conversion Macros  
 These macros create a copy of a [DEVMODE](http://msdn.microsoft.com/library/windows/desktop/dd183565) or [TEXTMETRIC](http://msdn.microsoft.com/library/windows/desktop/dd145132) structure and convert the strings within the new structure to a new string type. The macros allocate memory on the stack for the new structure and return a pointer to the new structure.  
  
```
MACRONAME(Â
    address_of_structure Â)
```  
  
### Remarks  
 For example:  
  
 [!code-cpp[NVC_ATL_Utilities#128](../../snippets/cpp/VS_Snippets_Cpp/NVC_ATL_Utilities/Cpp/NVC_ATL_Utilities.cpp#128)]  
  
 and:  
  
 [!code-cpp[NVC_ATL_Utilities#129](../../snippets/cpp/VS_Snippets_Cpp/NVC_ATL_Utilities/Cpp/NVC_ATL_Utilities.cpp#129)]  
  
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







