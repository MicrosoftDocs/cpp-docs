---
title: "Character Classification"
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
ms.assetid: 3b6c8f0b-9701-407a-b384-9086698773f5
caps.latest.revision: 12
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
# Character Classification
Each of these routines tests a specified single-byte character, wide character, or multibyte character for satisfaction of a condition. (By definition, the ASCII character set between 0 and 127 are a subset of all multibyte-character sets. For example, Japanese katakana includes ASCII as well as non-ASCII characters.)  
  
 The test conditions are affected by the setting of the `LC_CTYPE` category setting of the locale; see [setlocale](../VS_visualcpp/setlocale--_wsetlocale.md) for more information. The versions of these functions without the `_l` suffix use the current locale for this locale-dependent behavior; the versions with the `_l` suffix are identical except that they use the locale parameter passed in instead.  
  
 Generally these routines execute faster than tests you might write and should be favored over. For example, the following code executes slower than a call to `isalpha(c)`:  
  
```  
if ((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z'))  
    return TRUE;  
```  
  
### Character-Classification Routines  
  
|Routine|Character test condition|.NET Framework equivalent|  
|-------------|------------------------------|-------------------------------|  
|[isalnum, iswalnum, _isalnum_l, _iswalnum_l](../VS_visualcpp/isalnum--iswalnum--_isalnum_l--_iswalnum_l.md), [_ismbcalnum, _ismbcalnum_l, _ismbcalpha, _ismbcalpha_l, _ismbcdigit, _ismbcdigit_l](../VS_visualcpp/_ismbcalnum--_ismbcalnum_l--_ismbcalpha--_ismbcalpha_l--_ismbcdigit--_ismbcdigit_l.md)|Alphanumeric|[System::Char::IsLetterOrDigit](https://msdn.microsoft.com/en-us/library/system.char.isletterordigit.aspx).|  
|[_ismbcalnum, _ismbcalnum_l, _ismbcalpha, _ismbcalpha_l, _ismbcdigit, _ismbcdigit_l](../VS_visualcpp/_ismbcalnum--_ismbcalnum_l--_ismbcalpha--_ismbcalpha_l--_ismbcdigit--_ismbcdigit_l.md)|Alphanumeric|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[isalpha, iswalpha, _isalpha_l, _iswalpha_l](../VS_visualcpp/isalpha--iswalpha--_isalpha_l--_iswalpha_l.md), [_ismbcalnum, _ismbcalnum_l, _ismbcalpha, _ismbcalpha_l, _ismbcdigit, _ismbcdigit_l](../VS_visualcpp/_ismbcalnum--_ismbcalnum_l--_ismbcalpha--_ismbcalpha_l--_ismbcdigit--_ismbcdigit_l.md)|Alphabetic|[System::Char::IsLetter](https://msdn.microsoft.com/en-us/library/system.char.isletter.aspx)|  
|[isascii, __isascii, iswascii](../VS_visualcpp/isascii--__isascii--iswascii.md)|ASCII|[System::Char::IsLetter](https://msdn.microsoft.com/en-us/library/system.char.isletter.aspx)|  
|[isblank, iswblank, _isblank_l, _iswblank_l](../VS_visualcpp/isblank--iswblank--_isblank_l--_iswblank_l.md), [_ismbcsblank, _ismbcsblank_l](../VS_visualcpp/_ismbcgraph--_ismbcgraph_l--_ismbcprint--_ismbcprint_l--_ismbcpunct--_ismbcpunct_l--_ismbcblank--_ismbcblank_l--_ismbcspace--_ismbcspace_l.md)|Blank (space or horizontal tab)|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[iscntrl, iswcntrl, _iscntrl_l, _iswcntrl_l](../VS_visualcpp/iscntrl--iswcntrl--_iscntrl_l--_iswcntrl_l.md)|Control|[System::Char::IsControl](https://msdn.microsoft.com/en-us/library/system.char.iscontrol.aspx)|  
|[iscsym, iscsymf, __iscsym, \__iswcsym, \__iscsymf, \__iswcsymf, _iscsym_l, _iswcsym_l, _iscsymf_l, _iswcsymf_l](../VS_visualcpp/iscsym--iscsymf--__iscsym--__iswcsym--__iscsymf--__iswcsymf--_iscsym_l--_iswcsym_l--_iscsymf_l--_iswcsymf_l.md)|Letter, underscore, or digit|[System::Char::IsControl](https://msdn.microsoft.com/en-us/library/system.char.iscontrol.aspx)|  
|[iscsym, iscsymf, __iscsym, \__iswcsym, \__iscsymf, \__iswcsymf, _iscsym_l, _iswcsym_l, _iscsymf_l, _iswcsymf_l](../VS_visualcpp/iscsym--iscsymf--__iscsym--__iswcsym--__iscsymf--__iswcsymf--_iscsym_l--_iswcsym_l--_iscsymf_l--_iswcsymf_l.md)|Letter or underscore|[System::Char::IsControl](https://msdn.microsoft.com/en-us/library/system.char.iscontrol.aspx)|  
|[isdigit, iswdigit, _isdigit_l, _iswdigit_l](../VS_visualcpp/isdigit--iswdigit--_isdigit_l--_iswdigit_l.md), [_ismbcalnum, _ismbcalnum_l, _ismbcalpha, _ismbcalpha_l, _ismbcdigit, _ismbcdigit_l](../VS_visualcpp/_ismbcalnum--_ismbcalnum_l--_ismbcalpha--_ismbcalpha_l--_ismbcdigit--_ismbcdigit_l.md)|Decimal digit|[System::Char::IsDigit](https://msdn.microsoft.com/en-us/library/system.char.isdigit.aspx)|  
|[isgraph, iswgraph, _isgraph_l, _iswgraph_l](../VS_visualcpp/isgraph--iswgraph--_isgraph_l--_iswgraph_l.md), [_ismbcgraph, _ismbcgraph_l, _ismbcprint, _ismbcprint_l, _ismbcpunct, _ismbcpunct_l, _ismbcblank, _ismbcblank_l, _ismbcspace, _ismbcspace_l](../VS_visualcpp/_ismbcgraph--_ismbcgraph_l--_ismbcprint--_ismbcprint_l--_ismbcpunct--_ismbcpunct_l--_ismbcblank--_ismbcblank_l--_ismbcspace--_ismbcspace_l.md)|Printable other than space|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[islower, iswlower, _islower_l, _iswlower_l](../VS_visualcpp/islower--iswlower--_islower_l--_iswlower_l.md), [_ismbclower, _ismbclower_l, _ismbcupper, _ismbcupper_l](../VS_visualcpp/_ismbclower--_ismbclower_l--_ismbcupper--_ismbcupper_l.md)|Lowercase|[System::Char::IsLower](https://msdn.microsoft.com/en-us/library/system.char.islower.aspx)|  
|[_ismbchira, _ismbchira_l, _ismbckata, _ismbckata_l](../VS_visualcpp/_ismbchira--_ismbchira_l--_ismbckata--_ismbckata_l.md)|Hiragana|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_ismbchira, _ismbchira_l, _ismbckata, _ismbckata_l](../VS_visualcpp/_ismbchira--_ismbchira_l--_ismbckata--_ismbckata_l.md)|Katakana|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_ismbclegal, _ismbclegal_l, _ismbcsymbol, _ismbcsymbol_l](../VS_visualcpp/_ismbclegal--_ismbclegal_l--_ismbcsymbol--_ismbcsymbol_l.md)|Legal multibyte character|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_ismbcl0, _ismbcl0_l, _ismbcl1, _ismbcl1_l, _ismbcl2, _ismbcl2_l](../VS_visualcpp/_ismbcl0--_ismbcl0_l--_ismbcl1--_ismbcl1_l--_ismbcl2--_ismbcl2_l.md)|Japan-level 0 multibyte character|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_ismbcl0, _ismbcl0_l, _ismbcl1, _ismbcl1_l, _ismbcl2, _ismbcl2_l](../VS_visualcpp/_ismbcl0--_ismbcl0_l--_ismbcl1--_ismbcl1_l--_ismbcl2--_ismbcl2_l.md)|Japan-level 1 multibyte character|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_ismbcl0, _ismbcl0_l, _ismbcl1, _ismbcl1_l, _ismbcl2, _ismbcl2_l](../VS_visualcpp/_ismbcl0--_ismbcl0_l--_ismbcl1--_ismbcl1_l--_ismbcl2--_ismbcl2_l.md)|Japan-level 2 multibyte character|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_ismbclegal, _ismbclegal_l, _ismbcsymbol, _ismbcsymbol_l](../VS_visualcpp/_ismbclegal--_ismbclegal_l--_ismbcsymbol--_ismbcsymbol_l.md)|Non-alphanumeric multibyte character|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[isprint, iswprint, _isprint_l, _iswprint_l](../VS_visualcpp/isprint--iswprint--_isprint_l--_iswprint_l.md), [_ismbcgraph, _ismbcgraph_l, _ismbcprint, _ismbcprint_l, _ismbcpunct, _ismbcpunct_l, _ismbcblank, _ismbcblank_l, _ismbcspace, _ismbcspace_l](../VS_visualcpp/_ismbcgraph--_ismbcgraph_l--_ismbcprint--_ismbcprint_l--_ismbcpunct--_ismbcpunct_l--_ismbcblank--_ismbcblank_l--_ismbcspace--_ismbcspace_l.md)|Printable|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[ispunct, iswpunct, _ispunct_l, _iswpunct_l](../VS_visualcpp/ispunct--iswpunct--_ispunct_l--_iswpunct_l.md), [_ismbcgraph, _ismbcgraph_l, _ismbcprint, _ismbcprint_l, _ismbcpunct, _ismbcpunct_l, _ismbcblank, _ismbcblank_l, _ismbcspace, _ismbcspace_l](../VS_visualcpp/_ismbcgraph--_ismbcgraph_l--_ismbcprint--_ismbcprint_l--_ismbcpunct--_ismbcpunct_l--_ismbcblank--_ismbcblank_l--_ismbcspace--_ismbcspace_l.md)|Punctuation|[System::Char::IsPunctuation](https://msdn.microsoft.com/en-us/library/system.char.ispunctuation.aspx)|  
|[isspace, iswspace, _isspace_l, _iswspace_l](../VS_visualcpp/isspace--iswspace--_isspace_l--_iswspace_l.md), [_ismbcgraph, _ismbcgraph_l, _ismbcprint, _ismbcprint_l, _ismbcpunct, _ismbcpunct_l, _ismbcblank, _ismbcblank_l, _ismbcspace, _ismbcspace_l](../VS_visualcpp/_ismbcgraph--_ismbcgraph_l--_ismbcprint--_ismbcprint_l--_ismbcpunct--_ismbcpunct_l--_ismbcblank--_ismbcblank_l--_ismbcspace--_ismbcspace_l.md)|White-space|[System::Char::IsWhiteSpace](https://msdn.microsoft.com/en-us/library/system.char.iswhitespace.aspx)|  
|[Isupper, iswupper](../VS_visualcpp/isupper--_isupper_l--iswupper--_iswupper_l.md), [_ismbclower, _ismbclower_l, _ismbcupper, _ismbcupper_l](../VS_visualcpp/_ismbclower--_ismbclower_l--_ismbcupper--_ismbcupper_l.md)|Uppercase|[System::Char::IsUpper](https://msdn.microsoft.com/en-us/library/system.char.isupper.aspx)|  
|[_isctype, iswctype, _isctype_l, _iswctype_l](../VS_visualcpp/_isctype--iswctype--_isctype_l--_iswctype_l.md)|Property specified by `desc` argument|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[isxdigit, iswxdigit, _isxdigit_l, _iswxdigit_l](../VS_visualcpp/isxdigit--iswxdigit--_isxdigit_l--_iswxdigit_l.md)|Hexadecimal digit|[System::Char::IsNumber](https://msdn.microsoft.com/en-us/library/system.char.isnumber.aspx)|  
|[_mbclen, mblen, _mblen_l](../VS_visualcpp/_mbclen--mblen--_mblen_l.md)|Return length of valid multibyte character; result depends on `LC_CTYPE` category setting of current locale|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
  
## See Also  
 [Run-Time Routines by Category](../VS_visualcpp/Run-Time-Routines-by-Category.md)