---
description: "Learn more about: NMAKE Fatal Error U1064"
title: "NMAKE Fatal Error U1064"
ms.date: "11/04/2016"
f1_keywords: ["U1064"]
helpviewer_keywords: ["U1064"]
ms.assetid: 7141e66e-cde6-4173-84df-a391f3ebcdd1
---
# NMAKE Fatal Error U1064

MAKEFILE not found and no target specified

The NMAKE command line did not specify a makefile or a target, and the current directory did not contain a file named MAKEFILE.

NMAKE requires either a makefile or a command-line target (or both). To make a makefile available to NMAKE, either specify the /F option or place a file named MAKEFILE in the current directory. NMAKE can create a command-line target by using an inference rule if a makefile is not provided.
