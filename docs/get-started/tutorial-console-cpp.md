---
title: Create a C++ console app project
description: "Create a Hello World console app and a calculator app in Visual C++"
ms.custom: "mvc"
ms.date: 08/19/2019
ms.topic: "tutorial"
ms.devlang: "cpp"
ms.assetid: 45138d70-719d-42dc-90d7-1d0ca31a2f54
---
# Create a C++ console app project

::: moniker range=">=vs-2019"

The usual starting point for a C++ programmer is a "Hello, world!" application that runs on the command line. That's what you'll create in Visual Studio in this article, and then we'll move on to something more challenging: a calculator app.

## Prerequisites

- Have Visual Studio with the **Desktop development with C++** workload installed and running on your computer. If it's not installed yet, see [Install C++ support in Visual Studio](../build/vscpp-step-0-installation.md).

## Create your app project

Visual Studio uses *projects* to organize the code for an app, and *solutions* to organize your projects. A project contains all the options, configurations, and rules used to build your apps. It also manages the relationship between all the project's files and any external files. To create your app, first, you'll create a new project and solution.

1. If you've just started Visual Studio, you'll see the Visual Studio 2019 dialog box. Choose **Create a new project** to get started.

   ![The Visual Studio 2019 initial dialog](./media/calc-vs2019-initial-dialog.png "The Visual Studio 2019 initial dialog")

   Otherwise, on the menubar in Visual Studio, choose **File** > **New** > **Project**. The **Create a new project** window opens.

1. In the list of project templates, choose **Console App**, then choose **Next**.

   ![Choose the Console App template](./media/calc-vs2019-choose-console-app.png "Choose the Console App template")

   > [!Important]
   > Make sure you choose the C++ version of the **Console App** template. It has the **C++**, **Windows**, and **Console** tags, and the icon has "++" in the corner.

1. In the **Configure your new project** dialog box, select the **Project name** edit box, name your new project *CalculatorTutorial*, then choose **Create**.

   ![Name your project in the Configure your new project dialog](./media/calc-vs2019-name-your-project.png "Name your project in the Configure your new project dialog")

   An empty C++ Windows console application gets created. Console applications use a Windows console window to display output and accept user input. In Visual Studio, an editor window opens and shows the generated code:

    ```cpp
    // CalculatorTutorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
    //

    #include <iostream>

    int main()
    {
        std::cout << "Hello World!\n";
    }

    // Run program: Ctrl + F5 or Debug > Start Without Debugging menu
    // Debug program: F5 or Debug > Start Debugging menu

    // Tips for Getting Started:
    //   1. Use the Solution Explorer window to add/manage files
    //   2. Use the Team Explorer window to connect to source control
    //   3. Use the Output window to see build output and other messages
    //   4. Use the Error List window to view errors
    //   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
    //   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
    ```

## Verify that your new app builds and runs

The template for a new Windows console application creates a simple C++ "Hello World" app. At this point, you can see how Visual Studio builds and runs the apps you create right from the IDE.

1. To build your project, choose **Build Solution** from the **Build** menu. The **Output** window shows the results of the build process.

   ![Build the project](./media/calc-vs2019-build-your-project.png "Build the project")

1. To run the code, on the menu bar, choose **Debug**, **Start without debugging**.

   ![Start the project](./media/calc-vs2019-hello-world-console.png "Start the project")

   A console window opens and then runs your app. When you start a console app in Visual Studio, it runs your code, then prints "Press any key to close this window . . ." to give you a chance to see the output. Congratulations! You've created your first "Hello, world!" console app in Visual Studio!

1. Press a key to dismiss the console window and return to Visual Studio.

You now have the tools to build and run your app after every change, to verify that the code still works as you expect. Later, we'll show you how to debug it if it doesn't.

## Edit the code

Now let's turn the code in this template into a calculator app.

1. In the *CalculatorTutorial.cpp* file, edit the code to match this example:

    ```cpp
    // CalculatorTutorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
    //

    #include <iostream>

    using namespace std;

    int main()
    {
        cout << "Calculator Console Application" << endl << endl;
        cout << "Please enter the operation to perform. Format: a + b | a - b | a * b | a / b"
            << endl;
        return 0;
    }

    // Run program: Ctrl + F5 or Debug > Start Without Debugging menu
    // Debug program: F5 or Debug > Start Debugging menu
    // Tips for Getting Started:
    //   1. Use the Solution Explorer window to add/manage files
    //   2. Use the Team Explorer window to connect to source control
    //   3. Use the Output window to see build output and other messages
    //   4. Use the Error List window to view errors
    //   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
    //   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
    ```

   > Understanding the code:
   >
   > - The `#include` statements allow you to reference code located in other files. Sometimes, you may see a filename surrounded by angle brackets (**\<\>**); other times, it's surrounded by quotes (**" "**). In general, angle brackets are used when referencing the C++ Standard Library, while quotes are used for other files.
   > - The `using namespace std;` line tells the compiler to expect stuff from the C++ Standard Library to be used in this file. Without this line, each keyword from the library would have to be preceded with a `std::`, to denote its scope. For instance, without that line, each reference to `cout` would have to be written as `std::cout`. The `using` statement is added to make the code look more clean.
   > - The `cout` keyword is used to print to standard output in C++. The **\<\<** operator tells the compiler to send whatever is to the right of it to the standard output.
   > - The **endl** keyword is like the Enter key; it ends the line and moves the cursor to the next line. It is a better practice to put a `\n` inside the string (contained by "") to do the same thing, as `endl` always flushes the buffer and can hurt the performance of the program, but since this is a very small app, `endl` is used instead for better readability.
   > - All C++ statements must end with semicolons and all C++ applications must contain a `main()` function. This function is what the program runs at the start. All code must be accessible from `main()` in order to be used.

1. To save the file, enter **Ctrl+S**, or choose the **Save** icon near the top of the IDE, the floppy disk icon in the toolbar under the menu bar.

1. To run the application, press **Ctrl+F5** or go to the **Debug** menu and choose **Start Without Debugging**. You should see a console window appear that displays the text specified in the code.

1. Close the console window when you're done.

## Add code to do some math

It's time to add some math logic.

### To add a Calculator class

1. Go to the **Project** menu and choose **Add Class**. In the **Class Name** edit box, enter *Calculator*. Choose **OK**. Two new files get added to your project. To save all your changed files at once, press **Ctrl+Shift+S**. It's a keyboard shortcut for **File** > **Save All**. There's also a toolbar button for **Save All**, an icon of two floppy disks, found beside the **Save** button. In general, it's good practice to do **Save All** frequently, so you don't miss any files when you save.

   ![Create the Calculator class](./media/calc-vs2019-create-calculator-class.png "Create the Calculator class")

   A class is like a blueprint for an object that does something. In this case, we define a calculator and how it should work. The **Add Class** wizard you used above created .h and .cpp files that have the same name as the class. You can see a full list of your project files in the **Solution Explorer** window, visible on the side of the IDE. If the window isn't visible, you can open it from the menu bar: choose **View** > **Solution Explorer**.

   ![Solution Explorer](./media/calc-vs2019-solution-explorer.png "Solution Explorer")

   You should now have three tabs open in the editor: *CalculatorTutorial.cpp*, *Calculator.h*, and *Calculator.cpp*. If you accidentally close one of them, you can reopen it by double-clicking it in the **Solution Explorer** window.

1. In **Calculator.h**, remove the `Calculator();` and `~Calculator();` lines that were generated, since you won't need them here. Next, add the following line of code so the file now looks like this:

    ```cpp
    #pragma once
    class Calculator
    {
    public:
        double Calculate(double x, char oper, double y);
    };
    ```

   > Understanding the code
   >
   > - The line you added declares a new function called `Calculate`, which we'll use to run math operations for addition, subtraction, multiplication, and division.
   > - C++ code is organized into *header* (.h) files and *source* (.cpp) files. Several other file extensions are supported by various compilers, but these are the main ones to know about. Functions and variables are normally *declared*, that is, given a name and a type, in header files, and *implemented*, or given a definition, in source files. To access code defined in another file, you can use `#include "filename.h"`, where 'filename.h' is the name of the file that declares the variables or functions you want to use.
   > - The two lines you deleted declared a *constructor* and *destructor* for the class. For a simple class like this one, the compiler creates them for you, and their uses are beyond the scope of this tutorial.
   > - It's good practice to organize your code into different files based on what it does, so it's easy to find the code you need later. In our case, we define the `Calculator` class separately from the file containing the `main()` function, but we plan to reference the `Calculator` class in `main()`.

1. You'll see a green squiggle appear under `Calculate`. It's because we haven't defined the `Calculate` function in the .cpp file. Hover over the word, click the lightbulb (in this case, a screwdriver) that pops up, and choose **Create definition of 'Calculate' in Calculator.cpp**.

   ![Create definition of Calculate](./media/calc-vs2019-create-definition.png "Create definition of Calculate")

   A pop-up appears that gives you a peek of the code change that was made in the other file. The code was added to *Calculator.cpp*.

   ![Pop-up with definition of Calculate](./media/calc-vs2019-pop-up-definition.png "Pop-up with definition of Calculate")

   Currently, it just returns 0.0. Let's change that. Press **Esc** to close the pop-up.

1. Switch to the *Calculator.cpp* file in the editor window. Remove the `Calculator()` and `~Calculator()` sections (as you did in the .h file) and add the following code to `Calculate()`:

    ```cpp
    #include "Calculator.h"

    double Calculator::Calculate(double x, char oper, double y)
    {
        switch(oper)
        {
            case '+':
                return x + y;
            case '-':
                return x - y;
            case '*':
                return x * y;
            case '/':
                return x / y;
            default:
                return 0.0;
        }
    }
    ```

   > Understanding the code
   >
   > - The function `Calculate` consumes a number, an operator, and a second number, then performs the requested operation on the numbers.
   > - The switch statement checks which operator was provided, and only executes the case corresponding to that operation. The default: case is a fallback in case the user types an operator that isn't accepted, so the program doesn't break. In general, it's best to handle invalid user input in a more elegant way, but this is beyond the scope of this tutorial.
   > - The `double` keyword denotes a type of number that supports decimals. This way, the calculator can handle both decimal math and integer math. The `Calculate` function is required to always return such a number due to the `double` at the very start of the code (this denotes the function's return type), which is why we return 0.0 even in the default case.
   > - The .h file declares the function *prototype*, which tells the compiler upfront what parameters it requires, and what return type to expect from it. The .cpp file has all the implementation details of the function.

If you build and run the code again at this point, it will still exit after asking which operation to perform. Next, you'll modify the `main` function to do some calculations.

### To call the Calculator class member functions

1. Now let's update the `main` function in *CalculatorTutorial.cpp*:

    ```cpp
    // CalculatorTutorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
    //

    #include <iostream>
    #include "Calculator.h"

    using namespace std;

    int main()
    {
        double x = 0.0;
        double y = 0.0;
        double result = 0.0;
        char oper = '+';

        cout << "Calculator Console Application" << endl << endl;
        cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b"
             << endl;

        Calculator c;
        while (true)
        {
            cin >> x >> oper >> y;
            result = c.Calculate(x, oper, y);
            cout << "Result is: " << result << endl;
        }

        return 0;
    }
    ```

   > Understanding the code
   >
   > - Since C++ programs always start at the `main()` function, we need to call our other code from there, so a `#include` statement is needed.
   > - Some initial variables `x`, `y`, `oper`, and `result` are declared to store the first number, second number, operator, and final result, respectively. It is always good practice to give them some initial values to avoid undefined behavior, which is what is done here.
   > - The `Calculator c;` line declares an object named 'c' as an instance of the `Calculator` class. The class itself is just a blueprint for how calculators work; the object is the specific calculator that does the math.
   > - The `while (true)` statement is a loop. The code inside the loop continues to execute over and over again as long as the condition inside the `()` holds true. Since the condition is simply listed as `true`, it's always true, so the loop runs forever. To close the program, the user must manually close the console window. Otherwise, the program always waits for new input.
   > - The `cin` keyword is used to accept input from the user. This input stream is smart enough to process a line of text entered in the console window and place it inside each of the variables listed, in order, assuming the user input matches the required specification. You can modify this line to accept different types of input, for instance, more than two numbers, though the `Calculate()` function would also need to be updated to handle this.
   > - The `c.Calculate(x, oper, y);` expression calls the `Calculate` function defined earlier, and supplies the entered input values. The function then returns a number that gets stored in `result`.
   > - Finally, `result` is printed to the console, so the user sees the result of the calculation.

### Build and test the code again

Now it's time to test the program again to make sure everything works properly.

1. Press **Ctrl+F5** to rebuild and start the app.

1. Enter `5 + 5`, and press **Enter**. Verify that the result is 10.

   ![The result of 5 + 5](./media/calc-vs2019-five-plus-five.png "The result of 5 + 5")

## Debug the app

Since the user is free to type anything into the console window, let's make sure the calculator handles some input as expected. Instead of running the program, let's debug it instead, so we can inspect what it's doing in detail, step-by-step.

### To run the app in the debugger

1. Set a breakpoint on the `result = c.Calculate(x, oper, y);` line, just after the user was asked for input. To set the breakpoint, click next to the line in the gray vertical bar along the left edge of the editor window. A red dot appears.

   ![Set a breakpoint](./media/calc-vs2019-set-breakpoint.png "Set a breakpoint")

   Now when we debug the program, it always pauses execution at that line. We already have a rough idea that the program works for simple cases. Since we don't want to pause execution every time, let's make the breakpoint conditional.

1. Right-click the red dot that represents the breakpoint, and choose **Conditions**. In the edit box for the condition, enter `(y == 0) && (oper == '/')`. Choose the **Close** button when you're done. The condition is saved automatically.

   ![Set a conditional breakpoint](./media/calc-vs2019-conditional-breakpoint.png "Set a conditional breakpoint")

   Now we pause execution at the breakpoint specifically if a division by 0 is attempted.

1. To debug the program, press **F5**, or choose the **Local Windows Debugger** toolbar button that has the green arrow icon. In your console app, if you enter something like "5 - 0", the program behaves normally and keeps running. However, if you type "10 / 0", it pauses at the breakpoint. You can even put any number of spaces between the operator and numbers: `cin` is smart enough to parse the input appropriately.

   ![Pause at the conditional breakpoint](./media/calc-vs2019-debug-breakpoint.png "Pause at the conditional breakpoint")

### Useful windows in the debugger

Whenever you debug your code, you may notice that some new windows appear. These windows can assist your debugging experience. Take a look at the **Autos** window. The **Autos** window shows you the current values of variables used at least three lines before and up to the current line. To see all of the variables from that function, switch to the **Locals** window. You can actually modify the values of these variables while debugging, to see what effect they would have on the program. In this case, we'll leave them alone.

   ![The Locals window](./media/calc-vs2019-debug-locals.png "The Locals window")

You can also just hover over variables in the code itself to see their current values where the execution is currently paused. Make sure the editor window is in focus by clicking on it first.

   ![Hover to view current variable values](./media/calc-vs2019-hover-tooltip.png "Hover to view current variable values")

### To continue debugging

1. The yellow line on the left shows the current point of execution. The current line calls `Calculate`, so press **F11** to **Step Into** the function. You'll find yourself in the body of the `Calculate` function. Be careful with **Step Into**; if you do it too much, you may waste a lot of time. It goes into any code you use on the line you are on, including standard library functions.

1. Now that the point of execution is at the start of the `Calculate` function, press **F10** to move to the next line in the program's execution. **F10** is also known as **Step Over**. You can use **Step Over** to move from line to line, without delving into the details of what is occurring in each part of the line. In general you should use **Step Over** instead of **Step Into**, unless you want to dive more deeply into code that is being called from elsewhere (as you did to reach the body of `Calculate`).

1. Continue using **F10** to **Step Over** each line until you get back to the `main()` function in the other file, and stop on the `cout` line.

   It looks like the program is doing what is expected: it takes the first number, and divides it by the second. On the `cout` line, hover over the `result` variable or take a look at `result` in the **Autos** window. You'll see its value is listed as "inf", which doesn't look right, so let's fix it. The `cout` line just outputs whatever value is stored in `result`, so when you step one more line forward using **F10**, the console window displays:

   ![The result of divide by zero](./media/calc-vs2019-divide-by-zero-fail.png "The result of divide by zero")

   This result happens because division by zero is undefined, so the program doesn't have a numerical answer to the requested operation.

### To fix the "divide by zero" error

Let's handle division by zero more gracefully, so a user can understand the problem.

1. Make the following changes in *CalculatorTutorial.cpp*. (You can leave the program running as you edit, thanks to a debugger feature called **Edit and Continue**):

    ```cpp
    // CalculatorTutorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
    //

    #include <iostream>
    #include "Calculator.h"

    using namespace std;

    int main()
    {
        double x = 0.0;
        double y = 0.0;
        double result = 0.0;
        char oper = '+';

        cout << "Calculator Console Application" << endl << endl;
        cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b" << endl;

        Calculator c;
        while (true)
        {
            cin  >> x  >> oper  >> y;
            if (oper == '/' && y == 0)
            {
                cout << "Division by 0 exception" << endl;
                continue;
            }
            else
            {
                result = c.Calculate(x, oper, y);
            }
            cout << "Result is: " << result << endl;
        }

        return 0;
    }
    ```

1. Now press **F5** once. Program execution continues all the way until it has to pause to ask for user input. Enter `10 / 0` again. Now, a more helpful message is printed. The user is asked for more input, and the program continues executing normally.

   ![The final result after changes](./media/calc-vs2019-final-verification.png "The final result after changes")

   > [!Note]
   > When you edit code while in debugging mode, there is a risk of code becoming stale. This happens when the debugger is still running your old code, and has not yet updated it with your changes. The debugger pops up a dialog to inform you when this happens. Sometimes, you may need to press **F5** to refresh the code being executed. In particular, if you make a change inside a function while the point of execution is inside that function, you'll need to step out of the function, then back into it again to get the updated code. If that doesn't work for some reason and you see an error message, you can stop debugging by clicking on the red square in the toolbar under the menus at the top of the IDE, then start debugging again by entering **F5** or by choosing the green "play" arrow beside the stop button on the toolbar.

   > Understanding the Run and Debug shortcuts
   >
   > - **F5** (or **Debug** > **Start Debugging**) starts a debugging session if one isn't already active, and runs the program until a breakpoint is hit or the program needs user input. If no user input is needed and no breakpoint is available to hit, the program terminates and the console window closes itself when the program finishes running. If you have something like a "Hello World" program to run, use **Ctrl+F5** or set a breakpoint before you enter **F5** to keep the window open.
   > - **Ctrl+F5** (or **Debug** > **Start Without Debugging**) runs the application without going into debug mode. This is slightly faster than debugging, and the console window stays open after the program finishes executing.
   > - **F10** (known as **Step Over**) lets you iterate through code, line-by-line, and visualize how the code is run and what variable values are at each step of execution.
   > - **F11** (known as **Step Into**) works similarly to **Step Over**, except it steps into any functions called on the line of execution. For example, if the line being executed calls a function, pressing **F11** moves the pointer into the body of the function, so you can follow the function's code being run before coming back to the line you started at. Pressing **F10** steps over the function call and just moves to the next line; the function call still happens, but the program doesn't pause to show you what it's doing.

### Close the app

- If it's still running, close the console window for the calculator app.

## The finished app

Congratulations! You've completed the code for the calculator app, and built and debugged it in Visual Studio.

## Next steps

[Learn more about Visual Studio for C++](https://blogs.msdn.microsoft.com/vcblog/2017/04/21/getting-started-with-visual-studio-for-c-and-cpp-development/)

::: moniker-end

::: moniker range="<vs-2019"

The usual starting point for a C++ programmer is a "Hello, world!" application that runs on the command line. That's what you'll create in Visual Studio in this article, and then we'll move on to something more challenging: a calculator app.

## Prerequisites

- Have Visual Studio with the **Desktop development with C++** workload installed and running on your computer. If it's not installed yet, see [Install C++ support in Visual Studio](../build/vscpp-step-0-installation.md).

## Create your app project

Visual Studio uses *projects* to organize the code for an app, and *solutions* to organize your projects. A project contains all the options, configurations, and rules used to build your apps. It also manages the relationship between all the project's files and any external files. To create your app, first, you'll create a new project and solution.

1. On the menubar in Visual Studio, choose **File** > **New** > **Project**. The **New Project** window opens.

2. On the left sidebar, make sure **Visual C++** is selected. In the center, choose **Windows Console Application**.

3. In the **Name** edit box at the bottom, name the new project *CalculatorTutorial*, then choose **OK**.

   ![The New Project dialog](./media/calculator-new-project-dialog.png "The New Project dialog")

   An empty C++ Windows console application gets created. Console applications use a Windows console window to display output and accept user input. In Visual Studio, an editor window opens and shows the generated code:

    ```cpp
    // CalculatorTutorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
    //

    #include "pch.h"
    #include <iostream>

    int main()
    {
        std::cout << "Hello World!\n"; 
    }

    // Run program: Ctrl + F5 or Debug > Start Without Debugging menu
    // Debug program: F5 or Debug > Start Debugging menu

    // Tips for Getting Started: 
    //   1. Use the Solution Explorer window to add/manage files
    //   2. Use the Team Explorer window to connect to source control
    //   3. Use the Output window to see build output and other messages
    //   4. Use the Error List window to view errors
    //   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
    //   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
    ```

## Verify that your new app builds and runs

The template for a new windows console application creates a simple C++ "Hello World" app. At this point, you can see how Visual Studio builds and runs the apps you create right from the IDE.

1. To build your project, choose **Build Solution** from the **Build** menu. The **Output** window shows the results of the build process.

   ![Build the project](./media/calculator-initial-build-output.png "Build the project")

1. To run the code, on the menu bar, choose **Debug**, **Start without debugging**.

   ![Start the project](./media/calculator-hello-world-console.png "Start the project")

   A console window opens and then runs your app. When you start a console app in Visual Studio, it runs your code, then prints "Press any key to continue . . ." to give you a chance to see the output. Congratulations! You've created your first "Hello, world!" console app in Visual Studio!

1. Press a key to dismiss the console window and return to Visual Studio.

You now have the tools to build and run your app after every change, to verify that the code still works as you expect. Later, we'll show you how to debug it if it doesn't.

## Edit the code

Now let's turn the code in this template into a calculator app.

1. In the *CalculatorTutorial.cpp* file, edit the code to match this example:

    ```cpp
    // CalculatorTutorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
    //

    #include "pch.h"
    #include <iostream>

    using namespace std;

    int main()
    {
        cout << "Calculator Console Application" << endl << endl;
        cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b"
            << endl;
        return 0;
    }

    // Run program: Ctrl + F5 or Debug > Start Without Debugging menu
    // Debug program: F5 or Debug > Start Debugging menu
    // Tips for Getting Started:
    //   1. Use the Solution Explorer window to add/manage files
    //   2. Use the Team Explorer window to connect to source control
    //   3. Use the Output window to see build output and other messages
    //   4. Use the Error List window to view errors
    //   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
    //   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
    ```

   > Understanding the code:
   >
   > - The `#include` statements allow you to reference code located in other files. Sometimes, you may see a filename surrounded by angle brackets (**\<\>**); other times, it's surrounded by quotes (**" "**). In general, angle brackets are used when referencing the C++ Standard Library, while quotes are used for other files.
   > - The `#include "pch.h"` (or in Visual Studio 2017 and earlier, `#include "stdafx.h"`) line references something known as a precompiled header. These are often used by professional programmers to improve compilation times, but they are beyond the scope of this tutorial.
   > - The `using namespace std;` line tells the compiler to expect stuff from the C++ Standard Library to be used in this file. Without this line, each keyword from the library would have to be preceded with a `std::`, to denote its scope. For instance, without that line, each reference to `cout` would have to be written as `std::cout`. The `using` statement is added to make the code look more clean.
   > - The `cout` keyword is used to print to standard output in C++. The **\<\<** operator tells the compiler to send whatever is to the right of it to the standard output.
   > - The **endl** keyword is like the Enter key; it ends the line and moves the cursor to the next line. It is a better practice to put a `\n` inside the string (contained by "") to do the same thing, as `endl` always flushes the buffer and can hurt the performance of the program, but since this is a very small app, `endl` is used instead for better readability.
   > - All C++ statements must end with semicolons and all C++ applications must contain a `main()` function. This function is what the program runs at the start. All code must be accessible from `main()` in order to be used.

1. To save the file, enter **Ctrl+S**, or choose the **Save** icon near the top of the IDE, the floppy disk icon in the toolbar under the menu bar.

1. To run the application, press **Ctrl+F5** or go to the **Debug** menu and choose **Start Without Debugging**. If you get a pop-up that says **This project is out of date**, you may select **Do not show this dialog again**, and then choose **Yes** to build your application. You should see a console window appear that displays the text specified in the code.

   ![Build and start your application](./media/calculator-first-launch.gif "Build and start your application")

1. Close the console window when you're done.

## Add code to do some math

It's time to add some math logic.

### To add a Calculator class

1. Go to the **Project** menu and choose **Add Class**. In the **Class Name** edit box, enter *Calculator*. Choose **OK**. Two new files get added to your project. To save all your changed files at once, press **Ctrl+Shift+S**. It's a keyboard shortcut for **File** > **Save All**. There's also a toolbar button for **Save All**, an icon of two floppy disks, found beside the **Save** button. In general, it's good practice to do **Save All** frequently, so you don't miss any files when you save.

   ![Create the Calculator class](./media/calculator-create-class.gif "Create the Calculator class")

   A class is like a blueprint for an object that does something. In this case, we define a calculator and how it should work. The **Add Class** wizard you used above created .h and .cpp files that have the same name as the class. You can see a full list of your project files in the **Solution Explorer** window, visible on the side of the IDE. If the window isn't visible, you can open it from the menu bar: choose **View** > **Solution Explorer**.

   ![Solution Explorer](./media/calculator-solution-explorer.png "Solution Explorer")

   You should now have three tabs open in the editor: *CalculatorTutorial.cpp*, *Calculator.h*, and *Calculator.cpp*. If you accidentally close one of them, you can reopen it by double-clicking it in the **Solution Explorer** window.

1. In **Calculator.h**, remove the `Calculator();` and `~Calculator();` lines that were generated, since you won't need them here. Next, add the following line of code so the file now looks like this:

    ```cpp
    #pragma once
    class Calculator
    {
    public:
        double Calculate(double x, char oper, double y);
    };
    ```

   > Understanding the code
   >
   > - The line you added declares a new function called `Calculate`, which we'll use to run math operations for addition, subtraction, multiplication, and division.
   > - C++ code is organized into *header* (.h) files and *source* (.cpp) files. Several other file extensions are supported by various compilers, but these are the main ones to know about. Functions and variables are normally *declared*, that is, given a name and a type, in header files, and *implemented*, or given a definition, in source files. To access code defined in another file, you can use `#include "filename.h"`, where 'filename.h' is the name of the file that declares the variables or functions you want to use.
   > - The two lines you deleted declared a *constructor* and *destructor* for the class. For a simple class like this one, the compiler creates them for you, and their uses are beyond the scope of this tutorial.
   > - It's good practice to organize your code into different files based on what it does, so it's easy to find the code you need later. In our case, we define the `Calculator` class separately from the file containing the `main()` function, but we plan to reference the `Calculator` class in `main()`.

1. You'll see a green squiggle appear under `Calculate`. It's because we haven't defined the `Calculate` function in the .cpp file. Hover over the word, click the lightbulb that pops up, and choose **Create definition of 'Calculate' in Calculator.cpp**. A pop-up appears that gives you a peek of the code change that was made in the other file. The code was added to *Calculator.cpp*.

   ![Create definition of Calculate](./media/calculator-create-definition.gif "Create definition of Calculate")

   Currently, it just returns 0.0. Let's change that. Press **Esc** to close the pop-up.

1. Switch to the *Calculator.cpp* file in the editor window. Remove the `Calculator()` and `~Calculator()` sections (as you did in the .h file) and add the following code to `Calculate()`:

    ```cpp
    #include "pch.h"
    #include "Calculator.h"

    double Calculator::Calculate(double x, char oper, double y)
    {
        switch(oper)
        {
            case '+':
                return x + y;
            case '-':
                return x - y;
            case '*':
                return x * y;
            case '/':
                return x / y;
            default:
                return 0.0;
        }
    }
    ```

   > Understanding the code
   >
   > - The function `Calculate` consumes a number, an operator, and a second number, then performs the requested operation on the numbers.
   > - The switch statement checks which operator was provided, and only executes the case corresponding to that operation. The default: case is a fallback in case the user types an operator that isn't accepted, so the program doesn't break. In general, it's best to handle invalid user input in a more elegant way, but this is beyond the scope of this tutorial.
   > - The `double` keyword denotes a type of number that supports decimals. This way, the calculator can handle both decimal math and integer math. The `Calculate` function is required to always return such a number due to the `double` at the very start of the code (this denotes the function's return type), which is why we return 0.0 even in the default case.
   > - The .h file declares the function *prototype*, which tells the compiler upfront what parameters it requires, and what return type to expect from it. The .cpp file has all the implementation details of the function.

If you build and run the code again at this point, it will still exit after asking which operation to perform. Next, you'll modify the `main` function to do some calculations.

### To call the Calculator class member functions

1. Now let's update the `main` function in *CalculatorTutorial.cpp*:

    ```cpp
    // CalculatorTutorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
    //

    #include "pch.h"
    #include <iostream>
    #include "Calculator.h"

    using namespace std;

    int main()
    {
        double x = 0.0;
        double y = 0.0;
        double result = 0.0;
        char oper = '+';

        cout << "Calculator Console Application" << endl << endl;
        cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b"
             << endl;

        Calculator c;
        while (true)
        {
            cin >> x >> oper >> y;
            result = c.Calculate(x, oper, y);
            cout << "Result is: " << result << endl;
        }

        return 0;
    }
    ```

   > Understanding the code
   >
   > - Since C++ programs always start at the `main()` function, we need to call our other code from there, so a `#include` statement is needed.
   > - Some initial variables `x`, `y`, `oper`, and `result` are declared to store the first number, second number, operator, and final result, respectively. It is always good practice to give them some initial values to avoid undefined behavior, which is what is done here.
   > - The `Calculator c;` line declares an object named 'c' as an instance of the `Calculator` class. The class itself is just a blueprint for how calculators work; the object is the specific calculator that does the math.
   > - The `while (true)` statement is a loop. The code inside the loop continues to execute over and over again as long as the condition inside the `()` holds true. Since the condition is simply listed as `true`, it's always true, so the loop runs forever. To close the program, the user must manually close the console window. Otherwise, the program always waits for new input.
   > - The `cin` keyword is used to accept input from the user. This input stream is smart enough to process a line of text entered in the console window and place it inside each of the variables listed, in order, assuming the user input matches the required specification. You can modify this line to accept different types of input, for instance, more than two numbers, though the `Calculate()` function would also need to be updated to handle this.
   > - The `c.Calculate(x, oper, y);` expression calls the `Calculate` function defined earlier, and supplies the entered input values. The function then returns a number that gets stored in `result`.
   > - Finally, `result` is printed to the console, so the user sees the result of the calculation.

### Build and test the code again

Now it's time to test the program again to make sure everything works properly.

1. Press **Ctrl+F5** to rebuild and start the app.

1. Enter `5 + 5`, and press **Enter**. Verify that the result is 10.

   ![The result of 5 + 5](./media/calculator-five-plus-five.png "The result of 5 + 5")

## Debug the app

Since the user is free to type anything into the console window, let's make sure the calculator handles some input as expected. Instead of running the program, let's debug it instead, so we can inspect what it's doing in detail, step-by-step.

### To run the app in the debugger

1. Set a breakpoint on the `result = c.Calculate(x, oper, y);` line, just after the user was asked for input. To set the breakpoint, click next to the line in the gray vertical bar along the left edge of the editor window. A red dot appears.

   ![Set a breakpoint](./media/calculator-set-breakpoint.gif "Set a breakpoint")

   Now when we debug the program, it always pauses execution at that line. We already have a rough idea that the program works for simple cases. Since we don't want to pause execution every time, let's make the breakpoint conditional.

1. Right-click the red dot that represents the breakpoint, and choose **Conditions**. In the edit box for the condition, enter `(y == 0) && (oper == '/')`. Choose the **Close** button when you're done. The condition is saved automatically.

   ![Set a conditional breakpoint](./media/calculator-conditional-breakpoint.gif "Set a conditional breakpoint")

   Now we pause execution at the breakpoint specifically if a division by 0 is attempted.

1. To debug the program, press **F5**, or choose the **Local Windows Debugger** toolbar button that has the green arrow icon. In your console app, if you enter something like "5 - 0", the program behaves normally and keeps running. However, if you type "10 / 0", it pauses at the breakpoint. You can even put any number of spaces between the operator and numbers; `cin` is smart enough to parse the input appropriately.

   ![Pause at the conditional breakpoint](./media/calculator-debug-conditional.gif "Pause at the conditional breakpoint")

### Useful windows in the debugger

Whenever you debug your code, you may notice that some new windows appear. These windows can assist your debugging experience. Take a look at the **Autos** window. The **Autos** window shows you the current values of variables used at least three lines before and up to the current line.

   ![The Autos window](./media/calculator-autos.png "The Autos window")

To see all of the variables from that function, switch to the **Locals** window. You can actually modify the values of these variables while debugging, to see what effect they would have on the program. In this case, we'll leave them alone.

   ![The Locals window](./media/calculator-locals.png "The Locals window")

You can also just hover over variables in the code itself to see their current values where the execution is currently paused. Make sure the editor window is in focus by clicking on it first.

   ![Hover to view current variable values](./media/calculator-hover-tooltip.gif "Hover to view current variable values")

### To continue debugging

1. The yellow line on the left shows the current point of execution. The current line calls `Calculate`, so press **F11** to **Step Into** the function. You'll find yourself in the body of the `Calculate` function. Be careful with **Step Into**; if you do it too much, you may waste a lot of time. It goes into any code you use on the line you are on, including standard library functions.

1. Now that the point of execution is at the start of the `Calculate` function, press **F10** to move to the next line in the program's execution. **F10** is also known as **Step Over**. You can use **Step Over** to move from line to line, without delving into the details of what is occurring in each part of the line. In general you should use **Step Over** instead of **Step Into**, unless you want to dive more deeply into code that is being called from elsewhere (as you did to reach the body of `Calculate`).

1. Continue using **F10** to **Step Over** each line until you get back to the `main()` function in the other file, and stop on the `cout` line.

   ![Step out of Calculate and check result](./media/calculator-undefined-zero.gif "Step out of Calculate and check result")

   It looks like the program is doing what is expected: it takes the first number, and divides it by the second. On the `cout` line, hover over the `result` variable or take a look at `result` in the **Autos** window. You'll see its value is listed as "inf", which doesn't look right, so let's fix it. The `cout` line just outputs whatever value is stored in `result`, so when you step one more line forward using **F10**, the console window displays:

   ![The result of divide by zero](./media/calculator-divide-by-zero-fail.png "The result of divide by zero")

   This result happens because division by zero is undefined, so the program doesn't have a numerical answer to the requested operation.

### To fix the "divide by zero" error

Let's handle division by zero more gracefully, so a user can understand the problem.

1. Make the following changes in *CalculatorTutorial.cpp*. (You can leave the program running as you edit, thanks to a debugger feature called **Edit and Continue**):

    ```cpp
    // CalculatorTutorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
    //

    #include "pch.h"
    #include <iostream>
    #include "Calculator.h"

    using namespace std;

    int main()
    {
        double x = 0.0;
        double y = 0.0;
        double result = 0.0;
        char oper = '+';

        cout << "Calculator Console Application" << endl << endl;
        cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b" << endl;

        Calculator c;
        while (true)
        {
            cin  >> x  >> oper  >> y;
            if (oper == '/' && y == 0)
            {
                cout << "Division by 0 exception" << endl;
                continue;
            }
            else
            {
                result = c.Calculate(x, oper, y);
            }
            cout << "Result is: " << result << endl;
        }

        return 0;
    }
    ```

1. Now press **F5** once. Program execution continues all the way until it has to pause to ask for user input. Enter `10 / 0` again. Now, a more helpful message is printed. The user is asked for more input, and the program continues executing normally.

   ![The final result after changes](./media/calculator-final-verification.gif "The final result after changes")

   > [!Note]
   > When you edit code while in debugging mode, there is a risk of code becoming stale. This happens when the debugger is still running your old code, and has not yet updated it with your changes. The debugger pops up a dialog to inform you when this happens. Sometimes, you may need to press **F5** to refresh the code being executed. In particular, if you make a change inside a function while the point of execution is inside that function, you'll need to step out of the function, then back into it again to get the updated code. If that doesn't work for some reason and you see an error message, you can stop debugging by clicking on the red square in the toolbar under the menus at the top of the IDE, then start debugging again by entering **F5** or by choosing the green "play" arrow beside the stop button on the toolbar.
   
   > Understanding the Run and Debug shortcuts
   >
   > - **F5** (or **Debug** > **Start Debugging**) starts a debugging session if one isn't already active, and runs the program until a breakpoint is hit or the program needs user input. If no user input is needed and no breakpoint is available to hit, the program terminates and the console window closes itself when the program finishes running. If you have something like a "Hello World" program to run, use **Ctrl+F5** or set a breakpoint before you enter **F5** to keep the window open.
   > - **Ctrl+F5** (or **Debug** > **Start Without Debugging**) runs the application without going into debug mode. This is slightly faster than debugging, and the console window stays open after the program finishes executing.
   > - **F10** (known as **Step Over**) lets you iterate through code, line-by-line, and visualize how the code is run and what variable values are at each step of execution.
   > - **F11** (known as **Step Into**) works similarly to **Step Over**, except it steps into any functions called on the line of execution. For example, if the line being executed calls a function, pressing **F11** moves the pointer into the body of the function, so you can follow the function's code being run before coming back to the line you started at. Pressing **F10** steps over the function call and just moves to the next line; the function call still happens, but the program doesn't pause to show you what it's doing.

### Close the app

- If it's still running, close the console window for the calculator app.

## The finished app

Congratulations! You've completed the code for the calculator app, and built and debugged it in Visual Studio.

## Next steps

[Learn more about Visual Studio for C++](https://blogs.msdn.microsoft.com/vcblog/2017/04/21/getting-started-with-visual-studio-for-c-and-cpp-development/)

::: moniker-end
