---
title: "Profile-guided optimization Error PG0165"
description: "Describes PG0165 errors in reading profile-guided optimization (PGO) data."
ms.date: "10/30/2019"
f1_keywords: ["PG0165"]
helpviewer_keywords: ["PG0165"]
ms.assetid: e98122e7-ddee-4a2c-96b2-d232e4c65f3e
---
# Profile-guided optimization Error PG0165

An error occurred when reading profile-guided optimization data. This error can appear in several forms:

> Reading '*filename.pgd*' : 'PGD version is not supported (version mismatch)'.

PGD files are specific to a particular compiler toolset. This error is generated when you're using a different compiler than the one used to create *filename.pgd*. The error indicates this compiler toolset can't use the data from *filename.pgd* to optimize the current program. To resolve this problem, regenerate *Filename*.pgd by using the current compiler toolset.

> Reading '*filename.pgd*' : 'PGD file is read-only'.

This error is displayed when the PGD file is marked read-only on the filesystem. To resolve this problem, change the file attributes to read-write.
