---
title: "_com_raise_error | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "_com_raise_error"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_com_raise_error function"
ms.assetid: a98226c2-c3fe-44f1-8ff5-85863de11cd6
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# _com_raise_error
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [_com_raise_error](https://docs.microsoft.com/cpp/cpp/com-raise-error).  
  
Microsoft Specific**  
  
 Throws a [_com_error](../cpp/com-error-class.md) in response to a failure.  
  
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
  
 You can also use [_set_com_error_handler](../cpp/set-com-error-handler.md) to replace the default error-handling function.  
  
 By default, `_com_raise_error` is defined as follows:  
  
```  
void __stdcall _com_raise_error(HRESULT hr, IErrorInfo* perrinfo) {  
   throw _com_error(hr, perrinfo);  
}  
```  
  
## END Microsoft Specific  
  
## Requirements  
 **Header:** comdef.h  
  
 **Lib:** If the “wchar_t is Native Type” compiler option is on, use comsuppw.lib or comsuppwd.lib. If “wchar_t is Native Type” is off, use comsupp.lib. For more information, see [/Zc:wchar_t (wchar_t Is Native Type)](../build/reference/zc-wchar-t-wchar-t-is-native-type.md).  
  
## See Also  
 [Compiler COM Global Functions](../cpp/compiler-com-global-functions.md)   
 [_set_com_error_handler](../cpp/set-com-error-handler.md)





