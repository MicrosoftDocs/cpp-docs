---
title: "Language Keywords (C++/CLI) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-cli"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["keywords [C++]"]
ms.assetid: 021013b2-70ac-4df9-aa77-4af1c67a1a67
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "dotnet"]
---
# Language Keywords (C++/CLI)
Several language keywords changed from Managed Extensions for C++ to Visual C++.  
  
 In the new Visual C++ syntax, the double underscore is removed as a prefix from all keywords (with one exception: `__identifier` is retained). For example, a property is now declared as `property`, not `__property`.  
  
 There were two primary reasons for using the double-underscore prefix in Managed Extensions:  
  
-   It is the conformant method of providing local extensions to the ISO-C++ Standard. A primary goal of the Managed Extensions design was to not introduce incompatibilities with the standard language, such as new keywords and tokens. It was this reason, in large part, which motivated the choice of pointer syntax for the declaration of objects of managed reference types.  
  
-   The use of the double underscore, apart from its conformant aspect, is also a reasonable guarantee of being non-invasive with the existing code base of the language users. This was a second primary goal of the Managed Extensions design.  
  
 In spite of removing the double underscores, Microsoft remains committed to being conformant. However, support for the CLR dynamic object model represents a new and powerful programming paradigm. Support of this new paradigm requires its own high-level keywords and tokens. We have sought to provide a first-class expression of this new paradigm while integrating it and supporting the standard language. The new syntax design provides a first class programming experience of these two disparate object models.  
  
 Similarly, we are concerned with maximizing the non-invasive nature of these new language keywords. This has been accomplished with the use of contextual and spaced keywords. Before we look at the actual new language syntax, let’s try to make sense of these two special keyword flavors.  
  
 A contextual keyword has a special meaning within specific program contexts. Within the general program, for example, `sealed` is treated as an ordinary identifier. However, when it occurs within the declaration portion of a managed reference class type, it is treated as a keyword within the context of that class declaration. This minimizes the potential invasive impact of introducing a new keyword in the language, something that we feel is very important to users with an existing code base. At the same time, it allows users of the new functionality to have a first-class experience of the additional language feature - something that wasn't possible with Managed Extensions. For an example of how `sealed` is used see [Declaration of a Managed Class Type](../dotnet/declaration-of-a-managed-class-type.md).  
  
 A spaced keyword, such as `value class`, is a special case of a contextual keyword. It pairs an existing keyword with a contextual modifier separated by a space. The pair is treated as a single unit rather than as two separate keywords.  
  
## See Also  
 [C++/CLI Migration Primer](../dotnet/cpp-cli-migration-primer.md)   
 [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md)