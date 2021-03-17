---
description: "Reference for header_units.json format"
title: "C++ header unit.json reference"
ms.date: "3/15/2021"
f1_keywords: ["header unit"]
helpviewer_keywords: ["header unit"]
---

# C++ header_units.json reference

## Format

The format of the header_units.json (as well as file name and location) is up to the compilers and libraries, build system will not “know” about it as it does not know upfront which headers and from which directories will be used. 

 

At minimum (vcpkg feedback was to avoid wildcards), it can be something like this 

 

{ 

    "Version": "1.0", 

    "BuildAsHeaderUnits": [ 

“relative\path\to\header1.h”, 

“relative\path\to\header2.h” 

] 

} 

 

Or, if we allow wildcards: 

 

{ 

    "Version": "1.0", 

    "BuildAsHeaderUnits": [*] <- can contain wildcards 

    "Exclude": [foo.h] <- can contain wildcards 

} 

## Search rules

Header directory 

If the header directory is not on include path, the directory on the include path which was used to find this header. 

## See also

[Modules docs]()
[Precompiled header docs]()
[ISO papers?]()