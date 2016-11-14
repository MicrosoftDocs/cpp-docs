---
title: "Summary of Expressions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
ms.assetid: ed448953-687a-4b57-a1cb-12967bd770ea
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
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
# Summary of Expressions
*primary-expression*:  
 *identifier*  
  
 *constant*  
  
 *string-literal*  
  
 **(**  *expression*  **)**  
  
 *expression*:  
 *assignment-expression*  
  
 *expression*  **,**  *assignment-expression*  
  
 *constant-expression*:  
 *conditional-expression*  
  
 *conditional-expression*:  
 *logical-OR-expression*  
  
 *logical-OR-expression*  **?**  *expression*  **:**  *conditional-expression*  
  
 *assignment-expression*:  
 *conditional-expression*  
  
 *unary-expression assignment-operator assignment-expression*  
  
 *postfix-expression*:  
 *primary-expression*  
  
 *postfix-expression*  **[**  *expression*  **]**  
  
 *postfix-expression*  **(**  *argument-expression-list* opt**)**  
  
 *postfix-expression*  **.**  *identifier*  
  
 *postfix-expression*  **–>**  *identifier*  
  
 *postfix-expression*  **++**  
  
 *postfix-expression*  **––**  
  
 *argument-expression-list*:  
 *assignment-expression*  
  
 *argument-expression-list*  **,**  *assignment-expression*  
  
 *unary-expression*:  
 *postfix-expression*  
  
 **++**  *unary-expression*  
  
 **––**  *unary-expression*  
  
 *unary-operator*  
  
 *cast-expression*  
  
 **sizeof**  *unary-expression*  
  
 **sizeof (**  *type-name*  **)**  
  
 *unary-operator*: one of  
 **& \* + – ~ !**  
  
 *cast-expression*:  
 *unary-expression*  
  
 **(**  *type-name*  **)**  *cast-expression*  
  
 *multiplicative-expression*:  
 *cast-expression*  
  
 *multiplicative-expression*  **\***  *cast-expression*  
  
 *multiplicative-expression*  **/**  *cast-expression*  
  
 *multiplicative-expression*  **%**  *cast-expression*  
  
 *additive-expression*:  
 *multiplicative-expression*  
  
 *additive-expression*  **+**  *multiplicative-expression*  
  
 *additive-expression*  **–**  *multiplicative-expression*  
  
 *shift-expression*:  
 *additive-expression*  
  
 *shift-expression*  **<\<**  *additive-expression*  
  
 *shift-expression*  **>>**  *additive-expression*  
  
 *relational-expression*:  
 *shift-expression*  
  
 *relational-expression*  **\<**  *shift-expression*  
  
 *relational-expression*  **>**  *shift-expression relational-expression*  **\<=**  *shift-expression*  
  
 *relational-expression*  **>=**  *shift-expression*  
  
 *equality-expression*:  
 *relational-expression*  
  
 *equality-expression*  **==**  *relational-expression*  
  
 *equality-expression*  **!=**  *relational-expression*  
  
 *AND-expression*:  
 *equality-expression*  
  
 *AND-expression*  **&**  *equality-expression*  
  
 *exclusive-OR-expression*:  
 *AND-expression*  
  
 *exclusive-OR-expression*  **^**  *AND-expression*  
  
 *inclusive-OR-expression*:  
 *exclusive-OR-expression*  
  
 *inclusive-OR-expression*  **&#124;**  *exclusive-OR-expression*  
  
 *logical-AND-expression*:  
 *inclusive-OR-expression*  
  
 *logical-AND-expression*  **&&**  *inclusive-OR-expression*  
  
 *logical-OR-expression*:  
 *logical-AND-expression*  
  
 *logical-OR-expression*  **&#124;&#124;**  *logical-AND-expression*  
  
## See Also  
 [Phrase Structure Grammar](../c-language/phrase-structure-grammar.md)