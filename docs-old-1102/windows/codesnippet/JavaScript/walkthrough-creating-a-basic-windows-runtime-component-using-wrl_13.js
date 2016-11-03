function Add() {
    "use strict";

    var calculator = new Contoso.Calculator();
    calculator.onprimenumberfound = function (ev) {
        document.getElementById("primes").innerHTML += " " + ev.target;
    };

    var a = document.getElementById("a");
    var b = document.getElementById("b");

    document.getElementById("result").innerHTML = "Result: " + calculator.add(a.value, b.value);
}