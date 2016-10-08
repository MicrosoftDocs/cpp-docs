---
title: "Expression Evaluator Error CXX0022"
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
ms.topic: error-reference
ms.assetid: f6b299ac-a4ee-492c-bd9f-6fff005bc537
caps.latest.revision: 6
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
# Expression Evaluator Error CXX0022
function call before _main  
  
 The C expression evaluator cannot evaluate a function before the debugger has entered the function **_main**. The program is not properly initialized until **_main** has been called.  
  
 This error is identical to CAN0022.