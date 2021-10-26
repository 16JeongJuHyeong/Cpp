#include "header.h"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    New_Class MyClass("JJH");
    New_Class YourClass(MyClass);
    New_Class HerClass = MyClass;
    New_Class HisClass("BBG");
    HisClass = MyClass;
    return 0;



    return 0;
}