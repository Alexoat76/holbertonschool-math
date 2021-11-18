![Brand](https://assets.website-files.com/6105315644a26f77912a1ada/610540e8b4cd6969794fe673_Holberton_School_logo-04-04.svg)

# 0x00. Math - Complex
<div style="text-align: justify">
In this project, you should to practice the use of Math - Complex in C. </div>
<div style="text-align: justify">
Don't forget to fully meet the following development requirements. </div>


# Getting Started :running:

## Requirements :page_with_curl:

### Resources

**Read or watch** :

[![M](https://upload.wikimedia.org/wikipedia/commons/thumb/2/2f/Google_2015_logo.svg/80px-Google_2015_logo.svg.png)](https://www.google.com/)

[![M](https://upload.wikimedia.org/wikipedia/commons/thumb/e/e1/Logo_of_YouTube_%282015-2017%29.svg/70px-Logo_of_YouTube_%282015-2017%29.svg.png)](https://www.youtube.com/watch?v=SP-YJe7Vldo)

[Modulus and Argument](https://www.youtube.com/watch?v=g5_ojBMubAg)

[Operations ](https://math.mit.edu/~stoopn/18.031/complexnumbers.pdf)(Only from page 1 to page 4)

[Absolute value & angle](https://www.khanacademy.org/math/precalculus/x9e81a4f98389efdf:complex/x9e81a4f98389efdf:complex-abs-angle/v/basic-complex-analysis)

[Conjugates](https://www.khanacademy.org/math/precalculus/x9e81a4f98389efdf:complex/x9e81a4f98389efdf:complex-div/v/complex-conjugates)

## General :page_with_curl:
<div style="text-align: justify">
* Allowed editors: vi, vim, emacs. </div>
<div style="text-align: justify">
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options: 
	
`-Wall -Werror -Wextra -pedantic -std=gnu89`. </div>
<div style="text-align: justify">
* All your files should end with a new line. </div>
<div style="text-align: justify">
	
*A `README.md` file, at the root of the folder of the project.</div>

<div style="text-align: justify">
* There should be no errors and no warnings during compilation. </div>

<div style="text-align: justify">
* Your code should use the Betty style. It will be checked using</div>

`betty-style.pl` and `betty-doc.pl`.</div>

Please visit the [Betty style](https://github.com/holbertonschool/Betty/wiki) for the full specifications of Betty coding and documentation styles.

<div style="text-align: justify">
	
*In the following examples,`the main.c files are shown as examples`. </div>

<div style="text-align: justify">
* You can use them to test your functions, but you don’t have to push them to
	<div style="text-align: justify">
		
   your repo ( *if you do we won’t take them into account* ).</div>
	
<div style="text-align: justify">
	
*Don’t forget to push your `header file`.</div>
<div style="text-align: justify">


## Header File :file_folder:

* [holberton.h](./holberton.h): Header file containing definitions and prototypes for all types
and functions written for the project.

| Type/File                  | Definition/Prototype                                                             |
| -------------------------- | -------------------------------------------------------------------------------- |
| `struct complex`           | <ul><li>`double re`</li><li>`double im`</li></ul>	                        |
| `typedef complex`          | `struct complex`                                                                 |
| `0-display.c`        	     | `void display_complex_number(complex c);`                                        |
| `1-conjugate.c`            | `complex conjugate(complex c);`                                        		|
| `2-modulus.c`              | `double modulus(complex c);`                                        		|
| `3-argument.c`             | `double argument(complex c);`                                        		|
| `4-addition.c`             | `void addition(complex c1, complex c2, complex *c3);`                            |
| `5-substraction.c`         | `void substraction(complex c1, complex c2, complex *c3);`                        |
| `6-multiplication.c`       | `void multiplication(complex c1, complex c2, complex *c3);`                      |	
| `7-division.c`       	     | `void division(complex c1, complex c2, complex *c3);`                      	|
| `8-complex.c`       	     | `void complex_from_mod_arg (double m, double arg, complex *c3);`                 |	
	
	
## Tasks :page_with_curl:

* **0. Structure Complex**
  * [0-display.c](./0-display.c): Build the structure `complex` where a complex number `a + ib` is represented by two doubles.
   	*Write a C function that `displays` the complex numbers.

* **1. Conjugate**
  * [1-conjugate.c](./1-conjugate.c): Write a `C function` that returns the `conjugate` of a given complex number.
    

* **2. Modulus**
  * [2-modulus.c](./2-modulus.c): Write a `C function` that returns the `modulus` of a given complex number.
    
	
* **3. Argument**
  * [3-argument.c](./3-argument.c): Write a `C function` that returns the `argument` of a given complex number.
    

* **4. Addition**
  * [4-addition.c](./4-addition.c): Write a `C function` that performs the `addition` operation to complex numbers.
    

* **5. Substraction**
  * [5-substraction.c](./5-substraction.c): Write a `C function` that performs the `substraction` operation to complex numbers.
   

* **6. Multiplication**
  * [6-multiplication.c](./6-multiplication.c): Write a `C function` that performs the `multiplication` operation to complex numbers.
   

* **7. Division**
  * [7-division.c](./7-division.c): Write a `C function` that performs the `division` operation to complex numbers.
  

* **8. Real and imaginary**
  * [8-complex.c](./8-complex.c): Write a `C function` that `update` the `real` and the `imaginary` parts of a complex number given its 
	modulus and arguments.



## Tests :heavy_check_mark:

* [tests](./tests): Folder of test files. Provided by Holberton School.
	

## Author(s):blue_book:

### **`Alex Orland Arévalo Tribaldos`**

<3915@holbertonschool.com>

@Alexoat76 [![M](https://upload.wikimedia.org/wikipedia/commons/thumb/9/91/Octicons-mark-github.svg/25px-Octicons-mark-github.svg.png)](https://github.com/Alexoat76)
@aoarevalot [![M](https://upload.wikimedia.org/wikipedia/fr/thumb/c/c8/Twitter_Bird.svg/25px-Twitter_Bird.svg.png)](https://twitter.com/aoarevalot)
Alexoat76 [![M](https://upload.wikimedia.org/wikipedia/commons/thumb/c/ca/LinkedIn_logo_initials.png/25px-LinkedIn_logo_initials.png)](https://www.linkedin.com/in/Alexoat76/)


## Acknowledgments :mega: 

### **`Holberton School`** (*providing guidance*)
	
![Brand](https://avatars.githubusercontent.com/u/13408012?s=50&v=4)
www.holbertonschool.com [![M](https://upload.wikimedia.org/wikipedia/commons/thumb/6/65/Crystal_Clear_app_Internet_Connection_Tools.svg/30px-Crystal_Clear_app_Internet_Connection_Tools.svg.png)](https://www.holbertonschool.com/)
	support@holbertonschool.com [![M](https://upload.wikimedia.org/wikipedia/commons/thumb/4/4e/Mail_%28iOS%29.svg/25px-Mail_%28iOS%29.svg.png)](https://github.com/holbertonschool#:~:text=support%40holbertonschool.com)
