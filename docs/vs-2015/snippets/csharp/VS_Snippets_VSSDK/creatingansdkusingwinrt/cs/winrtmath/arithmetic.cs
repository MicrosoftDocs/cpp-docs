//<snippet3>
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace WinRTMath
{
    public sealed class Arithmetic
    {
        public float add(float firstNumber, float secondNumber)
        {
            return (firstNumber + secondNumber);
        }

        public float subtract(float firstNumber, float secondNumber)
        {
            return (firstNumber - secondNumber);
        }

        public float multiply(float firstNumber, float secondNumber)
        {
            return (firstNumber * secondNumber);
        }

        public float divide(float firstNumber, float secondNumber)
        {
            return (firstNumber / secondNumber);
        }
    }
}
//</snippet3>