---
description: "Learn more about: Compiler Warning (level 4) C4513"
title: "Compiler Warning (level 4) C4513"
ms.date: "11/04/2016"
f1_keywords: ["C4513"]
helpviewer_keywords: ["C4513"]
ms.assetid: 6877334a-f30a-4184-9483-dac3348737a4
---
# Compiler Warning (level 4) C4513

'class' : destructor could not be generated

The compiler cannot generate a default destructor for the given class; no destructor was created. The destructor is in a base class that is not accessible to the derived class. If the base class has a private destructor, make it public or protected.
