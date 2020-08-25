# Corse Notes On Dec. 11

<h2 id="IKW">Import Key Words</h2>

* Source file:
    <blockquote>
    file containing a program written in a high-level language: the input for a compiler
    </blockquote>

* Compiler:
    <blockquote>
    software that translates a high-level language program into machine language
    </blockquote>

* Machine language:
    <blockquote>
    binary number codes (1s and 0s)
    </blockquote>

* Syntax:
    <blockquote>
    grammar rules of a programming language
    </blockquote>

* Object file:
    <blockquote>
    file of machine language instructions that is the output of a compiler
    </blockquote>

* Linker:
    <blockquote>
    software that combines objects files and resolves cross-references to create an executable machine language program.
    </blockquote>

<h2 id="key">Keywords</h2>

<b>keywords:</b>
<blockquote>
Keywords are predefined reserved words used in programming that have special meaning to the compiler. Keywords are part of the syntax and they cannot be used as an identifier.
</blockquote>

<b>For example:</b>

<table width=500px>
    <tr>
        <th colspan=4 align="center">C Keywords</th>
    </tr>
    <tbody>
    <tr>
        <td>auto</td>
        <td>double</td>
        <td>int</td>
        <td>struct</td>
    </tr>
    <tr>
        <td>break</td>
        <td>else</td>
        <td>long</td>
        <td>switch</td>
    </tr>
    <tr>
        <td>case</td>
        <td>enum</td>
        <td>register</td>
        <td>typedef</td>
    </tr>
    <tr>
        <td>char</td>
        <td>extern</td>
        <td>return</td>
        <td>union</td>
    </tr>
    <tr>
        <td>continue</td>
        <td>for</td>
        <td>signed</td>
        <td>void</td>
    </tr>
    <tr>
        <td>do</td>
        <td>if</td>
        <td>static</td>
        <td>while</td>
    </tr>
    <tr>
        <td>default</td>
        <td>goto</td>
        <td>sizeof</td>
        <td>volatile</td>
    </tr>
    <tr>
        <td>const</td>
        <td>float</td>
        <td>short</td>
        <td>unsigned</td>
    </tr>
    </tbody>
</table>

<h2 id="I">Identifier</h2>

* Identifier refers to name given to entities such as variables, functions, structures etc.
* Identifiers must be unique. They are created to give a unique name to an entity to identify it during the execution of the program.
  * For example:
    * int money;
    * double accountBalance;

<h2 id="R">Rules For Naming Identifiers</h2>

* A valid identifier can have letters (both uppercase and lowercase letters), digits and underscores.
* The first letter of an identifier should be either a letter or an underscore.
* You cannot use keywords as identifiers.
* There is no rule on how long an identifier can be. However, you may run into problems in some compilers if the identifier is longer than 31 characters.
* You can choose any name as an identifier if you follow the above rule, however, give meaningful names to identifiers that make sense.

<h2 id="TFP">The First Program</h2>

* Every C program uses libraries, which give the ability to execute necessary functions. For example, studio.h is one of them.
* The first code which will run will always reside in the ***main*** function.

```c
//This is the library of C
#include<stdio.h>

//The main method of code which is the beginning of the program
int main() {
    //This is a function which can print the string
    printf("Goodbye, world!");

    //This tells the computer that this is the end of program
    return 0;
}
```