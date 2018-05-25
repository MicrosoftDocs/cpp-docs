// For an introduction to the Blank template, see the following documentation:
// http://go.microsoft.com/fwlink/?LinkId=232509
(function () {
    "use strict";

    var app = WinJS.Application;
    var activation = Windows.ApplicationModel.Activation;
    WinJS.strictProcessing();

    app.onactivated = function (args) {
        if (args.detail.kind === activation.ActivationKind.launch) {
            if (args.detail.previousExecutionState !== activation.ApplicationExecutionState.terminated) {
                // TODO: This application has been newly launched. Initialize
                // your application here.
            } else {
                // TODO: This application has been reactivated from suspension.
                // Restore application state here.
            }
            args.setPromise(WinJS.UI.processAll());
        }
    };

    app.oncheckpoint = function (args) {
        // TODO: This application is about to be suspended. Save any state
        // that needs to persist across suspensions here. You might use the
        // WinJS.Application.sessionState object, which is automatically
        // saved and restored across suspension. If you need to complete an
        // asynchronous operation before your application is suspended, call
        // args.setPromise().
    };

    app.start();
})();

function button1_click() {

    var obj = new JS-Array.Class1();
    //Allocate the array.
    var a = new Array(100);

    //Pass the array to C++.
    obj.ArrayDemo(a);

    // Display the modified contents.
    for (i = 0; i < 100; i++) {
        Div1.innerText += a[i] + " ";
    }
}

//<snippet101>
//JavaScript
function button2_click() {
    var obj = new JS-Array.Class1();
    var a = new Array(100);
    for (i = 0; i < 100; i++) {
        a[i] = i;
    }
    // Notice that method names are camelCased in JavaScript.
    var sum = obj.passArrayForReading(a);
    document.getElementById('results').innerText
        = "The sum of all the numbers is " + sum;
}

//</snippet101>

//<snippet102>
//JavaScript
function button3_click() {
    var obj = new JS-Array.Class1();

    // Remember to use camelCase for the function name.
    var array2 = obj.calleeAllocatedDemo2();
    for (j = 0; j < array2.length; j++) {
        document.getElementById('results').innerText += array2[j] + " ";
    }
}

//</snippet102>

//<snippet103>
// JavaScript
function button4_click() {
    var obj = new JS-Array.Class1();
    //Allocate the array.
    var a = new Array(10);

    //Pass the array to C++.
    obj.callerAllocatedDemo(a);

    var results = document.getElementById('results');
    // Display the modified contents.
    for (i = 0; i < 10; i++) {
        document.getElementById('results').innerText += a[i] + " ";
    }
}
//</snippet103>

//function button5_click()
//{
//    var obj = new JS-Array.Test();
//    document.getElementById('results').innerText = obj.getNumber(1);
//}

function button6_click() {
    var nativeObject = new JS-Array.Test();
    //  var num = nativeObject.GetInt(9);
    var num = nativeObject.getNum(9);
    // var num2 = nativeObject.getFloat(9.0);
    var num2 = nativeObject.getNum(9.75);

    document.getElementById('results').innerText = num + "-" + num2;
}



