---
title: "2.8 Directive Binding"
ms.date: "11/04/2016"
ms.assetid: 7bdac45e-ab55-42f0-bd47-a2e3d5bbab3e
---
# 2.8 Directive Binding

Dynamic binding of directives must adhere to the following rules:

- The **for**, **sections**, **single**, **master**, and **barrier** directives bind to the dynamically enclosing **parallel**, if one exists, regardless of the value of any **if** clause that may be present on that directive. If no parallel region is currently being executed, the directives are executed by a team composed of only the master thread.

- The **ordered** directive binds to the dynamically enclosing **for**.

- The **atomic** directive enforces exclusive access with respect to **atomic** directives in all threads, not just the current team.

- The **critical** directive enforces exclusive access with respect to **critical** directives in all threads, not just the current team.

- A directive can never bind to any directive outside the closest dynamically enclosing **parallel**.