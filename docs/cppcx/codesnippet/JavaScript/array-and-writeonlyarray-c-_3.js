//JavaScript
function button3_click() {
    var obj = new JS-Array.Class1();

    // Remember to use camelCase for the function name.
    var array2 = obj.calleeAllocatedDemo2();
    for (j = 0; j < array2.length; j++) {
        document.getElementById('results').innerText += array2[j] + " ";
    }
}
