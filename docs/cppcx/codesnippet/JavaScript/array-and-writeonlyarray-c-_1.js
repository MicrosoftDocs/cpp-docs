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
