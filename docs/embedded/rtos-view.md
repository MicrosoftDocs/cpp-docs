---
title: "RTOS Object Views"
ms.date: "07/12/2022"
description: "RTOS View that allows users to view RTOS data of their application."
author: gcampbell-msft
ms.author: gcampbell
---
# RTOS (Real time operating system) Object View

## Overview

The RTOS Object Views allow for users to view various components of an RTOS while debugging their application.

# [Visual Studio](#tab/visual-studio)

![RTOS View in VS](media/rtos-threads.png)

# [Visual Studio Code](#tab/visual-studio-code)

![RTOS View in VSCode](media/rtos-threads-vscode.png)

---

## Supported RTOSes and their supported object types

- ThreadX
  - All of the **Available Object Types** list
- FreeRTOS
  - Threads
  - Queues
- Zephyr
  - All of the **Available Object Types** list

## Available Object Types

- Block Pools
- Byte Pools
- Event Flag Groups
- Mutexes
- Queues
- Semaphores
- Threads
- Timers

## Usage

- Access memory locations of various objects
- Access thread variables or various objects in the Watch view

## Accessibility

- Use the Arrow Keys to navigate the view
- Press Enter to navigate to linked content
