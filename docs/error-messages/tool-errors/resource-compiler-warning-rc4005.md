---
description: "Learn more about: Resource Compiler Warning RC4005"
title: "Resource Compiler Warning RC4005"
ms.date: "11/04/2016"
f1_keywords: ["RC4005"]
helpviewer_keywords: ["RC4005"]
ms.assetid: 71f03b4a-c9a9-415d-920f-bf2e58507f93
---
# Resource Compiler Warning RC4005

'identifier' : macro redefinition

The identifier is defined twice. The compiler used the second macro definition.

This warning can be caused by defining a macro on the command line and in the code with a `#define` directive. It also can be caused by macros imported from include files.

To eliminate the warning, either remove one of the definitions or use an `#undef` directive before the second definition.
