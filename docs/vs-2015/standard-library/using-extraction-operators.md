---
title: "Using Extraction Operators | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "extraction operators"
  - ">> operator, extraction operators"
  - "operators [C++], extraction"
ms.assetid: a961e1a9-4897-41de-b210-89d5b2d051ae
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Using Extraction Operators
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Using Extraction Operators](https://docs.microsoft.com/cpp/standard-library/using-extraction-operators).  
  
The extraction operator (`>>`), which is preprogrammed for all standard C++ data types, is the easiest way to get bytes from an input stream object.  
  
 Formatted text input extraction operators depend on white space to separate incoming data values. This is inconvenient when a text field contains multiple words or when commas separate numbers. In such a case, one alternative is to use the unformatted input member function [istream::getline](../Topic/basic_istream::getline.md) to read a block of text with white space included, then parse the block with special functions. Another method is to derive an input stream class with a member function such as `GetNextToken`, which can call istream members to extract and format character data.  
  
## See Also  
 [Input Streams](../standard-library/input-streams.md)





