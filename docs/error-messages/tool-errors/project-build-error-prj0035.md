---
title: "Project Build Error PRJ0035 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "PRJ0035"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "PRJ0035"
ms.assetid: 0667116d-338c-40a4-972c-da875f778cb5
caps.latest.revision: 6
author: "corob-msft"
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
# Project Build Error PRJ0035
XML file 'file' contains Unicode contents that could not be translated to user's ANSI code page.  
  
 ***UNICODE contents of file***  
  
 ***file***  is the XML file created as the command line to the Web Deployment tool.  
  
 The project system found Unicode characters in some property on the Web Deployment property page that can't properly be translated to ANSI.  
  
 The resolution for this error is to update the contents of the property to use ANSI or to install the code page on your computer and set it as the system default.