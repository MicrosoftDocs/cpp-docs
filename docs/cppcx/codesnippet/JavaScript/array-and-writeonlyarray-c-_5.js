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