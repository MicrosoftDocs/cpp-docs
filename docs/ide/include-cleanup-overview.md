---
title: "Cleanup #includes in C++ code in Visual Studio"
description: "Use the C++ code editor in Visual Studio to remove, add, and transitively add the includes needed in your project."
ms.date: 09/10/2023
ms.topic: "overview"
ms.custom: intro-overview
---
# Cleanup #includes in C++ code in Visual Studio

Starting in Visual Studio 17.8, Visual Studio provides #include cleanup to improves the quality of your code. It generates suggestions to remove unused headers, but can also add headers for code that you are using in your project.



 Our suggested workflow is to first go through the direct include suggestions to add direct headers where indirect headers are used, followed by removing the unused includes.

## IntelliSense

IntelliSense is a powerful code completion tool that suggests symbols and code snippets for you as you type. C++ IntelliSense in Visual Studio runs in real time, analyzing your codebase as you update it and providing recommendations. As you type more characters, the list of recommended results narrows down.

![Screenshot of the C plus plus member list drop down showing the methods available for string such as append, assign, and so on.](../ide/media/cpp-statement-completion.png)

## See Also

[Navigate your C++ code base in Visual Studio](navigate-code-cpp.md)