---
title: "Troubleshooting Exceptions: System.InvalidOperationException"
ms.custom: ""
ms.date: "10/19/2016"
ms.prod: "visual-studio-dev14"
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
  - "InvalidOperationException class"
ms.assetid: db3400e5-62d7-4d65-897d-387e7edcb7cf
caps.latest.revision: 33
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
# Troubleshooting Exceptions: System.InvalidOperationException
An <xref:System.InvalidOperationException?displayProperty=fullName> is thrown when a method of an object is called when the state of the object cannot support the method call. The exception is also thrown when a method attempts to manipulate the UI from a thread that is not the main or UI thread.  
  
> [!IMPORTANT]
>  Because <xref:System.InvalidOperationException>s can be thrown in a wide variety of circumstances, it's important to read and understand the <xref:System.Exception.Message*> that is displayed in the Exception Assistant.  
  
##  <a name="BKMK_In_this_article"></a> In this article  
 [A method running on a non-UI thread updates the UI](#BKMK_A_method_running_on_a_non_UI_thread_updates_the_UI)  
  
 [A statement in a foreach (For Each in Visual Basic) block changes the collection it is iterating](#BKMK_A_statement_in_a_foreach_For_Each_in_Visual_Basic_block_changes_the_collection_it_is_iterating)  
  
 [A Nullable&lt;T&gt; that is null is cast to T](#BKMK_A_Nullable_T_that_is_null_is_cast_to_T)  
  
 [A System.Linq.Enumerable method is called on an empty collection](#BKMK_A_System_Linq_Enumerable_method_is_called_on_an_empty_collection)  
  
 [Related articles](#BKMK_Related_articles)  
  
 The code examples in this article show you how some common <xref:System.InvalidOperationException> exceptions can occur in your app. How you handle the issues depends on the specific situation. If the exception is fatal to the functionality of your app, you might want to use a [try … catch](../Topic/Exception%20Handling%20Statements%20\(C%23%20Reference\).md) ([Try .. Catch](../Topic/Try...Catch...Finally%20Statement%20\(Visual%20Basic\).md) in Visual Basic) construct to capture the exception and clean up the app's state before you exit. But other <xref:System.InvalidOperationException>s can be anticipated and avoided. The revised method examples show you some of these techniques.  
  
##  <a name="BKMK_A_method_running_on_a_non_UI_thread_updates_the_UI"></a> A method running on a non-UI thread updates the UI  
 [Causing an InvalidOperationException with a UI update from a non-UI thread](#BKMK_Causing_an_InvalidOperationException_with_a_UI_update_from_a_non_UI_thread)  **&#124;**  [Avoiding InvalidOperationExceptions on non-UI threads](#BKMK_Avoiding_InvalidOperationExceptions_on_non_UI_threads)  
  
 Most .NET GUI (graphical user interface) app frameworks, such as Windows Forms and Windows Presentation Foundation (WPF), let you access GUI objects only from the thread that creates and manages the UI (the **Main** or **UI** thread). An <xref:System.InvalidOperationException> is thrown when you try to access a UI element from a thread that is not the UI thread.  
  
###  <a name="BKMK_Causing_an_InvalidOperationException_with_a_UI_update_from_a_non_UI_thread"></a> Causing an InvalidOperationException with a UI update from a non-UI thread  
  
> [!NOTE]
>  The following examples use the [Task-based Asynchronous Pattern (TAP)](../Topic/Task-based%20Asynchronous%20Pattern%20\(TAP\).md) to create non-UI threads. However, the examples are also relevant to all .NET [Asynchronous Programming Patterns](../Topic/Asynchronous%20Programming%20Patterns.md).  
  
 In these examples, the `ThreadsExampleBtn_Click` event handler calls the `DoSomeWork` method twice. The first call to the method (`DoSomeWork(20);` runs sychronously and succeeds. But the second call (`Task.Run( () => { DoSomeWork(1000);});`) runs on a thread in the app's [thread pool](http://msdn.microsoft.com/en-us/library/system.threading.threadpool.aspx). Because this call attempts to update the UI from a non-UI thread, the statement throws a <xref:System.InvalidOperationException>  
  
 **WPF and Store apps**  
  
> [!NOTE]
>  In Store Phone apps, an <xref:System.Exception> is thrown instead of the more specific <xref:System.InvalidOperationException>.  
  
 **Exception messages:**  
  
|||  
|-|-|  
|WPF apps|Additional information: The calling thread cannot access this object because a different thread owns it.|  
|Store apps|Additional information: The application called an interface that was marshalled for a different thread. (Exception from HRESULT: 0x8001010E (RPC_E_WRONG_THREAD))|  
  
```c#  
private async void ThreadsExampleBtn_Click(object sender, RoutedEventArgs e)  
{  
    TextBox1.Text = String.Empty;  
  
    TextBox1.Text = "Simulating work on UI thread.\n";  
    DoSomeWork(20);  
  
    TextBox1.Text += "Simulating work on non-UI thread.\n";  
    await Task.Run(() => DoSomeWork(1000));  
  
    TextBox1.Text += "ThreadsExampleBtn_Click completes. ";  
}  
  
private void DoSomeWork(int msOfWork)  
{  
    // simulate work  
    var endTime = DateTime.Now.AddMilliseconds(msOfWork);  
    while (DateTime.Now < endTime)  
    {  
        // spin  
    };  
  
    // report completion  
    var msg = String.Format("Some work completed in {0} ms on UI thread. \n", msOfWork);  
    TextBox1.Text += msg;  
}  
```  
  
 **Windows Forms apps**  
  
 **Exception message:**  
  
-   Additional information: Cross-thread operation not valid: Control 'TextBox1' accessed from a thread other than the thread it was created on.  
  
```c#  
private async void ThreadsExampleBtn_Click(object sender, EventArgs e)  
{  
    TextBox1.Text = String.Empty;  
  
    var tbLinesList = new List<string>() {"Simulating work on UI thread."};  
    TextBox1.Lines = tbLinesList.ToArray();  
    DoSomeWork(20, tbLinesList);  
  
    tbLinesList.Add("Simulating work on non-UI thread.");  
    TextBox1.Lines = tbLinesList.ToArray();  
    await Task.Run(() => DoSomeWork(1000, tbLinesList));  
  
    tbLinesList.Add("ThreadsExampleBtn_Click completes.");  
    TextBox1.Lines = tbLinesList.ToArray();  
}  
private void DoSomeWork(int msOfWork, List<string> tbLinesList)  
{  
    // simulate work  
    var endTime = DateTime.Now.AddMilliseconds(msOfWork);  
    while (DateTime.Now < endTime) { };  
    {  
        // spin  
    };  
  
    // report completion  
    var msg = String.Format("Some work completed in {0} ms on UI thread. \n", msOfWork);  
    tbLinesList.Add(msg);  
    TextBox1.Lines = tbLinesList.ToArray();  
}  
```  
  
 ![Back to top](../misc/media/pcs_backtotop.png "PCS_BackToTop") [In this article](#BKMK_In_this_article) ![In this section](../misc/media/pcs_backtotopmid.png "PCS_BackToTopMid") [A method running on a non-UI thread updates the UI](#BKMK_A_method_running_on_a_non_UI_thread_updates_the_UI)  
  
###  <a name="BKMK_Avoiding_InvalidOperationExceptions_on_non_UI_threads"></a> Avoiding InvalidOperationExceptions on non-UI threads  
 Windows UI frameworks implement a *dispatcher* pattern that includes a method to check whether a call to a member of a UI element is being executed on the UI thread, and other methods to schedule the call on the UI thread.  
  
 **WPF apps**  
  
 In WPF apps, use one of the <xref:System.Windows.Threading.Dispatcher.Invoke*?displayProperty=fullName> methods to excecute a delegate on the UI thread. If necessary, use the <xref:System.Windows.Threading.Dispatcher.CheckAccess*?displayProperty=fullName> method to determine if a method is running on a non-UI thread.  
  
```c#  
private void DoSomeWork(int msOfWork)  
{  
    var endTime = DateTime.Now.AddMilliseconds(msOfWork);  
    while (DateTime.Now < endTime)  
    {  
        // spin  
    };  
  
    // report completion  
    var msgFormat = "Some work completed in {0} ms on {1}UI thread.\n";  
    var msg = String.Empty;  
    if (TextBox1.Dispatcher.CheckAccess())  
    {  
        msg = String.Format(msgFormat, msOfWork, String.Empty);  
        TextBox1.Text += msg;  
    }  
    else  
    {  
        msg = String.Format(msgFormat, msOfWork, "non-");  
        Action act = ()=> {TextBox1.Text += msg;};  
        TextBox1.Dispatcher.Invoke(act);  
    }  
}  
  
```  
  
 **Windows Forms apps**  
  
 In Windows Form apps, use the <xref:System.Windows.Forms.Control.Invoke*?displayProperty=fullName> method to excecute a delegate that updates the UI thread. If necessary, use the <xref:System.Windows.Forms.Control.InvokeRequired*?displayProperty=fullName> property to determine if a method is running on a non-UI thread.  
  
```c#  
private void DoSomeWork(int msOfWork, List<string> tbLinesList)  
{  
    // simulate work  
    var endTime = DateTime.Now.AddMilliseconds(msOfWork);  
    while (DateTime.Now < endTime)  
    {  
        // spin  
    };  
  
    // report completion  
    var msgFormat = "Some work completed in {0} ms on {1}UI thread.\n";  
    var msg = String.Empty;  
    if (TextBox1.InvokeRequired)  
    {  
        msg = String.Format(msgFormat, msOfWork, "non-");  
        tbLinesList.Add(msg);  
        Action act = () => TextBox1.Lines = tbLinesList.ToArray();  
        TextBox1.Invoke( act );  
    }  
    else  
    {  
        msg = String.Format(msgFormat, msOfWork, String.Empty);  
        tbLinesList.Add(msg);  
        TextBox1.Lines = tbLinesList.ToArray();  
    }  
}  
```  
  
 **Store apps**  
  
 In Store apps, use the <xref:Windows.UI.Core.CoreDispatcher.RunAsync*?displayProperty=fullName> method to excecute a delegate that updates the UI thread. If necessary, use the <xref:Windows.UI.Core.CoreDispatcher.HasThreadAccess*> property to determine if a method is running on a non-UI thread.  
  
```c#  
private void DoSomeWork(int msOfWork)  
{  
    // simulate work  
    var endTime = DateTime.Now.AddMilliseconds(msOfWork);  
    while (DateTime.Now < endTime)  
    {  
        // spin  
    };  
  
    // report completion  
    var msgFormat = "Some work completed in {0} ms on {1}UI thread.\n";  
    var msg = String.Empty;  
  
    if (TextBox1.Dispatcher.HasThreadAccess)  
    {  
        msg = String.Format(msgFormat, msOfWork, String.Empty);  
        TextBox1.Text += msg;  
    }  
    else  
    {  
        msg = String.Format(msgFormat, msOfWork, "non-");  
        TextBox1.Dispatcher.RunAsync(Windows.UI.Core.CoreDispatcherPriority.Normal,()=> {TextBox1.Text += msg;});  
    }  
}  
```  
  
 ![Back to top](../misc/media/pcs_backtotop.png "PCS_BackToTop") [In this article](#BKMK_In_this_article) ![In this section](../misc/media/pcs_backtotopmid.png "PCS_BackToTopMid") [A method running on a non-UI thread updates the UI](#BKMK_A_method_running_on_a_non_UI_thread_updates_the_UI)  
  
##  <a name="BKMK_A_statement_in_a_foreach_For_Each_in_Visual_Basic_block_changes_the_collection_it_is_iterating"></a> A statement in a foreach (For Each in Visual Basic) block changes the collection it is iterating  
 [Causing an InvalidOperationException with foreach](#BKMK_Causing_an_InvalidOperationException_with_foreach)  **&#124;**  [Avoiding InvalidOperationExceptions in loops](#BKMK_Avoiding_InvalidOperationExceptions_in_loops)  
  
 A [foreach](../Topic/foreach,%20in%20\(C%23%20Reference\).md) statement ([For Each](../Topic/For%20Each...Next%20Statement%20\(Visual%20Basic\).md) in Visual Basic) repeats a group of embedded statements for each element in an array or collection that implements the <xref:System.Collections.IEnumerable?displayProperty=fullName> or <xref:System.Collections.Generic.IEnumerable`1?displayProperty=fullName> interface. The `foreach` statement is used to iterate through the collection to read and modify the elements, but it can't be used to add or remove items from the collection. An <xref:System.InvalidOperationException> is thrown if you add or remove items from the source collection in a foreach statement.  
  
###  <a name="BKMK_Causing_an_InvalidOperationException_with_foreach"></a> Causing an InvalidOperationException with foreach  
 In this example, an <xref:System.InvalidOperationException> is thrown when the `numList.Add(5);` statement attempts to modify list in the foreach block.  
  
 **Exception message:**  
  
-   Additional information: Collection was modified; enumeration operation may not execute.  
  
<CodeContentPlaceHolder>5</CodeContentPlaceHolder>  
 ![Back to top](../misc/media/pcs_backtotop.png "PCS_BackToTop") [In this article](#BKMK_In_this_article) ![In this section](../misc/media/pcs_backtotopmid.png "PCS_BackToTopMid") [A statement in a foreach (For Each in Visual Basic) block changes the collection it is iterating](#BKMK_A_statement_in_a_foreach_For_Each_in_Visual_Basic_block_changes_the_collection_it_is_iterating)  
  
###  <a name="BKMK_Avoiding_InvalidOperationExceptions_in_loops"></a> Avoiding InvalidOperationExceptions in loops  
  
> [!IMPORTANT]
>  Adding or removing elements to a list while you are interating over the collection can have unintended and hard to predict side effects. If possible, you should move the operation outside of the iteration.  
  
<CodeContentPlaceHolder>6</CodeContentPlaceHolder>  
 If your situation requires you to add or remove elements to a list as you iterate a collection, use a [for](../Topic/for%20\(C%23%20Reference\).md) ([For](../Topic/For...Next%20Statement%20\(Visual%20Basic\).md) in Visual Basic) loop:  
  
<CodeContentPlaceHolder>7</CodeContentPlaceHolder>  
 ![Back to top](../misc/media/pcs_backtotop.png "PCS_BackToTop") [In this article](#BKMK_In_this_article) ![In this section](../misc/media/pcs_backtotopmid.png "PCS_BackToTopMid") [A statement in a foreach (For Each in Visual Basic) block changes the collection it is iterating](#BKMK_A_statement_in_a_foreach_For_Each_in_Visual_Basic_block_changes_the_collection_it_is_iterating)  
  
##  <a name="BKMK_A_Nullable_T_that_is_null_is_cast_to_T"></a> A Nullable<T\> that is null is cast to T  
 [Causing an InvalidOperationException with an invalid cast](#BKMK_Causing_an_InvalidOperationException_with_an_invalid_cast)  **&#124;**  [Avoiding InvalidOperationException from a bad cast](#BKMK_Avoiding_InvalidOperationException_from_a_bad_cast)  
  
 If you cast a <xref:System.Nullable`1> structure that is `null` (`Nothing` in Visual Basic) to its underlying type, an <xref:System.InvalidOperationException> exception is thrown.  
  
###  <a name="BKMK_Causing_an_InvalidOperationException_with_an_invalid_cast"></a> Causing an InvalidOperationException with an invalid cast  
 In this method, an <xref:System.InvalidOperationException> is thrown when the Select method casts a null element of dbQueryResults to an int.  
  
 **Exception message:**  
  
-   Additional information: Nullable object must have a value.  
  
```c#  
private void MapQueryResults()  
{  
    var dbQueryResults = new int?[] { 1, 2, null, 4 };  
  
    var ormMap = dbQueryResults.Select(nullableInt => (int)nullableInt);  
  
    //display map list  
    foreach (var num in ormMap)  
    {  
        Console.Write("{0} ", num);  
    }  
    Console.WriteLine();  
}  
  
```  
  
 ![Back to top](../misc/media/pcs_backtotop.png "PCS_BackToTop") [In this article](#BKMK_In_this_article) ![In this section](../misc/media/pcs_backtotopmid.png "PCS_BackToTopMid") [A Nullable&lt;T&gt; that is null is cast to T](#BKMK_A_Nullable_T_that_is_null_is_cast_to_T)  
  
###  <a name="BKMK_Avoiding_InvalidOperationException_from_a_bad_cast"></a> Avoiding InvalidOperationException from a bad cast  
 To avoid <xref:System.InvalidOperationException>:  
  
-   Use the <xref:System.Nullable`1.HasValue*?displayProperty=fullName> property to select only those elements that are not null.  
  
-   Use one of the overloaded <xref:System.Nullable`1.GetValueOrDefault*?displayProperty=fullName> methods to provide a default value for a null item.  
  
 **Nullable\<T>.HasValue example**  
  
```c#  
private void MapQueryResults()  
{  
    var dbQueryResults = new int?[] { 1, 2, null, 4 };  
  
    var ormMap = dbQueryResults  
        .Where(nulllableInt => nulllableInt.HasValue)  
        .Select(num => (int)num);  
  
    //display map list  
    foreach (var num in ormMap)  
    {  
        Console.Write("{0} ", num);  
    }  
    Console.WriteLine();  
  
    // handle nulls  
    Console.WriteLine("{0} nulls encountered in dbQueryResults",  
        dbQueryResults.Where(nullableInt => !nullableInt.HasValue).Count());  
}  
```  
  
 **Nullable\<T>.GetValueOrDefault example**  
  
 In this example, we use <xref:System.Nullable`1.GetValueOrDefault(`0)> to specify a default that is outside of the expected values returned by `dbQueryResults`.  
  
```c#  
private void MapQueryResults()  
{  
    var dbQueryResults = new int?[] { 1, 2, null, 4 };  
    var nullFlag = int.MinValue;  
  
    var ormMap = dbQueryResults.Select(nullableInt => nullableInt.GetValueOrDefault(nullFlag));  
  
    // handle nulls  
    Console.WriteLine("'{0}' indicates a null database value.", nullFlag);  
  
    foreach (var num in ormMap)  
    {  
        Console.Write("{0} ", num);  
    }  
    Console.WriteLine();  
}  
  
```  
  
 ![Back to top](../misc/media/pcs_backtotop.png "PCS_BackToTop") [In this article](#BKMK_In_this_article) ![In this section](../misc/media/pcs_backtotopmid.png "PCS_BackToTopMid") [A Nullable&lt;T&gt; that is null is cast to T](#BKMK_A_Nullable_T_that_is_null_is_cast_to_T)  
  
##  <a name="BKMK_A_System_Linq_Enumerable_method_is_called_on_an_empty_collection"></a> A System.Linq.Enumerable method is called on an empty collection  
 The <xref:System.Linq.Enumerable> methods <xref:System.Linq.Enumerable.Aggregate*>, <xref:System.Linq.Enumerable.Average*>, <xref:System.Linq.Enumerable.Last*>, <xref:System.Linq.Enumerable.Max*>, <xref:System.Linq.Enumerable.Min*>, <xref:System.Linq.Enumerable.First*>, <xref:System.Linq.Enumerable.Single*>, and <xref:System.Linq.Enumerable.SingleOrDefault*> perform operations on a sequence and return a single result.  
  
 Some overloads of these methods throw an <xref:System.InvalidOperationException> exception when the sequence is empty (other overloads return `null` (`Nothing` in Visual Basic). <xref:System.Linq.Enumerable.SingleOrDefault*> also throws <xref:System.InvalidOperationException> when the sequence contains more than one element.  
  
> [!TIP]
>  Most of the <xref:System.Linq.Enumerable> methods disussed in this section are overloaded. Be sure you understand the behavior of the overload that you choose.  
  
 **Exception messages:**  
  
 [Aggregate, Average, Last, Max, and Min methods](#BKMK_Aggregate_Average_Last_Max_and_Min_methods)  **&#124;**  [First and FirstOrDefault methods](#BKMK_First_and_FirstOrDefault_methods)  **&#124;**  [Single and SingleOrDefault methods](#BKMK_Single_and_SingleOrDefault_methods)  
  
###  <a name="BKMK_Aggregate_Average_Last_Max_and_Min_methods"></a> Aggregate, Average, Last, Max, and Min methods  
  
-   Additional information: Sequence contains no elements  
  
 **Causing an InvalidOperationException with Average**  
  
 In this example, the following method throws an <xref:System.InvalidOperationException> when it calls the <xref:System.Linq.Enumerable.Average*> method because the Linq expression returns a sequence that contains no elements that are greater than 4.  
  
```c#  
private void FindAverageOfNumbersGreaterThan4()  
{  
    var dbQueryResults = new[] { 1, 2, 3, 4 };  
  
    var avg = dbQueryResults.Where(num => num > 4).Average();  
  
    Console.WriteLine("The average value numbers greater than 4 in the returned records is {0}", avg);  
}  
```  
  
 When you use one of these methods without checking for an empty sequence, you are implicitly assuming that the sequence is not empty, and that an empty sequence is an unexpected occurrence. Catching or throwing the exception is appropriate when you do assume that the sequence will be non-empty.  
  
 **Avoiding an InvalidOperationException caused by an empty sequence**  
  
 Use one of the <xref:System.Linq.Enumerable.Any*?displayProperty=fullName> methods to check if the sequence is empty.  
  
> [!TIP]
>  Using <xref:System.Linq.Enumerable.Any*> can improve the performance of the check if the sequence to average might contain a large number of elements or if operation that generates the sequence is expensive.  
  
```c#  
private void FindAverageOfNumbersGreaterThan4()  
{  
    var dbQueryResults = new[] { 1, 2, 3, 4 };  
  
    var moreThan4 = dbQueryResults.Where(num => num > 4);  
  
    if(moreThan4.Any())  
    {  
        var msgFormat = "The average value numbers greater than 4 in the returned records is {0}";  
        Console.WriteLine(msgFormat, moreThan4.Average());  
    }  
    else  
    {  
        // handle empty collection   
        Console.WriteLine("There are no values greater than 4 in the ecords.");  
    }  
}  
  
```  
  
 ![Back to top](../misc/media/pcs_backtotop.png "PCS_BackToTop") [In this article](#BKMK_In_this_article) ![In this section](../misc/media/pcs_backtotopmid.png "PCS_BackToTopMid") [A System.Linq.Enumerable method is called on an empty collection](#BKMK_A_System_Linq_Enumerable_method_is_called_on_an_empty_collection)  
  
###  <a name="BKMK_First_and_FirstOrDefault_methods"></a> First and FirstOrDefault methods  
 <xref:System.Linq.Enumerable.First*> returns the first item in a sequence or throws an <xref:System.InvalidOperationException> if the sequence is empty.  You can call the <xref:System.Linq.Enumerable.FirstOrDefault*> method instead of <xref:System.Linq.Enumerable.First*> to return a specified or default value instead of throwing the exception.  
  
> [!NOTE]
>  In the .NET Framework, types have a concept of default values. For example, for any reference type the default value is null, and for an integer type it is zero. See [Default Values Table](../Topic/Default%20Values%20Table%20\(C%23%20Reference\).md)  
  
 **Causing an InvalidOperationException with First**  
  
 The <xref:System.Linq.Enumerable.First*> is an optimization method that returns the first element in a sequence that satisfies a specified condition. If an element satisfying the condition isn't found, the methods throw an <xref:System.InvalidOperationException> exception.  
  
 In this example, the `First` method throws the exception because `dbQueryResults` doesn't contain an element that is greater than 4.  
  
 **Exception message:**  
  
-   Additional information: Sequence contains no matching element  
  
```c#  
private void FindANumbersGreaterThan4()  
{  
    var dbQueryResults = new[] { 1, 2, 3, 4 };  
  
    var firstNum = dbQueryResults.First(n=> n > 4);  
  
    var msgFormat = "{0} is an element of dbQueryResults that is greater than 4";  
    Console.WriteLine(msgFormat, firstNum);  
  
}  
  
```  
  
 **Avoiding an exception with FirstOrDefault**  
  
 You can use one the   <xref:System.Linq.Enumerable.FirstOrDefault*> methods in place of  <xref:System.Linq.Enumerable.First*> to check that the `firstNum` sequence contains at least one element. If the query doesn't find an element satisfying the condition, it returns a specified or default value. You can check the returned value to determine if any elements are found.  
  
> [!NOTE]
>  Using <xref:System.Linq.Enumerable.FirstOrDefault*> can be more complicated to implement if the default value of the type is a valid element in the sequence.  
  
```c#  
private void FindANumbersGreaterThan4()  
{  
    var dbQueryResults = new[] { 1, 2, 3, 4 };  
  
    // default(object) == null  
    var firstNum = dbQueryResults.FirstOrDefault(n => n > 4);  
  
    if (firstNum != 0)  
    {  
        var msgFormat = "{0} is an element of dbQueryResults that is greater than 4";  
        Console.WriteLine(msgFormat, firstNum);  
    }  
    else  
    {  
        // handle default case  
        Console.WriteLine("No element of dbQueryResults is greater than 4.");  
    }  
}  
  
```  
  
 ![Back to top](../misc/media/pcs_backtotop.png "PCS_BackToTop") [In this article](#BKMK_In_this_article) ![In this section](../misc/media/pcs_backtotopmid.png "PCS_BackToTopMid") [A System.Linq.Enumerable method is called on an empty collection](#BKMK_A_System_Linq_Enumerable_method_is_called_on_an_empty_collection)  
  
###  <a name="BKMK_Single_and_SingleOrDefault_methods"></a> Single and SingleOrDefault methods  
 The <xref:System.Linq.Enumerable.Single*?displayProperty=fullName> methods return the only element of a sequence, or the only element of a sequence that meets a specified test.  
  
 If there are no elements in the sequence, or there are more than one element in t he sequence, the metnod throws an <xref:System.InvalidOperationException> exception.  
  
 You can use <xref:System.Linq.Enumerable.SingleOrDefault*> to return a specified or default value instead of throwing the exception when the sequence contains no elements. However, <xref:System.Linq.Enumerable.SingleOrDefault*> still throws an <xref:System.InvalidOperationException> when the sequence contains more than one element that matches the selection predicate.  
  
> [!NOTE]
>  In the .NET Framework, types have a concept of default values. For example, for any reference type the default value is null, and for an integer type it is zero. See [Default Values Table](../Topic/Default%20Values%20Table%20\(C%23%20Reference\).md)  
  
 **Causing InvalidOperationExceptions with Single**  
  
 In this example, `singleObject` throws an <xref:System.InvalidOperationException> because `dbQueryResults` doesn't contain an element greater than 4.  
  
 **Exception message:**  
  
-   Additional information: Sequence contains no matching element  
  
```c#  
private void FindTheOnlyNumberGreaterThan4()  
{  
    var dbQueryResults = new[] { (object)1, (object)2, (object)3, (object)4 };  
  
    var singleObject = dbQueryResults.Single(obj => (int)obj > 4);  
  
    // display results  
    var msgFormat = "{0} is the only element of dbQueryResults that is greater than 4";  
    Console.WriteLine(msgFormat, singleObject);  
}  
  
```  
  
 **Causing InvalidOperationExceptions with Single or SingleOrDefault**  
  
 In this example, `singleObject` throws an <xref:System.InvalidOperationException> because `dbQueryResults` contains more than one element greater than 2.  
  
 **Exception message:**  
  
-   Additional information: Sequence contains more than one matching element  
  
```c#  
private void FindTheOnlyNumberGreaterThan2()  
{  
    var dbQueryResults = new[] { (object)1, (object)2, (object)3, (object)4 };  
  
    var singleObject = dbQueryResults.SingleOrDefault(obj => (int)obj > 2);  
  
    if (singleObject != null)  
    {  
        var msgFormat = "{0} is the only element of dbQueryResults that is greater than 2";  
        Console.WriteLine(msgFormat, singleObject);  
    }  
    else  
    {  
        // handle empty collection  
        Console.WriteLine("No element of dbQueryResults is greater than 2.");  
    }  
}  
  
```  
  
 **Avoiding InvalidOperationExceptions with Single**  
  
 Using <xref:System.Linq.Enumerable.Single*> and <xref:System.Linq.Enumerable.SingleOrDefault*> also serves as documentation of your intentions. <xref:System.Linq.Enumerable.Single*> strongly implies that you expect one and only one result to be returned from the condition. <xref:System.Linq.Enumerable.SingleOrDefault*> declares that you expect one or zero results, but no more. When these conditions are invalid, throwing or catching the <xref:System.InvalidOperationException> is appropriate. However, if you expect that invalid conditions will occur with some frequency, you should consider using other <xref:System.Linq.Enumerable> methods, such as <xref:System.Linq.Enumerable.First*> or <xref:System.Linq.Enumerable.Where*>, to generate your results.  
  
 During development, you can use one of the <xref:System.Diagnostics.Debug.Assert*> methods to check your assumptions. In this example, the highlighted code causes the debugger to break and displays an assert dialog box during development. The assert is removed in release code, and any <xref:System.Linq.Enumerable.Single*> will throw if the results are invalid.  
  
> [!NOTE]
>  Using <xref:System.Linq.Enumerable.Take*> and setting its `count` parameter to 2 limits the returned sequence to at most two elements. This sequence includes all the cases that you need to check (0, 1, and more than 1 elements) and can improve the performance of the check when the sequence might contain a large number of elements or if operation that generates the sequence is expensive.  
  
```c#  
private void FindTheOnlyNumberGreaterThan4()  
{  
    var dbQueryResults = new[] { (object)1, (object)2, (object)3, (object)4 };  
    var moreThan4 = dbQueryResults.Where(obj => (int)obj > 4).Take(2);  
  
    System.Diagnostics.Debug.Assert(moreThan4.Count() == 1,String.Format("moreThan4.Count() == 1; Actual count: {0}", moreThan4.Count()));  
  
    // do not handle exceptions in release code  
    Console.WriteLine("{0} is the only element of dbQueryResults that is greater than 4",   
        moreThan4.Single());  
}  
  
```  
  
 If you want to avoid the exception but still handle the invalid states in release code, you can modify the technique described above. In this example, the method responds to the number of elements returned by `moreThan2` in the the switch statement.  
  
```c#  
private void FindTheOnlyNumberGreaterThan2()  
{  
    var dbQueryResults = new[] { (object)1, (object)2, (object)3, (object)4 };  
  
    var moreThan2 = dbQueryResults.TakeWhile(obj => (int)obj > 2).Take(2);  
  
    switch(moreThan2.Count())  
    {   
        case 1:  
            // success  
            var msgFormat = "{0} is the only element of dbQueryResults that is greater than 2";  
            Console.WriteLine(msgFormat, moreThan2.Single());  
            break;  
        case 0:  
            // handle empty collection  
            Console.WriteLine("No element of the dbQueryResults are greater than 4.");  
            break;  
        default: // count > 1  
            // handle more than one element  
            Console.WriteLine("More than one element of dbQueryResults is greater than 4");  
            break;  
    }  
}  
  
```  
  
 ![Back to top](../misc/media/pcs_backtotop.png "PCS_BackToTop") [In this article](#BKMK_In_this_article) ![In this section](../misc/media/pcs_backtotopmid.png "PCS_BackToTopMid") [A System.Linq.Enumerable method is called on an empty collection](#BKMK_A_System_Linq_Enumerable_method_is_called_on_an_empty_collection)  
  
##  <a name="BKMK_Related_articles"></a> Related articles  
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
  
 ![Back to top](../misc/media/pcs_backtotop.png "PCS_BackToTop") [In this article](#BKMK_In_this_article)