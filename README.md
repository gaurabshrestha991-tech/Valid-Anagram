Valid Anagram in C++
Description

This program checks whether two strings are anagrams of each other.

Two strings are called anagrams if they contain the same characters with the same frequency, but the characters can be in a different order.

Features
Compares the lengths of both strings.
Uses a frequency array (vector<int>) to count characters.
Returns true if both strings are anagrams, otherwise returns false.

How It Works
Check if both strings have the same length.
Create an array of size 26 to store character frequencies.
Increase the count for each character in the first string.
Decrease the count for each character in the second string.
If every value in the frequency array is 0, the strings are anagrams. Otherwise, they are not.

## Example
Input
Enter First String: listen
Enter Second String: silent
Output
true

## Another Example
Input
Enter First String: hello
Enter Second String: world
Output
false
