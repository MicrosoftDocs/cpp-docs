---
title: "Create a New Linux Project | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
    - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 5d7c1d67-bc31-4f96-8622-2b4cf91372fd
author: "BrianPeek"
ms.author: "brpeek"
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

# Create a New Linux Project

To work with a Linux project, the first thing you will need to do is create a new project in Visual Studio.

1. Select **File > New Project** in Visual Studio, or press **Ctrl + Shift + N**.
1. Select the **Templates > Other Languages > Visual C++ > Cross Platform > Linux** node and then select the project type you would like to create, enter a Name/Location, and click OK.

   ![New Linux Project](media/newproject.png)

   | Project Type | Description
   | ------------ | ---
   | **Blink (Raspberry)**           | Creates a project targeted for a Raspberry Pi device with sample code written to blink an LED
   | **Console Application (Linux)** | Creates a project targeted for any Linux computer with sample code written to output text to the console
   | **Empty Project (Linux)**       | Creates a project targeted for any Linux computer with no sample code written
   | **Makefile Project (Linux)**    | Creates a project targeted for any Linux computer which will be built using a standard Makefile build system

