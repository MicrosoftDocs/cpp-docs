---
title: "Using the MFC Source Files"
ms.date: "11/04/2016"
helpviewer_keywords: ["public members", "source files", "MFC, source files", "MFC source files", "comments, MFC", "private member access", "protected member access", "source files, MFC"]
ms.assetid: 3230e8fb-3b69-4ddf-9538-365ac7ea5e72
---
# Using the MFC Source Files

The Microsoft Foundation Class (MFC) Library supplies full source code. Header files (.h) are in the \atlmfc\include directory; implementation files (.cpp) are in the \atlmfc\src\mfc directory.

This family of articles explains the conventions that MFC uses to comment the various parts of each class, what these comments mean, and what you should expect to find in each section. The Visual C++ wizards use similar conventions for the classes that they create for you, and you will probably find these conventions useful for your own code.

You might be familiar with the **public**, **protected**, and **private** C++ keywords. In the MFC header files, you'll find each class may have several of each of them. For example, public member variables and functions might be under more than one **public** keyword. It's because MFC separates member variables and functions based on their use, not by the type of access allowed. MFC uses **private** sparingly. Even items considered implementation details are often **protected**, and many times are **public**. Although access to the implementation details is discouraged, MFC leaves the decision to you.

In both the MFC source files and the header files that the MFC Application Wizard creates, you'll find comments like these ones within class declarations (usually in this order):

`// Constructors`

`// Attributes`

`// Operations`

`// Overridables`

`// Implementation`

Topics covered in this family of articles include:

- [An example of the comments](../mfc/an-example-of-the-comments.md)

- [The // Implementation comment](../mfc/decrement-implementation-comment.md)

- [The // Constructors comment](../mfc/decrement-constructors-comment.md)

- [The // Attributes comment](../mfc/decrement-attributes-comment.md)

- [The // Operations comment](../mfc/decrement-operations-comment.md)

- [The // Overridables comment](../mfc/decrement-overridables-comment.md)

## See also

[General MFC Topics](../mfc/general-mfc-topics.md)
