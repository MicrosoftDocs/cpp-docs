---
title: "Creating Registrar Scripts | Microsoft Docs"
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
helpviewer_keywords: 
  - "scripting, registry scripting"
  - "ATL, registry"
  - "registrar scripts [ATL]"
  - "scripts, Registrar scripts"
  - "scripts, creating"
ms.assetid: cbd5024b-8061-4a71-be65-7fee90374a35
caps.latest.revision: 10
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
# Creating Registrar Scripts
A registrar script provides data-driven, rather than API-driven, access to the system registry. Data-driven access is typically more efficient since it takes only one or two lines in a script to add a key to the registry.  
  
 The [ATL Control Wizard](../atl/reference/atl-control-wizard.md) automatically generates a registrar script for your COM server. You can find this script in the .rgs file associated with your object.  
  
 The ATL Registrar's Script Engine processes your registrar script at run time. ATL automatically invokes the Script Engine during server setup.  
  
 This article covers the following topics related to the registrar scripts:  
  
-   [Understanding Backus Nauer Form (BNF) Syntax](../atl/understanding-backus-nauer-form-bnf-syntax.md)  
  
-   [Understanding Parse Trees](../atl/understanding-parse-trees.md)  
  
-   [Registry Scripting Examples](../atl/registry-scripting-examples.md)  
  
-   [Using Replaceable Parameters (The Registrar's Preprocessor)](../atl/using-replaceable-parameters-the-registrar-s-preprocessor.md)  
  
-   [Invoking Scripts](../atl/invoking-scripts.md)  
  
## See Also  
 [Registry Component (Registrar)](../atl/atl-registry-component-registrar.md)

