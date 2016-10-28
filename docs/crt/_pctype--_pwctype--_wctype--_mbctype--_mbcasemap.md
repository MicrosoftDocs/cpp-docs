---
title: "_pctype, _pwctype, _wctype, _mbctype, _mbcasemap"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "pwctype"
  - "pctype"
  - "mbctype"
  - "mbcasemap"
  - "_mbcasemap"
  - "_mbctype"
  - "_pctype"
  - "_wctype"
  - "_pcwtype"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_wctype function"
  - "_pwctype function"
  - "_pctype function"
  - "_mbctype function"
  - "wctype function"
  - "pwctype function"
  - "pctype function"
  - "mbcasemap function"
  - "mbctype function"
  - "_mbcasemap function"
ms.assetid: 7f5e1107-c43b-4b9b-b387-781e6d2373cb
caps.latest.revision: 9
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
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
 The information in `_pctype`, `_pwctype`, and `_wctype` is used internally by functions [isupper, _isupper_l, iswupper, _iswupper_l](../crt/isupper--_isupper_l--iswupper--_iswupper_l.md), [islower, iswlower, _islower_l, _iswlower_l](../crt/islower--iswlower--_islower_l--_iswlower_l.md), [isdigit, iswdigit, _isdigit_l, _iswdigit_l](../crt/isdigit--iswdigit--_isdigit_l--_iswdigit_l.md), [isxdigit, iswxdigit, _isxdigit_l, _iswxdigit_l](../crt/isxdigit--iswxdigit--_isxdigit_l--_iswxdigit_l.md), [isspace, iswspace, _isspace_l, _iswspace_l](../crt/isspace--iswspace--_isspace_l--_iswspace_l.md), [isalnum, iswalnum, _isalnum_l, _iswalnum_l](../crt/isalnum--iswalnum--_isalnum_l--_iswalnum_l.md), [ispunct, iswpunct, _ispunct_l, _iswpunct_l](../crt/ispunct--iswpunct--_ispunct_l--_iswpunct_l.md), [isgraph, iswgraph, _isgraph_l, _iswgraph_l](../crt/isgraph--iswgraph--_isgraph_l--_iswgraph_l.md), and [iscntrl, iswcntrl, _iscntrl_l, _iswcntrl_l](../crt/iscntrl--iswcntrl--_iscntrl_l--_iswcntrl_l.md), as well as the [toupper, _toupper, towupper, _toupper_l, _towupper_l](../crt/toupper--_toupper--towupper--_toupper_l--_towupper_l.md) and [tolower, _tolower, towlower, _tolower_l, _towlower_l](../crt/tolower--_tolower--towlower--_tolower_l--_towlower_l.md) functions. These functions should be used instead of accessing these global variables.  
  
 The information in `_mbctype` and `_mbcasemap` is used internally by [_ismbbkalnum, _ismbbkalnum_l](../crt/_ismbbkalnum--_ismbbkalnum_l.md), [_ismbbkana, _ismbbkana_l](../crt/_ismbbkana--_ismbbkana_l.md), [_ismbbkpunct, _ismbbkpunct_l](../crt/_ismbbkpunct--_ismbbkpunct_l.md), [_ismbbkprint, _ismbbkprint_l](../crt/_ismbbkprint--_ismbbkprint_l.md), [_ismbbalpha](assetId:///8e54cb92-fc2b-41f5-8ab4-b22ac8aa9ad0), [_ismbbpunct, _ismbbpunct_l](../crt/_ismbbpunct--_ismbbpunct_l.md), [_ismbbalnum, _ismbbalnum_l](../crt/_ismbbalnum--_ismbbalnum_l.md), [_ismbbprint, _ismbbprint_l](../crt/_ismbbprint--_ismbbprint_l.md), [_ismbbgraph, _ismbbgraph_l](../crt/_ismbbgraph--_ismbbgraph_l.md), [_ismbblead, _ismbblead_l](../crt/_ismbblead--_ismbblead_l.md), [_ismbbtrail, _ismbbtrail_l](../crt/_ismbbtrail--_ismbbtrail_l.md), [_ismbslead, _ismbstrail, _ismbslead_l, _ismbstrail_l](../crt/_ismbslead--_ismbstrail--_ismbslead_l--_ismbstrail_l.md), and [_ismbslead, _ismbstrail, _ismbslead_l, _ismbstrail_l](../crt/_ismbslead--_ismbstrail--_ismbslead_l--_ismbstrail_l.md). Use these functions instead of accessing the global variables.  
  
## Requirements  
 Not for public use.  
  
## See Also  
 [is, isw Routines](../crt/is--isw-routines.md)   
 [__pctype_func](../crt/__pctype_func.md)