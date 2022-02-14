/*

//Searching for a substring in String

let str = "Widget with id";

console.log(str.indexOf("Widget")); // 0, because 'Widget' is found at the beginning
console.log(str.indexOf("widget")); // -1, not found, the search is case-sensitive
console.log(str.indexOf("id")); // 1, "id" is found at the position 1 (..idget with id)
console.log(str.indexOf("id", 2)); // 12  The optional second parameter allows us to start searching from a given position.

//If we’re interested in all occurrences,
let str = "As sly as a fox, as strong as an ox";
let target = "as";

let pos = -1;
while ((pos = str.indexOf(target, pos + 1)) != -1) {
  alert(pos);
}
*/
//There is a slight inconvenience with indexOf in the if test. We can’t put it in the if like this:

let str = "Widget with id";

if (str.indexOf("Widget")) {
  console.log("We found it"); // doesn't work!
}

/*
Reason - The alert in the example above doesn’t show because str.indexOf("Widget") returns 0 .
(meaning that it found the match at the starting position).Right, but if considers 0 to be false.So, we should actually check for -1, 
 
like this:

let str = "Widget with id";
if (str.indexOf("Widget") != -1) {
    alert("We found it"); // works now!
}

 */

//Getting a substring
//There are 3 methods in JavaScript to get a substring: substring, substr and slice.

//1) str.slice(start [, end]) - Returns the part of the string from start to (but not including) end.

let str = "stringify";
console.log(str.slice(0, 5)); // 'strin', the substring from 0 to 5 (not including 5)
console.log(str.slice(0, 1)); // 's', from 0 to 1, but not including 1, so only character at 0

//2) str.substring(start [, end])  - Returns the part of the string between start and end.This is almost the same as slice, but it allows start to be greater than end.

let str = "stringify";

// these are same for substring
console.log(str.substring(2, 6)); // "ring"
console.log(str.substring(6, 2)); // "ring"

// ...but not for slice:
console.log(str.slice(2, 6)); // "ring" (the same)
console.log(str.slice(6, 2)); // "" (an empty string)

//3)str.substr(start [, length]) - Returns the part of the string from start, with the given length.In contrast with the previous methods, this one allows us to specify the length instead of the ending position:

let str = "stringify";
console.log(str.substr(2, 4)); // 'ring', from the 2nd position get 4 characters

let str = "stringify";
console.log(str.substr(-4, 2)); // 'gi', from the 4th position get 2 characters

//Array

let arr = ["I", "study", "JavaScript"];
arr.splice(1, 1); //  ["I", "JavaScript"] from index 1 remove 1 element

let arr = ["I", "study", "JavaScript", "right", "now"];
arr.splice(0, 3, "Let's", "dance"); // ["Let's", "dance", "right", "now"] remove 3 first elements and replace them with another

//Slice Method

let arr = ["t", "e", "s", "t"];

arr.slice(1, 3); // e,s (copy from 1 to 3)
arr.slice(-2); // s,t (copy from -2 till the end)

//forEach

["Bilbo", "Gandalf", "Nazgul"].forEach((item, index, array) => {
  alert(`${item} is at index ${index} in ${array}`);
});
