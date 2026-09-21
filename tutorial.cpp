#include <iostream>
using namespace std; //VERY IMPORTANT

int main()
{

    //beginner introduction to cpp

    //concept 1: output
    //REMEMBER TO PUT ";" after every line/step
    //if you wanna change line, you can use "<< endl;"
    //you can connect multiple outputs using << symbol
    
    //cout << "hello world";

    //concept 2: data types and variable
    //there are 4 data types: 
    //1. int - 整数
    //2. double - 小数(有其他类型，but这里先用double)
    //3. char - 一个字符
    //4. string - 很多个字符
    //5. bool - true or false

    //we declare a new variable by:
    //type variableName = value;
    //for example:
    int newVariable = 20;
    string newVariable2 = "hello";

    //variable values can be changed like this:
    newVariable = 21;
    newVariable = 60 * 5;
    newVariable = newVariable + 1;
    newVariable2 = "no hello";

    //concept 3. input
    //BECAREFUL, its CIN >>, not <<
    //Before input, you'll need a variable
    int inputVal = 0;
    //cin >> inputVal;
    //cout << inputVal;

    //concept 4. comparisons and if else
    // there are a few types of comparisons that could be made: == (TWO EQUAL SIGNS!), <,>,<=,>=,!=
    // the result is usually in 1 (true) or 0 (false)
    int test = 68;
    //cout << (test == 68);

    // we can apply this concept using a if-else statement:
    if (test == 67){
        //cout << "test is 67";
    }else if(test == 68){
        //cout << "test is 68";
    }else{
        //cout << "test is not 67 or 68";
    }

    //concept 5. STRING: concatenate, access, length and substring
    string testString = "SunShengZhe5Nv1";

    //you can combine two strings using +
    testString = testString + " yes";
    
    //you can find the length of string using .length()
    //cout << testString.length();

    //you can get the nth character of string using string[n]
    //please note that n starts from 0 to (num of char - 1)
    //cout << testString[3];

    //if you wanna get a substring, you can use string.substr(starting, length of substring)
    //cout << testString.substr(1, 3);

    //concept 6: FOR loop
    //for loop is used to repeat a statement for x times

    for (int i = 0; i < 20; i++) {
        //cout << i << endl;
    }

    //concept 6: while loop
    //while loop is used to repeat a statement until a condition is met
    int j = 0;
    while(j < 0){
        j++;
    }

    //concept 7: you can group multiple items of same data type using array:
    //for example
    string cars[4];

    //you can assign each array items with value
    //PLEASE NOTE THAT ARRAYS START FROM 0
    cars[0] = "car";
    cars[1] = "carrr";
    cars[2] = "carrrrrr";

    //or you can just
    string car_in_another_way[] = {"car","carrr","carrrr","carrrr"};

    //cout << cars[2];

    //VALUES OF ARRAY CAN BE CHANGED
    cars[0] = "carr";

    //you can get the length of array also using sizeof()
    //PLEASE NOTE THAT THE VALUE WILL BE IN BITS, SO YOU MUST DIVIDE BY sizeof(ONE ELEMENT)
    //cout << sizeof(cars)/sizeof(cars[0]);

    //EXTENSION: An Array could have multiple dimensions
    string letters[2][4];
    letters[0][1] = "hi";

    return 0;
}
