---
description: "Learn more about: Compiler Error C3552"
title: "Compiler Error C3552"
ms.date: "11/04/2016"
f1_keywords: ["C3552"]
helpviewer_keywords: ["C3552"]
ms.assetid: 83401524-1bf1-44c0-8aca-a6eb35c4224c
---
# Compiler Error C3552

'typename': a late specified return type cannot contain 'auto'

If you use the **`auto`** keyword as a placeholder for the return type of a function, you must provide a late-specified return type. However, you cannot use another **`auto`** keyword to specify the late-specified return type. For example, the following code fragment yields error C3552.

`auto myFunction->auto; // C3552`
