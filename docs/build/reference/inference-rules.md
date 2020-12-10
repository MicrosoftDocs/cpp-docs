---
description: "Learn more about: Inference Rules"
title: "Inference Rules"
ms.date: "11/04/2016"
helpviewer_keywords: ["inference rules in NMAKE", "rules, inference", "NMAKE program, inference rules"]
ms.assetid: caff320f-fb07-4eea-80c3-a6a2133a8492
---
# Inference Rules

Inference rules supply commands to update targets and to infer dependents for targets. Extensions in an inference rule match a single target and dependent that have the same base name. Inference rules are user-defined or predefined; predefined rules can be redefined.

If an out-of-date dependency has no commands, and if [.SUFFIXES](dot-directives.md) contains the dependent's extension, NMAKE uses a rule whose extensions match the target and an existing file in the current or specified directory. If more than one rule matches existing files, the **.SUFFIXES** list determines which to use; list priority descends from left to right. If a dependent file does not exist and is not listed as a target in another description block, an inference rule can create the missing dependent from another file with the same base name. If a description block's target has no dependents or commands, an inference rule can update the target. Inference rules can build a command-line target even if no description block exists. NMAKE may invoke a rule for an inferred dependent even if an explicit dependent is specified.

## What do you want to know more about?

[Defining a rule](defining-a-rule.md)

[Batch-mode rules](batch-mode-rules.md)

[Predefined rules](predefined-rules.md)

[Inferred dependents and rules](inferred-dependents-and-rules.md)

[Precedence in inference rules](precedence-in-inference-rules.md)

## See also

[NMAKE Reference](nmake-reference.md)
