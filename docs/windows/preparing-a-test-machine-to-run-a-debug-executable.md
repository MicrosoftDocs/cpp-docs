---
description: "Learn more about: Prepare a test machine to run a debug executable"
title: " Prepare a test machine to run a debug executable"
ms.date: 06/28/2022
helpviewer_keywords: ["debug executable, preparing a test machine to run"]
ms.assetid: f0400989-cc2e-4dce-9788-6bdbe91c6f5a
---
# Prepare a test machine to run a debug executable

Apps built by using Visual C++ require the vcruntime and other libraries to run. Debug versions of apps often require the corresponding debug versions of the libraries. You must deploy these libraries on your test machine to test the debug version of your app. To identify which DLLs you must deploy, follow the steps in [Understanding the dependencies of a Visual C++ application](understanding-the-dependencies-of-a-visual-cpp-application.md). Typically, debug versions of Visual C++ library DLLs have names that end in "d". For example, the debug version of `vcruntime140.dll` is named `vcruntime140d.dll`.

> [!NOTE]
> Debug versions of an application aren't redistributable, and debug versions of the Visual C++ library DLLs are also not redistributable. You may deploy debug versions of applications and Visual C++ DLLs only to your other computers, for the sole purpose of debugging and testing the applications on a computer that doesn't have Visual Studio installed. For more information, see [Redistributing Visual C++ files](redistributing-visual-cpp-files.md).

## Ways to deploy the libraries

There are three ways to deploy debug versions of Visual C++ library DLLs together with the debug version of an application.

- Use central deployment to install a debug version of a particular Visual C++ DLL to the `%windir%\system32\` directory. You can deploy the debug DLLs by using a Setup project that includes DLLs for the library version and target architecture of your application. You can see an example of a deployment project in [Walkthrough: Deploy a Visual C++ application by using a setup project](walkthrough-deploying-a-visual-cpp-application-by-using-a-setup-project.md).

- Use local deployment to install a debug version of a particular Visual C++ DLL in the application's installation directory. For more information on where to find the non-Redistributable debug DLLs, see [Determine which DLLs to redistribute](./determining-which-dlls-to-redistribute.md).

- Use the **Deploy** option in the **Configuration Manager** dialog box in Visual Studio to copy the project output and other files to the remote computer.

After Visual C++ DLLs are installed, you can run a remote debugger on a network share. For more information about remote debugging, see [Remote debugging](/visualstudio/debugger/remote-debugging).

## See also

[Deployment in Visual C++](deployment-in-visual-cpp.md)\
[Windows Installer command line options](/windows/win32/Msi/command-line-options)\
[Deployment examples](deployment-examples.md)\
[Remote debugging](/visualstudio/debugger/remote-debugging)
