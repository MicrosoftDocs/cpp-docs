---
title: "GitHub Copilot modernization for C++ scenarios and skills"
description: "Reference of available upgrade scenarios and skills for GitHub Copilot modernization for C++."
ms.date: 05/27/2026
ms.topic: reference
author: michaelbprice
ms.author: miprice
ai-usage: ai-assisted
---

# Scenarios and skills reference

GitHub Copilot modernization agent provides managed, end-to-end modernization workflows called _scenarios_. Each scenario guides you through a specific type of activity in practical C++ modernization work. This page documents the available scenarios and skills so you can understand what the agent can do for your project.

## Scenarios

A _scenario_ is a managed workflow that guides you through a specific type of modernization activity.

### How scenarios are discovered

You don't need to memorize scenario names. The agent detects your project type and suggests the relevant scenario automatically.

To list the scenarios the agent supports, ask _"What scenarios are available for my project?"_ in the GitHub Copilot chat window.

### Available scenarios

| Scenario | Project type | Description | Example prompt |
|---|---|---|---|
| **MSVC Build Tools upgrade (MSBuild)** | `.sln`, `.vcxproj` | Upgrades MSBuild-based projects (`.sln`, `.vcxproj`) to a newer version of MSVC Build Tools and resolves upgrade-related build issues. | _"Upgrade my projects to use the latest, installed version of the MSVC Build Tools"_ |
| **MSVC Build Tools upgrade (CMake)** | CMake | Resolves upgrade-related build issues in your CMake-based projects after configuring the project with a newer version of MSVC Build Tools. | _"Resolve any build issues caused by upgrading my project to use the newer MSVC Build Tools"_ |

> [!NOTE]
> If you'd like to propose or upvote other modernization scenarios, visit [Developer Community](https://developercommunity.microsoft.com/cpp).

#### MSVC Build Tools upgrade (MSBuild)

This scenario handles the complete upgrade workflow for MSBuild-based C++ projects:

1. **Retargeting**: Updates project settings to target the latest, installed MSVC Build Tools and Platform Toolset.
1. **Build analysis**: Builds the solution and catalogs all errors and warnings introduced by the upgrade.
1. **Updating code**: Replaces deprecated APIs, addresses conformance issues, and helps with breaking changes.
1. **Validation**: Rebuilds to confirm all issues are resolved.

For example, this scenario addresses issues like:

- Deprecated CRT functions, for example, `sprintf` to `sprintf_s`.
- C++ conformance changes, for example, stricter template parsing.
- Standard library changes between MSVC versions, such as removed, experimental namespaces (e.g. `std::tr1`).
- Warning-as-error promotions in newer toolsets.
- Linker errors for APIs removed from the Windows SDK.

#### MSVC Build Tools upgrade (CMake)

This scenario handles upgrade workflows for CMake-based C++ projects:

1. **Build analysis**: Builds the project and catalogs all errors and warnings introduced by the upgrade.
1. **Updating code**: Replaces deprecated APIs, addresses conformance issues, and helps with breaking changes.
1. **Validation**: Rebuilds to confirm all issues are resolved.

For example, this scenario addresses issues like:

- Deprecated CRT functions, for example, `sprintf` to `sprintf_s`.
- C++ conformance changes, for example, stricter template parsing.
- Standard library changes between MSVC versions, such as removed, experimental namespaces (e.g. `std::tr1`).
- Warning-as-error promotions in newer toolsets.
- Linker errors for APIs removed from the Windows SDK.

### Scenario persistence

Each active scenario gets its own folder at `.github/upgrades/{scenarioId}`. The scenario folder contains the plan, task progress, your preferences, and execution logs. The folder becomes part of your Git repository.

## Skills

_Skills_ are smaller, targeted modernization capabilities that the agent uses within a scenario. When the agent encounters a specific pattern during an upgrade, it loads the relevant skill with detailed instructions.

Skills load automatically based on what the agent detects in your codebase. You don't need to manage skill loading.

> [!NOTE]
> There are currently no additional skills specific to C++ modernization scenarios.

## Related content

- [GitHub Copilot modernization for C++ overview](./overview.md)
- [Troubleshoot GitHub Copilot modernization for C++](./troubleshooting.md)