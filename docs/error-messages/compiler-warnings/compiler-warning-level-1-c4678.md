---
title: "Compiler Warning (level 1) C4678 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4678"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4678"
ms.assetid: 0c588f34-595d-4e5c-9470-8723fca2cc06
caps.latest.revision: 10
author: "corob-msft"
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
# Compiler Warning (level 1) C4678
base class 'base_type' is less accessible than 'derived_type'  
  
A public type derives from a private type. If the public type is instantiated in a referenced assembly, members of the private base type will not be accessible.  
  
C4678 is only reachable using the obsolete compiler option **/clr:oldSyntax**. It is an error when using **/clr**, to have a base class that is less accessible that its derived class.  
