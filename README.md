# Javascript_Notes
Javascript learning notes and problem solving skills while developing a social HTML5 game.
The notes mainly focused on difference with mainstream language like C++ JAVA and a few thoughts based on developing H5 game.

## Catalog

* [1. Scope](#1-scope)
* [2. Closure](#2-closure)
* [3. Bind & Apply](#3-bind-apply)
* [4. Functions in For Loop](#4-functions-in-for-loop)
* [5. Inheritance and the prototype chain](#5-inheritance-and-the-prototype-chain)
* [6. immediately-invoked function expression](#6-immediately-invoked-function-expression)




### <a name="1-scope"></a>1. Scope

- ***Block level scope***
Languages: C++, Java, C#

> A programming language has block scope if a variable declared inside some block of code enclosed by curly braces is only 
> visible within that block of code, and that variable is not visible outside of that particular block of code.

```C++
int main() {
    int a = 0;
    if (a == 0) {
        int b = 1;
    }
    cout << a << " " << b << endl; // What will print here?  
    // Output: error: use of undeclared identifier 'b'
}
```

- ***Function level scope***
Languages: Javascript

> Function scope means that any variables declared inside a function will be visible in the entire function in which they are defined, regardless of whether those variables are declared inside a while loop, for loop, if statement, or some other block of code within that function. 

```javascript
var jsScope = function () {
	var a = 0;
	if (a === 0) {
		var b = 1;
	}
	console.log(a,b,c);
	var c = 0;
}
jsScope(); // It will print "0 1 undefined"
```
> Even nested functions (which are basically functions declared within other functions) can access and view variables that are declared in their outer, enclosing, function(s).

```javascript
// even nested functions works
var jsScope = function () {
	var x = 1;
	function jsNestedScope () {
		console.log(x);
	}
	jsNestedScope();
}
jsScope(); // print "1"
```
Actually, I think nested function should be able to access the variable declared in their outer function, to this point, javascript is similar to other languages like C++, JAVA, C#

My thoughts: From the function level based scope, we can acquire its feature that the function defined before can access to the function defined later, if only they exists in a same function level. So we don't need to care too much the occurence sequence, but make sure the callee has been set up before you call it.
