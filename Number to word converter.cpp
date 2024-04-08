#include <string>
#include <iostream>
using namespace std;



string ones[] = { "",
"One",
"Two",
"Three",
"Four",
"Five",
"Six",
"Seven",
"Eight",
"Nine",
"Ten",
"Eleven",
"Twelve",
"Thirteen",
"Fourteen",
"Fifteen",
"Sixteen",
"Seventeen",
"Eighteen",
"Nineteen",
};
string tens[] = { "Twenty",
"Thirty",
"Forty",
"Fifty",
"Sixty",
"Seventy",
"Eighty",
"Ninety",
};
string hundred = "Hundred";

string intToWord(int num)
{
    if (num >= 100)
    {
        int first = num / 100;
        return ones[first] + " " + hundred + " " + intToWord(num - first * 100);
    }
    else if (num >= 20)
    {

        int leftDigit = num / 10;
        int rightDigit = num % 10;
        return tens[leftDigit - 2] + " " + ones[rightDigit];
    }
    else if (num >= 0)
    {
        return ones[num];
    }
    return "number too large or smaller than 1";
}
int main()
{
    int num;
    cout << "Enter a Number: ";
    cin >> num;

    cout << endl << intToWord(num) << endl;

    system("PAUSE");
    return 0;
}