---
description: "Learn more about: Overriding the Standard Command Routing"
title: "Overriding the Standard Command Routing"
ms.date: "11/04/2016"
helpviewer_keywords: ["MFC, command routing", "command routing [MFC], overriding", "command handling [MFC], routing commands", "overriding, standard command routing"]
ms.topic: concept-article
---
# Overriding the Standard Command Routing

>[!NOTE]
> The Microsoft Foundation Classes (MFC) library continues to be supported. However, we're no longer adding features or updating the documentation.

In rare cases when you must implement some variation of the standard framework routing, you can override it. The idea is to change the routing in one or more classes by overriding `OnCmdMsg` in those classes. Do so:

- In the class that breaks the order to pass to a nondefault object.

- In the new nondefault object or in command targets it might in turn pass commands to.

If you insert some new object into the routing, its class must be a command-target class. In your overriding versions of `OnCmdMsg`, be sure to call the version that you're overriding. See the [OnCmdMsg](reference/ccmdtarget-class.md#oncmdmsg) member function of class `CCmdTarget` in the *MFC Reference* and the versions in such classes as `CView` and `CDocument` in the supplied source code for examples.

## See also

[How the Framework Calls a Handler](how-the-framework-calls-a-handler.md)
