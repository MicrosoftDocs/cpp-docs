---
title: "_SCL_SECURE_NO_WARNINGS"
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
  - "_SCL_SECURE_NO_DEPRECATE"
  - "_SCL_SECURE_NO_WARNINGS"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_SCL_SECURE_NO_DEPRECATE"
  - "_SCL_SECURE_NO_WARNINGS"
ms.assetid: ef0ddea9-7c62-4b53-8b64-5f4fd369776f
caps.latest.revision: 4
ms.author: "corob"
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
# _SCL_SECURE_NO_WARNINGS
Calling any one of the potentially unsafe methods in the Standard C++ Library will result in [Compiler Warning (level 3) C4996](../compilerwarnings/compiler-warning--level-3--c4996.md). To disable this warning, define the macro **_SCL_SECURE_NO_WARNINGS** in your code:  
  
```  
#define _SCL_SECURE_NO_WARNINGS  
```  
  
## Remarks  
 Other ways to disable warning C4996 include:  
  
-   Using the [/D (Preprocessor Definitions)](../buildref/-d--preprocessor-definitions-.md) compiler option:  
  
    ```  
    cl /D_SCL_SECURE_NO_WARNINGS [other compiler options] myfile.cpp  
    ```  
  
-   Using the [/w](../buildref/-w---w0---w1---w2---w3---w4---w1---w2---w3---w4---wall---wd---we---wo---wv---wx--warning-level-.md) compiler option:  
  
    ```  
    cl /wd4996 [other compiler options] myfile.cpp  
    ```  
  
-   Using the [#pragma warning](../c/warning.md) directive:  
  
    ```  
    #pragma warning(disable:4996)  
    ```  
  
 Also, you can manually change the level of warning C4996 with the **/w\<l>\<n>** compiler option. For example, to set warning C4996 to level 4:  
  
```  
cl /w44996 [other compiler options] myfile.cpp  
```  
  
 For more information, see [/w, /W0, /W1, /W2, /W3, /W4, /w1, /w2, /w3, /w4, /Wall, /wd, /we, /wo, /Wv, /WX (Warning Level)](../buildref/-w---w0---w1---w2---w3---w4---w1---w2---w3---w4---wall---wd---we---wo---wv---wx--warning-level-.md).  
  
## See Also  
 [Safe Libraries: C++ Standard Library](../stdcpplib/safe-libraries--c---standard-library.md)