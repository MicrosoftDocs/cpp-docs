---
description: "Learn more about: Using a Template Library"
title: "Using a Template Library (ATL)"
ms.date: "11/04/2016"
helpviewer_keywords: ["template libraries"]
ms.assetid: 5e80ec6e-a61c-41ce-b34b-9a6252c46265
---
# Using a Template Library

A template is somewhat like a macro. As with a macro, invoking a template causes it to expand (with appropriate parameter substitution) to code you have written. However, a template goes further than this to allow the creation of new classes based on types that you pass as parameters. These new classes implement type-safe ways of performing the operation expressed in your template code.

Template libraries such as ATL differ from traditional C++ class libraries in that they are typically supplied only as source code (or as source code with a little, supporting run time) and are not inherently or necessarily hierarchical in nature. Rather than deriving from a class to get the functionality you desire, you instantiate a class from a template.

## See also

[Introduction to ATL](../atl/introduction-to-atl.md)
