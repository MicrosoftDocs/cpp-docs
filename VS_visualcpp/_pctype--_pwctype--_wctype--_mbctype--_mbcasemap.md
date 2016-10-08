---
title: "_pctype, _pwctype, _wctype, _mbctype, _mbcasemap"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
  - C
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 7f5e1107-c43b-4b9b-b387-781e6d2373cb
caps.latest.revision: 9
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# _pctype, _pwctype, _wctype, _mbctype, _mbcasemap
These global variables contain information used by the character classification functions. They are for internal use only.  
  
## Syntax  
  
```  
extern const unsigned short *_pctype;  
extern const wctype_t *_pwctype;  
extern const unsigned short _wctype[];  
extern unsigned char _mbctype[];  
extern unsigned char _mbcasemap[];  
```  
  
## Remarks  
 The information in `_pctype`, `_pwctype`, and `_wctype` is used internally by functions [isupper, _isupper_l, iswupper, _iswupper_l](../VS_visualcpp/isupper--_isupper_l--iswupper--_iswupper_l.md), [islower, iswlower, _islower_l, _iswlower_l](../VS_visualcpp/islower--iswlower--_islower_l--_iswlower_l.md), [isdigit, iswdigit, _isdigit_l, _iswdigit_l](../VS_visualcpp/isdigit--iswdigit--_isdigit_l--_iswdigit_l.md), [isxdigit, iswxdigit, _isxdigit_l, _iswxdigit_l](../VS_visualcpp/isxdigit--iswxdigit--_isxdigit_l--_iswxdigit_l.md), [isspace, iswspace, _isspace_l, _iswspace_l](../VS_visualcpp/isspace--iswspace--_isspace_l--_iswspace_l.md), [isalnum, iswalnum, _isalnum_l, _iswalnum_l](../VS_visualcpp/isalnum--iswalnum--_isalnum_l--_iswalnum_l.md), [ispunct, iswpunct, _ispunct_l, _iswpunct_l](../VS_visualcpp/ispunct--iswpunct--_ispunct_l--_iswpunct_l.md), [isgraph, iswgraph, _isgraph_l, _iswgraph_l](../VS_visualcpp/isgraph--iswgraph--_isgraph_l--_iswgraph_l.md), and [iscntrl, iswcntrl, _iscntrl_l, _iswcntrl_l](../VS_visualcpp/iscntrl--iswcntrl--_iscntrl_l--_iswcntrl_l.md), as well as the [toupper, _toupper, towupper, _toupper_l, _towupper_l](../VS_visualcpp/toupper--_toupper--towupper--_toupper_l--_towupper_l.md) and [tolower, _tolower, towlower, _tolower_l, _towlower_l](../VS_visualcpp/tolower--_tolower--towlower--_tolower_l--_towlower_l.md) functions. These functions should be used instead of accessing these global variables.  
  
 The information in `_mbctype` and `_mbcasemap` is used internally by [_ismbbkalnum, _ismbbkalnum_l](../VS_visualcpp/_ismbbkalnum--_ismbbkalnum_l.md), [_ismbbkana, _ismbbkana_l](../VS_visualcpp/_ismbbkana--_ismbbkana_l.md), [_ismbbkpunct, _ismbbkpunct_l](../VS_visualcpp/_ismbbkpunct--_ismbbkpunct_l.md), [_ismbbkprint, _ismbbkprint_l](../VS_visualcpp/_ismbbkprint--_ismbbkprint_l.md), [_ismbbalpha](assetId:///8e54cb92-fc2b-41f5-8ab4-b22ac8aa9ad0), [_ismbbpunct, _ismbbpunct_l](../VS_visualcpp/_ismbbpunct--_ismbbpunct_l.md), [_ismbbalnum, _ismbbalnum_l](../VS_visualcpp/_ismbbalnum--_ismbbalnum_l.md), [_ismbbprint, _ismbbprint_l](../VS_visualcpp/_ismbbprint--_ismbbprint_l.md), [_ismbbgraph, _ismbbgraph_l](../VS_visualcpp/_ismbbgraph--_ismbbgraph_l.md), [_ismbblead, _ismbblead_l](../VS_visualcpp/_ismbblead--_ismbblead_l.md), [_ismbbtrail, _ismbbtrail_l](../VS_visualcpp/_ismbbtrail--_ismbbtrail_l.md), [_ismbslead, _ismbstrail, _ismbslead_l, _ismbstrail_l](../VS_visualcpp/_ismbslead--_ismbstrail--_ismbslead_l--_ismbstrail_l.md), and [_ismbslead, _ismbstrail, _ismbslead_l, _ismbstrail_l](../VS_visualcpp/_ismbslead--_ismbstrail--_ismbslead_l--_ismbstrail_l.md). Use these functions instead of accessing the global variables.  
  
## Requirements  
 Not for public use.  
  
## See Also  
 [is, isw Routines](../VS_visualcpp/is--isw-Routines.md)   
 [__pctype_func](../VS_visualcpp/__pctype_func.md)