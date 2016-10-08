---
title: "_com_raise_error"
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
ms.topic: language-reference
ms.assetid: a98226c2-c3fe-44f1-8ff5-85863de11cd6
caps.latest.revision: 10
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
# _com_raise_error
**Microsoft Specific**  
  
 Throws a [_com_error](../VS_visualcpp/_com_error-Class.md) in response to a failure.  
  
## Syntax  
  
```  
  
      void __stdcall _com_raise_error(  
   HRESULT hr,  
   IErrorInfo* perrinfo = 0  
);  
```  
  
#### Parameters  
 `hr`  
 `HRESULT` information.  
  
 `perrinfo`  
 **IErrorInfo** object.  
  
## Remarks  
 `_com_raise_error`, which is defined in comdef.h, can be replaced by a user-written version of the same name and prototype. This could be done if you want to use `#import` but do not want to use C++ exception handling. In that case, a user version of **_com_raise_error** might decide to do a `longjmp` or display a message box and halt. The user version should not return, though, because the compiler COM support code does not expect it to return.  
  
 You can also use [_set_com_error_handler](../VS_visualcpp/_set_com_error_handler.md) to replace the default error-handling function.  
  
 By default, `_com_raise_error` is defined as follows:  
  
```  
void __stdcall _com_raise_error(HRESULT hr, IErrorInfo* perrinfo) {  
   throw _com_error(hr, perrinfo);  
}  
```  
  
## END Microsoft Specific  
  
## Requirements  
 **Header:** comdef.h  
  
 **Lib:** If the “wchar_t is Native Type” compiler option is on, use comsuppw.lib or comsuppwd.lib. If “wchar_t is Native Type” is off, use comsupp.lib. For more information, see [/Zc:wchar_t (wchar_t Is Native Type)](../VS_visualcpp/-Zc-wchar_t--wchar_t-Is-Native-Type-.md).  
  
## See Also  
 [Compiler COM Global Functions](../VS_visualcpp/Compiler-COM-Global-Functions.md)   
 [_set_com_error_handler](../VS_visualcpp/_set_com_error_handler.md)