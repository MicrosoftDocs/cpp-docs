function Add() {
    "use strict";

    var calculator = new Contoso.Calculator();

    var a = document.getElementById("a");
    var b = document.getElementById("b");

    document.getElementById("result").innerHTML = "Result: " + calculator.add(a.value, b.value);
}