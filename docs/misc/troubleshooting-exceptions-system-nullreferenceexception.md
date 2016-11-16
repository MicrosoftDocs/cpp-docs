---
title: "Troubleshooting Exceptions: System.NullReferenceException | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "JScript"
  - "VB"
  - "CSharp"
  - "C++"
helpviewer_keywords: 
  - "NullReferenceException class"
ms.assetid: 4822b0b4-8105-43fb-887a-3cc51ff02899
caps.latest.revision: 29
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Troubleshooting Exceptions: System.NullReferenceException
A <xref:System.NullReferenceException> occurs  when you try to use a method or property of a *reference type* ([C#](/dotnet/articles/csharp/language-reference/keywords/reference-types), [Visual Basic](/dotnet/articles/visual-basic/programming-guide/language-features/data-types/value-types-and-reference-types)) whose value is `null`. For example, you may have tried to use an object without first using the [new](/dotnet/articles/csharp/language-reference/keywords/new) keyword ([New](/dotnet/articles/visual-basic/language-reference/operators/new-operator) in Visual Basic), or tried to use an object whose value was set to [null](/dotnet/articles/csharp/language-reference/keywords/null) ([Nothing](/dotnet/articles/visual-basic/language-reference/nothing) in Visual Basic).  
  
##  <a name="BKMK_Contents"></a> Sections in this article  
 [Classes used in this article](#BKMK_Classes_used_in_the_examples)  
  
 [Common causes of NullReferenceExceptions](#BKMK_Common_causes_of_NullReferenceExceptions)  
  
 [Finding the source of a null reference exception during development](#BKMK_Find_the_source_of_a_null_reference_exception_during_development)  
  
 [Avoiding NullReferenceExceptions](#BKMK_Avoid_NullReferenceExceptions)  
  
 [Handling NullReferenceExceptions in release code](#BKMK_Handle_NullReferenceExceptions_in_release_code)  
  
##  <a name="BKMK_Classes_used_in_the_examples"></a> Classes used in this article  
 Most of the examples in this article use one or both of these classes:  
  
```c#  
public class Automobile  
{  
    public EngineInfo Engine {get; set;}  
}  
  
public class EngineInfo  
{  
    public EngineInfo() { }  
  
    public EngineInfo(string powerSrc, double engineSize)  
    {  
        Power = powerSrc;  
        Size = engineSize;  
    }  
  
    public double Size { get; set; }  
    public string Power = null;  
}  
  
```  
  
```vb  
Public Class Automobile  
    Public Property Engine As EngineInfo  
End Class  
  
Public Class EngineInfo  
    Public Sub New()  
    End Sub  
  
    Public Sub New(powerSrc As String, engineSize As Double)  
        Power = powerSrc  
        Size = engineSize  
    End Sub  
  
    Public Property Size() As Double  
    Public Power As String = Nothing  
End Class  
  
```  
  
 ![Back to top](../misc/media/pcs_backtotop.png "PCS_BackToTop") [Sections in this article](#BKMK_Contents)  
  
##  <a name="BKMK_Common_causes_of_NullReferenceExceptions"></a> Common causes of NullReferenceExceptions  
 Any reference type variable can be null. Local variables, the properties of a class, method parameters, and method return values can all contain a null reference. Calling methods or properties of these variables when they are null causes a NullReferenceException. Specific cases:  
  
 [A local variable or member field is declared but not initialized](#BKMK_A_local_variable_or_member_field_is_declared_but_not_initialized)  
  
 [A property or field is null](#BKMK_A_property_or_field_is_null)  
  
 [A method parameter is null](#BKMK_A_method_parameter_is_null)  
  
 [The return value of a method is null](#BKMK_The_return_value_of_a_method_is_null)  
  
 [An object in a collection or array is null](#BKMK_An_object_in_a_collection_or_array_is_null)  
  
 [An object is not created because of a condition](#BKMK_An_object_is_not_created_because_of_a_condition)  
  
 [An object passed by reference to a method is set to null](#BKMK_An_object_passed_by_reference_to_a_method_is_set_to_null)  
  
###  <a name="BKMK_A_local_variable_or_member_field_is_declared_but_not_initialized"></a> A local variable or member field is declared but not initialized  
 This simple error happens most frequently in Visual Basic code. Except in situations like declaring a variable to be passed as an out parameter, the C# compiler does not allow the use of a local reference variable unless it's initialized. The Visual Basic compiler generates a warning.  
  
-   In the following C# code, the highlighted line generates this compiler error:  
  
 **Use of unassigned local variable 'engine'**  
  
-   In the Visual Basic code, the highlighted line generates compiler warning BC42104:  
  
 **Variable 'engine' is used before it has been assigned a value.**  
**A null reference exception could result at runtime.**     And the line does throw a NullReferenceException when it runs.  
  
```c#  
public void NullReferencFromUninitializedLocalVariable()  
{  
    EngineInfo engine;  
    Console.WriteLine(engine.ToString());  
}  
```  
  
```vb  
Public Sub NullReferencFromUninitializedLocalVariable()  
    Dim engine As EngineInfo  
    Console.WriteLine(engine.ToString())  
End Sub  
```  
  
 ![Back to top](../misc/media/pcs_backtotop.png "PCS_BackToTop") [Common causes of NullReferenceExceptions](#BKMK_Common_causes_of_NullReferenceExceptions)  
  
 ![Back to top](../misc/media/pcs_backtotop.png "PCS_BackToTop") [Sections in this article](#BKMK_Contents)  
  
###  <a name="BKMK_A_property_or_field_is_null"></a> A property or field is null  
 The fields and properties of a class are automatically initialized to their [default value](http://msdn.microsoft.com/Library/53a3b505-4b27-444b-b079-0eb84a97cfd8) when the class is created. The default value of a reference type is `null` (`Nothing` in Visual Basic) Calling member methods on a field or property of a parent class when the field or property value is null causes a NullReferenceException.  
  
 In this example, the highlighted line throws a NullReferenceException because the `Engine` property of `car` is auto-initialized to null.  
  
```c#  
public void NullReferenceFromProperty()  
{  
    var car = new Automobile();  
  
    Console.WriteLine(car.Engine.ToString());  
}  
```  
  
```vb  
Public Sub NullReferenceFromProperty()  
    Dim car = New Automobile()  
    Console.WriteLine(car.Engine.ToString())  
End Sub  
```  
  
 ![Back to top](../misc/media/pcs_backtotop.png "PCS_BackToTop") [Common causes of NullReferenceExceptions](#BKMK_Common_causes_of_NullReferenceExceptions)  
  
 ![Back to top](../misc/media/pcs_backtotop.png "PCS_BackToTop") [Sections in this article](#BKMK_Contents)  
  
###  <a name="BKMK_A_method_parameter_is_null"></a> A method parameter is null  
 A method parameter that is a reference type can be `null` (`Nothing` in Visual Basic). Calling member methods or properties on a parameter value that is null causes a NullReferenceException.  
  
 In this example, the highlighted line throws a NullReferenceException because `BadEngineInfoPassedToMethod` calls `NullReferenceFromMethodParameter` with a parameter that is null.  
  
```c  
public void BadEngineInfoPassedToMethod()  
{  
    EngineInfo eng = null;  
    NullReferenceFromMethodParameter(eng);  
}  
  
public void NullReferenceFromMethodParameter(EngineInfo engine)  
{  
    Console.WriteLine(engine.ToString());  
}  
  
```  
  
```vb  
Public Sub BadParameterPassedToMethod() As EngineInfo  
    Dim eng As EngineInfo = Nothing  
    NullReferenceFromMethodParameter(eng)  
End Sub  
  
Public Sub NullReferenceFromMethodParameter(engine As EngineInfo)  
    Console.WriteLine(engine.ToString())  
End Sub  
```  
  
 ![Back to top](../misc/media/pcs_backtotop.png "PCS_BackToTop") [Common causes of NullReferenceExceptions](#BKMK_Common_causes_of_NullReferenceExceptions)  
  
 ![Back to top](../misc/media/pcs_backtotop.png "PCS_BackToTop") [Sections in this article](#BKMK_Contents)  
  
###  <a name="BKMK_The_return_value_of_a_method_is_null"></a> The return value of a method is null  
 A method that returns a reference type can return `null` (`Nothing` in Visual Basic). Calling methods or properties of the returned reference type causes a NullReferenceException when the reference is null.  
  
 In this example, the highlighted line throws a NullReferenceException because the call to `BadGetEngineInfo` returns a null reference in the `NullReferenceFromMethodParameter` method.  
  
```c#  
public EngineInfo BadGetEngineInfo()  
{  
    EngineInfo engine = null;  
    return engine;  
}  
  
public void NullReferenceFromMethodReturnValue()  
{  
    var engine = BadGetEngineInfo();  
    Console.WriteLine(engine.ToString());  
}  
```  
  
```vb  
Public Function BadGetEngineInfo() As EngineInfo  
    Dim engine As EngineInfo = Nothing  
    Return engine  
End Function  
  
Public Sub NullReferenceFromMethodReturnValue()  
    Dim engine = BadGetEngineInfo()  
    Console.WriteLine(engine.ToString())  
End Sub  
  
```  
  
 ![Back to top](../misc/media/pcs_backtotop.png "PCS_BackToTop") [Common causes of NullReferenceExceptions](#BKMK_Common_causes_of_NullReferenceExceptions)  
  
 ![Back to top](../misc/media/pcs_backtotop.png "PCS_BackToTop") [Sections in this article](#BKMK_Contents)  
  
###  <a name="BKMK_An_object_in_a_collection_or_array_is_null"></a> An object in a collection or array is null  
 A list or array of reference types can contain an item that is null. Calling methods or properties of a list item that is null causes a NullReferenceException.  
  
 In this example, the highlighted line in `NullReferenceFromListItem()` throws a NullReferenceException because the call to `BadGetCarList` returns an item that is null.  
  
```c#  
public Automobile[] BadGetCarList()  
{  
    var autos = new Automobile[10];  
    for (int i = 0; i autos.Length; i++)  
    {  
        if (i != 6)  
        {  
            autos[i] = new Automobile();  
        }  
    }  
    return autos;  
}  
  
public void NullReferenceFromListItem()  
{  
    var cars = BadGetCarList();  
    foreach (Automobile car in cars)  
    {  
        Console.WriteLine(car.ToString());  
    }  
}  
```  
  
```vb  
Public Function BadGetCarList() As Automobile()  
    Dim autos = New Automobile(10) {}  
    For i As Integer = 0 To 9  
        If i <> 6 Then  
            autos(i) = New Automobile()  
        End If  
    Next  
    Return autos  
End Function  
  
Public Sub NullReferenceFromListItem()  
    Dim cars = BadGetCarList()  
    For Each car As Automobile In cars  
        Console.WriteLine(car.ToString())  
    Next  
End Sub  
```  
  
 ![Back to top](../misc/media/pcs_backtotop.png "PCS_BackToTop") [Common causes of NullReferenceExceptions](#BKMK_Common_causes_of_NullReferenceExceptions)  
  
 ![Back to top](../misc/media/pcs_backtotop.png "PCS_BackToTop") [Sections in this article](#BKMK_Contents)  
  
###  <a name="BKMK_An_object_is_not_created_because_of_a_condition"></a> An object is not created because of a condition  
 If a reference type is initialized in a conditional block, the object is not created when the condition is false.  
  
 In this example the highlighted line in `NullReferenceFromConditionalCreation` throws a NullReferenceException because it initializes the `engine` variable only if the `DetermineTheCondition()` method returns `true`.  
  
```c#  
 public bool DetermineTheCondition()  
{  
    return false;  
}  
  
public void NullReferenceFromConditionalCreation()  
{  
    EngineInfo engine = null;  
    var condition = DetermineTheCondition();  
    if (condition)  
    {  
        engine = new EngineInfo();  
        engine.Power = "Diesel";  
        engine.Size = 2.4;  
    }  
    Console.WriteLine(engine.Size);  
}  
```  
  
```vb  
Public Function DetermineTheCondition() As Boolean  
    Return False  
End Function  
  
Public Sub NullReferenceFromConditionalCreation()  
    Dim engine As EngineInfo = Nothing  
    Dim condition = DetermineTheCondition()  
    If condition Then  
        engine = New EngineInfo()  
        engine.Power = "Diesel"  
        engine.Size = 2.4  
    End If  
    Console.WriteLine(engine.Size)  
End Sub  
```  
  
 ![Back to top](../misc/media/pcs_backtotop.png "PCS_BackToTop") [Common causes of NullReferenceExceptions](#BKMK_Common_causes_of_NullReferenceExceptions)  
  
 ![Back to top](../misc/media/pcs_backtotop.png "PCS_BackToTop") [Sections in this article](#BKMK_Contents)  
  
### The property of an object passed to a method is set to null  
 When an object is passed as a parameter to a method by value (without use of the `ref` or `out` keyword in C# or the `ByRef` keyword in Visual Basic), the method can't change the memory location of the parameter—what the parameter points to—but it can change the properties of the object.  
  
 In this example, the `NullPropertyReferenceFromPassToMethod` method creates an `Automobile` object and initializes the `Engine` property. It then calls `BadSwapCarEngine`, passing the new object as the parameter. `BadSwapCarEngine` sets the Engine property to null, which causes the highlighted line in `NullPropertyReferenceFromPassToMethod` to throw a NullReferenceException.  
  
```c#  
public void BadSwapCarEngine(Automobile car)  
{  
    car.Engine = null;  
}  
  
public void (Automobile car)  
{  
    car.Engine = new EngineInfo("GAS", 1.5);  
    BadSwapCarEngine(car);  
    Console.WriteLine(car.Engine.ToString());  
}  
  
```  
  
```vb  
Public Sub BadSwapCarEngine(car As Automobile)  
    car.Engine = Nothing  
End Sub  
  
Public Sub NullPropertyReferenceFromPassToMethod()  
    Dim car As New Automobile()  
    car.Engine = New EngineInfo("GAS", 1.5)  
    BadSwapCarEngine(car)  
    Console.WriteLine(car.Engine.ToString())  
End Sub  
```  
  
 ![Back to top](../misc/media/pcs_backtotop.png "PCS_BackToTop") [Common causes of NullReferenceExceptions](#BKMK_Common_causes_of_NullReferenceExceptions)  
  
 ![Back to top](../misc/media/pcs_backtotop.png "PCS_BackToTop") [Sections in this article](#BKMK_Contents)  
  
###  <a name="BKMK_An_object_passed_by_reference_to_a_method_is_set_to_null"></a> An object passed by reference to a method is set to null  
 When you pass a reference type as a parameter to a method by reference (using the `ref` or `out` keyword in C# or the `ByRef` keyword in Visual Basic), you can change the memory location that the parameter points to.  
  
 If you pass a reference type by reference to a method, the method can set the referenced type to `null` (`Nothing` in Visual Basic).  
  
 In this example, the highlighted line in `NullReferenceFromPassToMethodByRef` throws a NullReferenceException because the call to the `BadEngineSwapByRef` method sets the `stockEngine` variable to null.  
  
```c#  
public void BadEngineSwapByRef(ref EngineInfo engine)  
{  
    engine = null;  
}  
  
public void NullReferenceFromPassToMethodByRef()  
{  
    var stockEngine = new EngineInfo();  
    stockEngine.Power = "Gas";  
    stockEngine.Size = 7.0;  
    BadSwapEngineByRef(ref stockEngine);  
    Console.WriteLine(stockEngine.ToString());  
}  
```  
  
```vb  
Public Sub BadSwapEngineByRef(ByRef engine As EngineInfo)  
    engine = Nothing  
End Sub  
  
Public Sub NullReferenceFromPassToMethodByRef()  
    Dim formatStr = "The stock engine has been replaced by a {0} liter {} engine"  
    Dim stockEngine = New EngineInfo()  
    stockEngine.Power = "Gas"  
    stockEngine.Size = 7.0  
    BadSwapEngineByRef(stockEngine)  
    Console.WriteLine(stockEngine.ToString())  
End Sub  
  
```  
  
 ![Back to top](../misc/media/pcs_backtotop.png "PCS_BackToTop") [Common causes of NullReferenceExceptions](#BKMK_Common_causes_of_NullReferenceExceptions)  
  
 ![Back to top](../misc/media/pcs_backtotop.png "PCS_BackToTop") [Sections in this article](#BKMK_Contents)  
  
##  <a name="BKMK_Find_the_source_of_a_null_reference_exception_during_development"></a> Finding the source of a null reference exception during development  
 [Use data tips, the Locals window, and watch windows to see variables values](#BKMK_Use_data_tips_the_Locals_window_and_watch_windows_to_see_variables_values)  
  
 [Walk the call stack to find where a reference variable is not initialized or set to null](#BKMK_Walk_the_call_stack_to_find_where_a_type_reference_is_not_initialized_or_set_to_null_)  
  
 [Set conditional breakpoints to stop debugging when an object is null (Nothing in Visual Basic)](#BKMK_Set_conditional_breakpoints_to_stop_debugging_when_an_object_is_null_Nothing_in_Visual_Basic_)  
  
###  <a name="BKMK_Use_data_tips_the_Locals_window_and_watch_windows_to_see_variables_values"></a> Use data tips, the Locals window, and watch windows to see variables values  
  
-   Rest the pointer on the variable name to see its value in a [data tip](/visualstudio/debugger/view-data-values-in-data-tips-in-the-code-editor). If the variable references an object or a collection, you can expand the data type to examine its properties or elements.  
  
-   Open the **Locals** window to examine the variables that are active in the current context.  
  
-   Use a [watch window](/visualstudio/debugger/watch-and-quickwatch-windows) to focus on how a variable changes as you step through the code.  
  
 ![Back to top](../misc/media/pcs_backtotop.png "PCS_BackToTop") [Finding the source of a null reference exception during development](#BKMK_Find_the_source_of_a_null_reference_exception_during_development)  
  
 ![Back to top](../misc/media/pcs_backtotop.png "PCS_BackToTop") [Sections in this article](#BKMK_Contents)  
  
###  <a name="BKMK_Walk_the_call_stack_to_find_where_a_type_reference_is_not_initialized_or_set_to_null_"></a> Walk the call stack to find where a reference variable is not initialized or set to null  
 The Visual Studio [Call Stack window](http://msdn.microsoft.com/Library/5154a2a1-4729-4dbb-b675-db611a72a731) displays a list of the names of methods that have not completed when the debugger stops at an exception or breakpoint. You can select a name in the **Call Stack** window and choose **Switch to frame** to change the execution context to the method and examine its variables.  
  
 ![Back to top](../misc/media/pcs_backtotop.png "PCS_BackToTop") [Finding the source of a null reference exception during development](#BKMK_Find_the_source_of_a_null_reference_exception_during_development)  
  
 ![Back to top](../misc/media/pcs_backtotop.png "PCS_BackToTop") [Sections in this article](#BKMK_Contents)  
  
###  <a name="BKMK_Set_conditional_breakpoints_to_stop_debugging_when_an_object_is_null_Nothing_in_Visual_Basic_"></a> Set conditional breakpoints to stop debugging when an object is null (Nothing in Visual Basic)  
 You can set a [conditional breakpoint](http://msdn.microsoft.com/library/5557y8b4.aspx#BKMK_Specify_a_breakpoint_condition_using_a_code_expression) to break when a variable is null. Conditional breakpoints can be helpful when the null reference does not occur often—for example, when an item in a collection is null only intermittently. Another advantage of conditional breakpoints is that they enable you to debug an issue before you commit to a particular handling routine.  
  
 ![Back to top](../misc/media/pcs_backtotop.png "PCS_BackToTop") [Finding the source of a null reference exception during development](#BKMK_Find_the_source_of_a_null_reference_exception_during_development)  
  
 ![Back to top](../misc/media/pcs_backtotop.png "PCS_BackToTop") [Sections in this article](#BKMK_Contents)  
  
##  <a name="BKMK_Avoid_NullReferenceExceptions"></a> Avoiding NullReferenceExceptions  
 [Use Debug.Assert to confirm an invariant](#BKMK_Use_Debug_Assert_to_confirm_an_invariant)  
  
 [Fully initialize reference types](#BKMK_Fully_initialize_reference_types)  
  
###  <a name="BKMK_Use_Debug_Assert_to_confirm_an_invariant"></a> Use Debug.Assert to confirm an invariant  
 An *invariant* is a condition that you are sure is true. A [Debug.Assert (System.Diagnostics)](http://msdn.microsoft.com/library/system.diagnostics.debug.assert.aspx) statement is called only from debug builds of your apps and is not called from release code. If the invariant condition is not true, the debugger breaks at the Assert statement and displays a dialog box. `Debug.Assert` provides a check that the condition has not changed while you are developing the app. An assertion also documents for others who read your code that the condition must always be true.  
  
 For example, the `MakeEngineFaster` method assumes that its `engine` parameter will never be null because its only caller method (`TheOnlyCallerOfMakeEngineFaster`) is known to fully initialize the `EngineInfo`. The  assert in `MakeEngineFaster` documents the assumption and provides a check that the assumption is true.  
  
 If someone adds a new caller method (`BadNewCallerOfMakeEngineFaster`) that does not initialize the parameter, the assert is triggered.  
  
```c#  
private void TheOnlyCallerOfMakeEngineFaster()  
{  
    var engine = new EngineInfo();  
    engine.Power = "GAS";  
    engine.Size = 1.5;  
    MakeEngineFaster(engine);  
}  
  
private void MakeEngineFaster(EngineInfo engine)  
{  
    System.Diagnostics.Debug.Assert(engine != null, "Assert: engine != null");  
    engine.Size *= 2;  
    Console.WriteLine("The engine is twice as fast");  
}  
  
private void BadNewCallerOfMakeEngineFaster()  
{  
    EngineInfo engine = null;  
    MakeEngineFaster(engine);  
}  
```  
  
```vb  
Public Sub TheOnlyCallerOfMakeEngineFaster()  
    Dim engine As New EngineInfo  
    engine.Power = "GAS"  
    engine.Size = 1.5  
    MakeEngineFaster(engine)  
End Sub  
  
Private Sub MakeEngineFaster(engine As EngineInfo)  
    System.Diagnostics.Debug.Assert(engine IsNot Nothing, "Assert: engine IsNot Nothing")  
    engine.Size = engine.Size * 2  
    Console.WriteLine("The engine is twice as fast")  
End Sub  
  
Public Sub BadNewCallerOfMakeEngineFaster()  
    Dim engine As EngineInfo = Nothing  
    MakeEngineFaster(engine)  
End Sub  
```  
  
 ![Back to top](../misc/media/pcs_backtotop.png "PCS_BackToTop") [Avoiding NullReferenceExceptions](#BKMK_Avoid_NullReferenceExceptions)  
  
 ![Back to top](../misc/media/pcs_backtotop.png "PCS_BackToTop") [Sections in this article](#BKMK_Contents)  
  
###  <a name="BKMK_Fully_initialize_reference_types"></a> Fully initialize reference types  
 To avoid many NullReferenceExceptions, fully initialize reference types as close to their creation as possible.  
  
 **Add full initialization to your own classes**  
  
 If you control the class that throws a NullReferenceException, consider fully initializing the object in the type’s constructor. For example, here’s a revised version of the example classes that guarantees full initialization:  
  
```c#  
public class Automobile  
{  
    public EngineInfo Engine { get; set; }  
  
    public Automobile(){this.Engine = new EngineInfo();}  
  
    public Automobile(string powerSrc, double engineSize)  
    {  
        this.Engine = new EngineInfo(powerSrc, engineSize);  
    }  
}  
  
public class EngineInfo  
{  
    public double Size {get; set;}  
    public string Power {get; set;}  
  
    public EngineInfo(){// the base enginethis.Power = "GAS";this.Size = 1.5;}  
  
    public EngineInfo(string powerSrc, double engineSize)  
    {  
        this.Power = powerSrc;  
        this.Size = engineSize;  
    }  
}  
  
```  
  
```vb  
Public Class Automobile  
    Public Property Engine As EngineInfo  
  
    Public Sub New()Me.Engine = New EngineInfo()End SubPublic Sub New(powerSrc As String, engineSize As Double)Me.Engine = New EngineInfo(powerSrc, engineSize)End Sub  
  
End Class  
  
Public Class BaseEngineInfo  
    Public Sub New()' the base engineMe.Power = "GAS"Me.Size = 1.5End Sub  
  
    Public Sub New(powerSrc As String, engineSize As Double)  
        Power = powerSrc  
        Size = engineSize  
    End Sub  
  
    Public Property Size() As Double  
    Public Power As String = String.Empty  
End Class  
```  
  
> [!NOTE]
>  **Use lazy initialization for large or infrequently used properties**  
>   
>  To reduce the memory footprint of your class and to increase its performance, consider using lazy initialization of reference-type properties. See [Lazy Initialization](http://msdn.microsoft.com/Library/56b4ae5c-4745-44ff-ad78-ffe4fcde6b9b).  
  
##  <a name="BKMK_Handle_NullReferenceExceptions_in_release_code"></a> Handling NullReferenceExceptions in release code  
 [Check for null (Nothing in Visual Basic) before you use a reference type](#BKMK_Check_for_null_Nothing_in_Visual_Basic_before_using_a_reference_type)  
  
 [Use try-catch-finally (Try-Catch-Finally in Visual Basic) to handle the exception](#BKMK_Use_try_catch_finally_Try_Catch_Finally_in_Visual_Basic_to_handle_the_exception)  
  
 It's better to avoid a NullReferenceException than to handle it after it occurs. Handling an exception can make your code harder to maintain and understand, and can sometimes introduce other bugs. A NullReferenceException is often a non-recoverable error. In these cases, letting the exception stop the app might be the best alternative.  
  
 However, there are many situations where handling the error can be useful:  
  
-   Your app can ignore objects that are null. For example, if your app retrieves and processes records in a database, you might be able to ignore some number of bad records that result in null objects. Recording the bad data in a log file or in the application UI might be all you have to do.  
  
-   You can recover from the exception. For example, a call to a web service that returns a reference type might return null if the connection is lost or the connection times out. You can attempt to reestablish the connection and try the call again.  
  
-   You can restore the state of your app to a valid state. For example, you might be performing a multi-step task that requires you to save information to a data store before you call a method that throws a NullReferenceException. If the uninitialized object would corrupt the data record, you can remove the previous data before you close the app.  
  
-   You want to report the exception. For example, if the error was caused by a mistake from the user of your app, you can generate a message to help him supply the correct information. You can also log information about the error to help you fix the problem. Some frameworks, like ASP.NET, have a high-level exception handler that captures all errors to that the app never crashes; in that case, logging the exception might be the only way you can know that it occurs.  
  
 Here are two ways to handle NullReferenceException in release code.  
  
###  <a name="BKMK_Check_for_null_Nothing_in_Visual_Basic_before_using_a_reference_type"></a> Check for null (Nothing in Visual Basic) before you use a reference type  
 Using an explicit test for null before you use an object avoids the performance penalty of try-catch-finally constructs. However, you still have to determine and implement what to do in response to the uninitialized object.  
  
 In this example, the `CheckForNullReferenceFromMethodReturnValue` tests the return value of the `BadGetEngineInfo` method. If the object is not null, it is used; otherwise, the method reports the error.  
  
```c#  
public EngineInfo BadGetEngineInfo()  
{  
    EngineInfo engine = null;  
    return engine;  
}  
  
public void CheckForNullReferenceFromMethodReturnValue()  
{  
    var engine = BadGetEngineInfo();  
    if(engine != null)  
    {  
        // modify the info  
        engine.Power = "DIESEL";  
        engine.Size = 2.4;  
    }  
    else  
    {  
        // report the error  
        Console.WriteLine("BadGetEngine returned null")  
    }  
}  
  
```  
  
```vb  
public EngineInfo BadGetEngineInfo()  
{  
    EngineInfo engine = null;  
    return engine;  
}  
Public Sub CheckForNullReferenceFromMethodReturnValue()  
    Dim engine = BadGetEngineInfo()  
    If (engine IsNot Nothing) Then  
        ' modify the info  
        engine.Power = "DIESEL"  
        engine.Size = 2.4  
    Else  
        ' report the error  
        Console.WriteLine("BadGetEngineInfo returned Nothing")  
    End If  
  
End Sub  
```  
  
 ![Back to top](../misc/media/pcs_backtotop.png "PCS_BackToTop") [Handling NullReferenceExceptions in release code](#BKMK_Handle_NullReferenceExceptions_in_release_code)  
  
 ![Back to top](../misc/media/pcs_backtotop.png "PCS_BackToTop") [Sections in this article](#BKMK_Contents)  
  
###  <a name="BKMK_Use_try_catch_finally_Try_Catch_Finally_in_Visual_Basic_to_handle_the_exception"></a> Use try-catch-finally (Try-Catch-Finally in Visual Basic) to handle the exception  
 Using the built-in exception handling constructs ([try, catch, finally](/dotnet/articles/csharp/language-reference/keywords/exception-handling-statements) in C#, [Try, Catch, Finally](/dotnet/articles/visual-basic/language-reference/statements/try-catch-finally-statement) in Visual Basic) offers more options for dealing with NullReferenceExceptions than checking whether an object is not null.  
  
 In this example, `CatchNullReferenceFromMethodCall` uses two asserts to confirm the assumption that its parameter contains a complete automobile, including an engine. In the `try` block, the highlighted line throws a NullReferenceException because the call to `RarelyBadEngineSwap` can destroy the car's `Engine` property. The `catch` block captures the exception, writes the exception information to a file, and reports the error to the user. In the `finally` block, the method insures that the state of the car is no worse than when the method began.  
  
```c#  
public void RarelyBadSwapCarEngine(Automobile car)  
{  
    if ((new Random()).Next() == 42)  
    {  
        car.Engine = null;  
    }  
    else  
    {  
        car.Engine = new EngineInfo("DIESEL", 2.4);  
    }  
}  
  
public void CatchNullReferenceFromMethodCall(Automobile car)  
{  
    System.Diagnostics.Debug.Assert(car != null, "Assert: car != null");  
    System.Diagnostics.Debug.Assert(car.Engine != null, "Assert: car.Engine != null");  
  
    // save current engine properties in case they're needed  
    var enginePowerBefore = car.Engine.Power;  
    var engineSizeBefore = car.Engine.Size;  
  
    try  
    {  
        RarelyBadSwapCarEngine(car);  
        var msg = "Swap succeeded. New engine power source: {0} size {1}";  
        Console.WriteLine(msg, car.Engine.Power, car.Engine.Size);  
    }  
    catch(NullReferenceException nullRefEx)  
    {  
        // write exception info to log file  
        LogException(nullRefEx);  
        // notify the user  
        Console.WriteLine("Engine swap failed. Please call your customer rep.");  
    }  
    finally  
    {  
        if(car.Engine == null)  
        {  
            car.Engine = new EngineInfo(enginePowerBefore, engineSizeBefore);  
        }  
    }  
}  
  
```  
  
```vb  
Public Sub RarelyBadSwapCarEngine(car As Automobile)  
    If (New Random()).Next = 42 Then  
        car.Engine = Nothing  
    Else  
        car.Engine = New EngineInfo("DIESEL", 2.4)  
    End If  
End Sub  
  
Public Sub CatchNullReferenceFromMethodCall(car As Automobile)  
    System.Diagnostics.Debug.Assert(car IsNot Nothing)  
    System.Diagnostics.Debug.Assert(car.Engine IsNot Nothing)  
  
    ' save current engine properties in case they're needed  
    Dim powerBefore = car.Engine.Power  
    Dim sizeBefore = car.Engine.Size  
  
    Try  
        RarelyBadSwapCarEngine(car)  
        Dim msg = "Swap succeeded. New engine power source: {0} size {1}"  
        Console.WriteLine(msg, car.Engine.Power, car.Engine.Size)  
    Catch nullRefEx As NullReferenceException  
        ' write exception info to log file  
        LogException(nullRefEx)  
        ' notify user  
        Console.WriteLine("Engine swap failed. Please call your customer rep.")  
    Finally  
        If car.Engine Is Nothing Then car.Engine = New EngineInfo(powerBefore, sizeBefore)  
    End Try  
  
End Sub  
  
```  
  
 ![Back to top](../misc/media/pcs_backtotop.png "PCS_BackToTop") [Handling NullReferenceExceptions in release code](#BKMK_Handle_NullReferenceExceptions_in_release_code)  
  
 ![Back to top](../misc/media/pcs_backtotop.png "PCS_BackToTop") [Sections in this article](#BKMK_Contents)  
  
## Related articles  
 [Design Guidelines for Exceptions (.NET Framework Design Guidelines)](http://msdn.microsoft.com/library/ms229014)  
  
 [Handling and Throwing Exceptions (.NET Framework Application Essentials)](http://msdn.microsoft.com/library/5b2yeyab)  
  
 [How to: Receive First-Chance Exception Notifications (.NET Framework Development Guide)](http://msdn.microsoft.com/library/Dd997368)  
  
 [How to: Handle Exceptions in a PLINQ Query (.NET Framework Development Guide)](http://msdn.microsoft.com/library/Dd460712)  
  
 [Exceptions in Managed Threads (.NET Framework Development Guide)](http://msdn.microsoft.com/library/ms228965)  
  
 [Exceptions and Exception Handling (C# Programming Guide)](http://msdn.microsoft.com/library/ms173160)  
  
 [Exception Handling Statements (C# Reference)](http://msdn.microsoft.com/library/s7fekhdy)  
  
 [Try...Catch...Finally Statement (Visual Basic)](http://msdn.microsoft.com/library/fk6t46tz)  
  
 [Exception Handling (F#)](http://msdn.microsoft.com/library/Dd233223)  
  
 [Exceptions in C++/CLI](http://msdn.microsoft.com/library/Hh875008)  
  
 [Exception Handling (Task Parallel Library)](http://msdn.microsoft.com/library/Dd997415)  
  
 [Exception Handling (Debugging)](http://msdn.microsoft.com/library/x85tt0dd)  
  
 [Walkthrough: Handling a Concurrency Exception (Accessing Data in Visual Studio)](http://msdn.microsoft.com/library/ms171936)  
  
 [How to: Handle Errors and Exceptions that Occur with Databinding (Windows Forms)](http://msdn.microsoft.com/library/k26k86tb)  
  
 [Handling exceptions in network apps (XAML) (Windows)](http://msdn.microsoft.com/library/Dn263240)  
  
 ![Back to top](../misc/media/pcs_backtotop.png "PCS_BackToTop") [Sections in this article](#BKMK_Contents)