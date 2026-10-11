#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std; // VERY IMPORTANT

void returnUserName(string userName)
{
    cout << "the user is " << userName;
}

bool isOdd(int Value)
{
    // COMMON MISTAKE: NOT WRITING THE DATA TYPE OF INPUT & NOT RETURNING ANYTHING

    return (Value % 2 == 1);
}

int Squared(int Value)
{
    return (Value * Value);
}

string First3Letter(string userName)
{
    return userName.substr(0, 3);
}

// a variable is only globla if you declare like this
int globalCount = 67;

int main()
{

    // beginner introduction to cpp

    // concept 1: output
    // REMEMBER TO PUT ";" after every line/step
    // if you wanna change line, you can use "<< endl;"
    // you can connect multiple outputs using << symbol

    // cout << "1 + 2 = "  << 3 << endl;

    // concept 2: data types and variable
    // there are 4 data types:
    // 1. int - 整数
    // 2. double - 小数(有其他类型，but这里先用double)
    // 3. char - 一个字符
    // 4. string - 很多个字符
    // 5. bool - true or false

    // we declare a new variable by:
    // type variableName = value;

    // for example:
    int newVariable = 20;
    string newVariable2 = "hello123";

    // variable values can be changed like this:
    newVariable = 21;
    newVariable = 60 * 5;

    newVariable = newVariable + 1;
    newVariable += 1;

    newVariable2 = "no hello";

    // concept 3. input
    // BECAREFUL, its CIN >>, not <<
    // Before input, you'll need a variable
    int inputVal = 0;
    // cin >> inputVal;
    // cout << inputVal;

    // concept 4. comparisons and if else
    //  there are a few types of comparisons that could be made: == (TWO EQUAL SIGNS!), <,>,<=,>=,!=
    //  the result is usually in 1 (true) or 0 (false)
    int test = 67;

    // we can apply this concept using a if-else statement:
    if (test == 67)
    {
        // cout << "test is 67";
    }
    else if (test == 68)
    {
        // cout << "test is 68";
    }
    else if (test == 69)
    {
        // cout << "test is 68";
    }
    else if (test == 70)
    {
        // cout << "test is 68";
    }
    else
    {
        // cout << "test is not 67 or 68";
    }

    // concept 5. STRING: concatenate, access, length and substring
    string testString = "banana";

    // you can combine two strings using +
    // testString = testString + " yes";
    // cout << testString;

    // you can find the length of string using .length()
    // cout << testString.length();

    // you can get the nth character of string using string[n]
    // please note that n starts from 0 to (num of char - 1)
    // cout << testString[3];

    // if you wanna get a substring, you can use string.substr(starting, length of substring)
    // cout << testString.substr(2, 4);

    // concept 6：CHAR
    // ASCII is a character encoding standard that assigns numeric codes (0–127) to letters, digits, punctuation, and control characters for digital text.
    // CHAR(the ascii code) will give you the character corresponding to the code
    // cout << char(65);

    // or another way - INT(CHARACTER) will give you its ascii code
    // cout << int('A');

    // and yes, you can increment a char like how you do for int
    char incChar = 'A';
    // cout << ++incChar;

    // concept 7: FOR loop
    // for loop is used to repeat a statement for x times

    for (int i = 0; i < 20; i++)
    {
        // cout << i << endl;
    }

    // concept 8: while loop
    // while loop is used to repeat a statement until a condition is met
    int j = 0;
    while (j < 0)
    {
        j++;
    }

    // concept 8: you can group multiple items of same data type using array:
    // for example
    string cars[4];

    // you can assign each array items with value
    // PLEASE NOTE THAT ARRAYS START FROM 0
    cars[0] = "car";
    cars[1] = "carrr";
    cars[2] = "carrrrrr";

    // or you can just
    string car_in_another_way[] = {"car", "carrr", "carrrr", "carrrr"};
    // cout << cars[2];

    // for characters, you can add them into array like this:
    char charA[10] = {'B', 'e', 'i', 'J', 'i', 'n', 'g'};
    char charB[10] = "BeiJing";
    char charC[10] = {"BeiJing"};

    // VALUES OF ARRAY CAN BE CHANGED
    cars[0] = "carr";

    // you can get the length of array also using sizeof()
    // PLEASE NOTE THAT THE VALUE WILL BE IN BITS, SO YOU MUST DIVIDE BY sizeof(ONE ELEMENT)
    // cout << sizeof(cars)/sizeof(cars[0]);

    // EXTENSION: An Array could have multiple dimensions
    string letters[2][4];
    letters[0][1] = "hi";

    // concept 9: function & local-global variable
    // you use function when you need to repeat code multiple times
    // a function normally have an input and an output
    // (NOTE: input is optional)
    // we declare functions based on the returned data type: scroll to the top

    // cout << isOdd(22) << endl;

    // cout << Squared(22) << endl;

    // cout << First3Letter("testName") << endl;

    // theres an exception: void, where we does not return anything
    // returnUserName("theUser101");

    // variables declared in brackets - functions, for-loop, while-loop are all considered "local"
    // for example, error occurs when:
    for (int i = 0; i < 2; i++)
    {
        // cout << i;
    }

    // you can only get a "global variable" - which works in whole function, when you declare it on top:
    // cout << globalCount + 20;

    // concept 10: pointer
    // pointer is a data type that store memory address

    // the code below shows how you can get the memory address of a variable
    int storeVal = 10;
    int *Address = &storeVal;
    // cout << Address;

    // you can also get the value stored in the address by adding "*"
    // cout << *Address;

    // concept 11: vector
    // vector is like array, except its size is changable
    // remember to include <vector>
    vector<string> namelist;
    namelist.push_back("hi1");
    namelist.push_back("hi2");
    namelist.push_back("hi3");

    for (int i = 0; i <= 3; i++)
    {
        // cout << namelist[i] << "hi";
    }

    // concept 12: file manipulation
    // remember to put #include <fstream> on top
    // Open a file
    ofstream file("GFG.txt");

    // Write the string to the file
    file << "Welcome to GeeksforGeeks.";

    file.close();

    // Reading a file
    ifstream fileread("tutorial.txt");

    string fileline;
    while (!fileread.eof())
    {
        getline(fileread, fileline);
        cout << fileline << endl;
    }

    fileread.close();

    // Appending a file
    // open with ios::app

    file.open("GFG.txt", ios::app);
    file << endl
         << "新的一行" << endl;

    file.close();

    // Writing a binary file
    int binary_inp = 33;
    int binary_out;

    ofstream fout("data.bin", ios::binary);
    fout.write((char *)&binary_inp, sizeof(binary_inp));
    fout.close();

    // reading a binary file

    ifstream fin("data.bin", ios::binary);
    fin.read((char *)&binary_out, sizeof(binary_out));
    cout << binary_out;

    //

    return 0;
}