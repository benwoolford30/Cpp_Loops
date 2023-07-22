#pragma-region ""

#include <iostream>
using namespace std;
#pragma-endregion
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
  
/*
    Welcome to lesson 5 loops!

    Loops are a way for the programmer to execute a piece of code numerous times without needing to
    retype the same line over and over.

    There are multiple types of loops you can use and within this tutorial we will focus on the 2 most commonly used.

    The first we'll use is the WHILE loop example syntax:

    while (condition==true)
    {
        //do code here
    }

    The while loop will continuously execute the code until the condition is no longer true.

    The next loop you'll commmonly use is the FOR loop. Example syntax:

    for (int i=0;i<=5;i++)
    {
        //do code here
    }

    The for loop is compromised of three pieces:

    1. the beginning statement (int i=0;) sets the beginning variable to a starting value

    2. The middle statement (i<=5;) is the condition- while its still true the for loop will repeat its code.

    3. The last statement (i++) is the iterator- when each loop is completed this statement is executed.

    With all this in mind look at this again:

    for (int i=0;i<=5;i++)
    {
        //do code here
    }

    So our variable i starts at 0 and checks if i is less than or equal to 5 which it is so it will execute the code.

    then after the code inside is executed we add 1 to i (0+1=1) which makes i now 1.

    The for loop checks if i is less than or equal to 5 which it still is so we go through the for loop again.

    When i reaches 6 the for loop will check that i is less than or equal to 5 which it is not- the for loop completes and the
    program continues on.
    */

int main()
{
    //while loop code

    cout<< "Beginning the while loop \n";

    int MyInt_While = 0;

    while (MyInt_While <= 5)
    {
        cout << "MyInt_While is : " << MyInt_While << "\n";
        MyInt_While += 1;
    }

    cout << "Finished the while loop \n";

    cout << "Beginning the for loop \n";

    int MyInt_For = 0;

    for (int i = 0; i <= 10; i++)
    {
        cout << "MyInt_For is : " << MyInt_For << "\n";
        MyInt_For += 1;
    }

    cout << "Finished the for loop \n";
}
     