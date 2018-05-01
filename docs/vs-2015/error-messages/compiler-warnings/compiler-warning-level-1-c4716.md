---
title: "Compiler Warning (level 1) C4716 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4716"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4716"
ms.assetid: d95ecfe5-870f-461f-a746-7913af98414b
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4716
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4716](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4716).  
  
  
function' must return a value  
  
 The given function did not return a value.  
  
 Only functions with a return type of void can use the return command without an accompanying return value.  
  
 An undefined value will be returned when this function is called.  
  
 This warning is automatically promoted to an error. If you wish to modify this behavior, use [#pragma warning](../../preprocessor/warning.md).  
  
 The following sample generates C4716:  
  
```  
// C4716.cpp  
// compile with: /c /W1  
// C4716 expected  
#pragma warning(default:4716)  
int test() {  
   // uncomment the following line to resolve  
   // return 0;  
}  
```

