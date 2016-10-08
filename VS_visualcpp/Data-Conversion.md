---
title: "Data Conversion"
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
ms.assetid: b15b5268-7467-49f1-bf95-5299b598f94c
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
# Data Conversion
These routines convert data from one form to another. Generally these routines execute faster than conversions you might write. Each routine that begins with a `to` prefix is implemented as a function and as a macro. See [Choosing Between Functions and Macros](../VS_visualcpp/Recommendations-for-Choosing-Between-Functions-and-Macros.md) for information about choosing an implementation.  
  
### Data-Conversion Routines  
  
|Routine|Use|.NET Framework equivalent|  
|-------------|---------|-------------------------------|  
|[abs](../VS_visualcpp/abs--labs--llabs--_abs64.md)|Find absolute value of integer|[System::Math::Abs](https://msdn.microsoft.com/en-us/library/system.math.abs.aspx)|  
|[atof, _atof_l, _wtof, _wtof_l](../VS_visualcpp/atof--_atof_l--_wtof--_wtof_l.md)|Convert string to `float`|[System::Convert::ToDouble](https://msdn.microsoft.com/en-us/library/system.convert.todouble.aspx)|  
|[atoi, _atoi_l, _wtoi, _wtoi_l](../VS_visualcpp/atoi--_atoi_l--_wtoi--_wtoi_l.md)|Convert string to `int`|[System::Convert::ToInt32](https://msdn.microsoft.com/en-us/library/system.convert.toint32.aspx), [System::Convert::ToUInt32](https://msdn.microsoft.com/en-us/library/system.convert.touint32.aspx)|  
|[_atoi64, _atoi64_l, _wtoi64, _wtoi64_l](../VS_visualcpp/_atoi64--_atoi64_l--_wtoi64--_wtoi64_l.md)|Convert string to `__int64`|[System::Convert::ToInt64](https://msdn.microsoft.com/en-us/library/system.convert.toint64.aspx), [System::Convert::ToUInt64](https://msdn.microsoft.com/en-us/library/system.convert.touint64.aspx)|  
|[atol, _atol_l, _wtol, _wtol_l](../VS_visualcpp/atol--_atol_l--_wtol--_wtol_l.md)|Convert string to `long`|[System::Convert::ToInt64](https://msdn.microsoft.com/en-us/library/system.convert.toint64.aspx), [System::Convert::ToUInt64](https://msdn.microsoft.com/en-us/library/system.convert.touint64.aspx)|  
|[_ecvt](../VS_visualcpp/_ecvt.md), [_ecvt_s](../VS_visualcpp/_ecvt_s.md)|Convert `double` to string of specified length|[System::Convert::ToString](https://msdn.microsoft.com/en-us/library/system.convert.tostring.aspx)|  
|[_fcvt](../VS_visualcpp/_fcvt.md), [_fcvt_s](../VS_visualcpp/_fcvt_s.md)|Convert `double` to string with specified number of digits following decimal point|[System::Convert::ToString](https://msdn.microsoft.com/en-us/library/system.convert.tostring.aspx)|  
|[_gcvt](../VS_visualcpp/_gcvt.md), [_gcvt_s](../VS_visualcpp/_gcvt_s.md)|Convert `double` number to string; store string in buffer|[System::Convert::ToString](https://msdn.microsoft.com/en-us/library/system.convert.tostring.aspx)|  
|[_itoa, _i64toa, _ui64toa, _itow, _i64tow, _ui64tow](../VS_visualcpp/_itoa--_i64toa--_ui64toa--_itow--_i64tow--_ui64tow.md), [_itoa_s, _i64toa_s, _ui64toa_s, _itow_s, _i64tow_s, _ui64tow_s](../VS_visualcpp/_itoa_s--_i64toa_s--_ui64toa_s--_itow_s--_i64tow_s--_ui64tow_s.md)|Convert `int` or `__int64` to string|[System::Convert::ToString](https://msdn.microsoft.com/en-us/library/system.convert.tostring.aspx)|  
|[labs](../Topic/labs,%20llabs.md)|Find absolute value of `long` integer|[System::Math::Abs](https://msdn.microsoft.com/en-us/library/system.math.abs.aspx)|  
|[_ltoa, _ltow](../VS_visualcpp/_ltoa--_ltow.md), [_ltoa_s, _ltow_s](../VS_visualcpp/_ltoa_s--_ltow_s.md)|Convert `long` to string|[System::Convert::ToString](https://msdn.microsoft.com/en-us/library/system.convert.tostring.aspx)|  
|[_mbbtombc, _mbbtombc_l](../VS_visualcpp/_mbbtombc--_mbbtombc_l.md)|Convert 1-byte multibyte character to corresponding 2-byte multibyte character|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_mbcjistojms, _mbcjistojms_l, _mbcjmstojis, _mbcjmstojis_l](../VS_visualcpp/_mbcjistojms--_mbcjistojms_l--_mbcjmstojis--_mbcjmstojis_l.md)|Convert Japan Industry Standard (JIS) character to Japan Microsoft (JMS) character|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_mbcjistojms, _mbcjistojms_l, _mbcjmstojis, _mbcjmstojis_l](../VS_visualcpp/_mbcjistojms--_mbcjistojms_l--_mbcjmstojis--_mbcjmstojis_l.md)|Convert JMS character to JIS character|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_mbctohira, _mbctohira_l, _mbctokata, _mbctokata_l](../VS_visualcpp/_mbctohira--_mbctohira_l--_mbctokata--_mbctokata_l.md)|Convert multibyte character to 1-byte hiragana code|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_mbctohira, _mbctohira_l, _mbctokata, _mbctokata_l](../VS_visualcpp/_mbctohira--_mbctohira_l--_mbctokata--_mbctokata_l.md)|Convert multibyte character to 1-byte katakana code|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_mbctombb, _mbctombb_l](../VS_visualcpp/_mbctombb--_mbctombb_l.md)|Convert 2-byte multibyte character to corresponding 1-byte multibyte character|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[mbstowcs, _mbstowcs_l](../VS_visualcpp/mbstowcs--_mbstowcs_l.md), [mbstowcs_s, _mbstowcs_s_l](../VS_visualcpp/mbstowcs_s--_mbstowcs_s_l.md)|Convert sequence of multibyte characters to corresponding sequence of wide characters|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[mbtowc, _mbtowc_l](../VS_visualcpp/mbtowc--_mbtowc_l.md)|Convert multibyte character to corresponding wide character|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[strtod, _strtod_l, wcstod, _wcstod_l](../VS_visualcpp/strtod--_strtod_l--wcstod--_wcstod_l.md)|Convert string to `double`|[System::Convert::ToDouble](https://msdn.microsoft.com/en-us/library/system.convert.todouble.aspx)|  
|[strtol, wcstol, _strtol_l, _wcstol_l](../VS_visualcpp/strtol--wcstol--_strtol_l--_wcstol_l.md)|Convert string to `long` integer|[System::Convert::ToInt32](https://msdn.microsoft.com/en-us/library/system.convert.toint32.aspx)|  
|[strtoul, _strtoul_l, wcstoul, _wcstoul_l](../VS_visualcpp/strtoul--_strtoul_l--wcstoul--_wcstoul_l.md)|Convert string to `unsigned long` integer|[System::Convert::ToUInt32](https://msdn.microsoft.com/en-us/library/system.convert.touint32.aspx)|  
|[strxfrm, wcsxfrm, _strxfrm_l, _wcsxfrm_l](../VS_visualcpp/strxfrm--wcsxfrm--_strxfrm_l--_wcsxfrm_l.md)|Transform string into collated form based on locale-specific information|[System::IFormattable::ToString](https://msdn.microsoft.com/en-us/library/system.iformattable.tostring.aspx)|  
|[toascii, __toascii](../VS_visualcpp/toascii--__toascii.md)|Convert character to ASCII code||  
|[tolower, _tolower, towlower, _tolower_l, _towlower_l](../VS_visualcpp/tolower--_tolower--towlower--_tolower_l--_towlower_l.md), [_mbctolower, _mbctolower_l, _mbctoupper, _mbctoupper_l](../VS_visualcpp/_mbctolower--_mbctolower_l--_mbctoupper--_mbctoupper_l.md)|Test character and convert to lowercase if currently uppercase|[System::Char::ToLower](https://msdn.microsoft.com/en-us/library/system.char.tolower.aspx)|  
|[tolower, _tolower, towlower, _tolower_l, _towlower_l](../VS_visualcpp/tolower--_tolower--towlower--_tolower_l--_towlower_l.md)|Convert character to lowercase unconditionally|[System::String::ToLower](https://msdn.microsoft.com/en-us/library/system.string.tolower.aspx)|  
|[toupper, _toupper, towupper, _toupper_l, _towupper_l](../VS_visualcpp/toupper--_toupper--towupper--_toupper_l--_towupper_l.md), [_mbctolower, _mbctolower_l, _mbctoupper, _mbctoupper_l](../VS_visualcpp/_mbctolower--_mbctolower_l--_mbctoupper--_mbctoupper_l.md)|Test character and convert to uppercase if currently lowercase|[System::Char::ToUpper](https://msdn.microsoft.com/en-us/library/system.char.toupper.aspx)|  
|[toupper, _toupper, towupper, _toupper_l, _towupper_l](../VS_visualcpp/toupper--_toupper--towupper--_toupper_l--_towupper_l.md)|Convert character to uppercase unconditionally|[System::String::ToUpper](https://msdn.microsoft.com/en-us/library/system.string.toupper.aspx)|  
|[_ultoa, _ultow](../VS_visualcpp/_ultoa--_ultow.md), [_ultoa_s, _ultow_s](../VS_visualcpp/_ultoa_s--_ultow_s.md)|Convert `unsigned``long` to string|[System::Convert::ToString](https://msdn.microsoft.com/en-us/library/system.convert.tostring.aspx)|  
|[wcstombs, _wcstombs_l](../VS_visualcpp/wcstombs--_wcstombs_l.md), [wcstombs_s, _wcstombs_s_l](../VS_visualcpp/wcstombs_s--_wcstombs_s_l.md)|Convert sequence of wide characters to corresponding sequence of multibyte characters|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[wctomb, _wctomb_l](../VS_visualcpp/wctomb--_wctomb_l.md), [wctomb_s, _wctomb_s_l](../VS_visualcpp/wctomb_s--_wctomb_s_l.md)|Convert wide character to corresponding multibyte character|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[atof, _atof_l, _wtof, _wtof_l](../VS_visualcpp/atof--_atof_l--_wtof--_wtof_l.md)|Convert wide-character string to a `double`|[System::Convert::ToInt64](https://msdn.microsoft.com/en-us/library/system.convert.toint64.aspx), [System::Convert::ToUInt64](https://msdn.microsoft.com/en-us/library/system.convert.touint64.aspx), [System::Convert::ToSingle](https://msdn.microsoft.com/en-us/library/system.convert.tosingle.aspx), [System::Convert::ToDouble](https://msdn.microsoft.com/en-us/library/system.convert.todouble.aspx)|  
|[atoi, _atoi_l, _wtoi, _wtoi_l](../VS_visualcpp/atoi--_atoi_l--_wtoi--_wtoi_l.md)|Convert wide-character string to `int`|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_atoi64, _atoi64_l, _wtoi64, _wtoi64_l](../VS_visualcpp/_atoi64--_atoi64_l--_wtoi64--_wtoi64_l.md)|Convert wide-character string to `__int64`|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[atol, _atol_l, _wtol, _wtol_l](../VS_visualcpp/atol--_atol_l--_wtol--_wtol_l.md)|Convert wide-character string to `long`|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
  
## See Also  
 [Run-Time Routines by Category](../VS_visualcpp/Run-Time-Routines-by-Category.md)