---
description: "Learn more about: Creating Registrar scripts"
title: "Creating scripts for ATL Registrar"
ms.date: "05/14/2014"
helpviewer_keywords: ["scripting, registry scripting", "ATL, registry", "registrar scripts [ATL]", "scripts, Registrar scripts", "scripts, creating"]
ms.assetid: cbd5024b-8061-4a71-be65-7fee90374a35
---
# Creating Registrar scripts

A registrar script provides data-driven, rather than API-driven, access to the system registry. Data-driven access is typically more efficient since it takes only one or two lines in a script to add a key to the registry.

The [ATL Control Wizard](../atl/reference/atl-control-wizard.md) automatically generates a registrar script for your COM server. You can find this script in the .rgs file associated with your object.

The ATL Registrar's Script Engine processes your registrar script at run time. ATL automatically invokes the Script Engine during server setup.

This article covers the following topics related to the registrar scripts:

- [Understanding Backus-Naur form (BNF) syntax](../atl/understanding-backus-naur-form-bnf-syntax.md)

- [Understanding Parse Trees](../atl/understanding-parse-trees.md)

- [Registry Scripting Examples](../atl/registry-scripting-examples.md)

- [Using Replaceable Parameters (The Registrar's Preprocessor)](../atl/using-replaceable-parameters-the-registrar-s-preprocessor.md)

- [Invoking Scripts](../atl/invoking-scripts.md)

## See also

[Registry Component (Registrar)](../atl/atl-registry-component-registrar.md)
