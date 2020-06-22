#include <iostream>
#include"Stack.h"
using namespace std;


int  main()
{
    
    Stack<string> st;
    st.check("({x-y-z} * [x + 2y] - (z + 4x))");
    return 0;

}