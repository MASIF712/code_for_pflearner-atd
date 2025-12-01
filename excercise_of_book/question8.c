// return nothing means data tyoe void
//  one double parameter as input requrement.
//  prototype have semicolon(;) not a body {...}
void f(double x); // a. valid protype with parameter x .
void f(double);   // b. valid prototype without parameter name. which is not compulsory.
void f(x);        // c.  in valid because without declare of x use as parameter which is worng
f(double x);      // d. invalid because of without write a retrun type of function,
                      //function cannot be declare as prototype.