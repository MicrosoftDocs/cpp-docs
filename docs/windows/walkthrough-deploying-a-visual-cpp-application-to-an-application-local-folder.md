---
description: "Learn more about: Walkthrough: Deploying a Visual C++ Application to an Application-local Folder"
title: "Deploy a Visual C++ Application to an App-local Folder"
ms.date: "04/23/2019"
helpviewer_keywords: ["deploying Visual C++ applications"]
ms.assetid: 47a81c47-9dbe-47c6-96cc-fbb2fda5e6ad
---
# Walkthrough: Deploying a Visual C++ Application to an Application-local Folder

Describes how to deploy a Visual C++ application by copying files to its folder.

## Prerequisites

- A computer that has Visual Studio installed.

- Another computer that doesn't have the Visual C++ libraries.

### To deploy an application to an application-local folder

1. Create and build an MFC application by following the steps in [Walkthrough: Deploying a Visual C++ Application By Using a Setup Project](walkthrough-deploying-a-visual-cpp-application-by-using-a-setup-project.md).

1. Copy the appropriate MFC and C Run-Time (CRT) library files from the Visual Studio installation directory in the \\VC\\redist\\*version* folder, and then paste them in the \Release\ folder of your MFC project. For more information about other files that you might have to copy, see [Determining Which DLLs to Redistribute](determining-which-dlls-to-redistribute.md).

1. Run the MFC application on a second computer that doesn't have the Visual C++ libraries.

   1. Copy the contents of the \Release\ folder and paste them in the application folder on the second computer.

   1. Run the application on the second computer.

   The application runs successfully because the Visual C++ libraries are available in the application-local folder.

## See also

[Deployment Examples](deployment-examples.md)<br/>
