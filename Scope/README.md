## Scope

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
    cout << a << " " << b << endl; //what will print here?  
}
```

Output: error: use of undeclared identifier 'b'

- ***Function level scope***
Languages: Javascript

> Function scope means that any variables declared inside a function will be visible in the entire function in which they are defined, regardless of whether those variables are declared inside a while loop, for loop, if statement, or some other block of code within that function. 

```javascript
var jsScope = function () {
	var a = 0;
	if (a === 0) {
		var b = 1;
	}
	console.log(a,b);
}
jsScope(); // It will print "0 1"
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

