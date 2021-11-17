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

* **0. Print list**
  * [0-print_listint.c](./0-print_listint.c): C function that prints all the elements
    of a `listint_t` linked list.
        * Returns the number of nodes in the `listint_t` list.

* **1. List length**
  * [1-listint_len.c](./1-listint_len.c): C function that returns the number
    of elements in a `listint_t` linked list.

* **2. Add node**
  * [2-add_nodeint.c](./2-add_nodeint.c): C function that adds a new node at
    the beginning of a `listint_t` linked list.
        * If the function fails - returns `NULL`.
	    * Otherwise - returns the address of the new element.

* **3. Add node at the end**
  * [3-add_nodeint_end.c](./3-add_nodeint_end.c): C function that adds a new node
    at the end of a `listint_t` linked list.
        * If the function fails - returns `NULL`.
	    * Otherwise - returns the address of the new element.

* **4. Free list**
  * [4-free_listint.c](./4-free_listint.c): C function that frees a `listint_t`
    linked list.

* **5. Free**
  * [5-free_listint2.c](./5-free_listint2.c): C function that frees a
    `listint_t` linked list.
        * Sets the `head` to `NULL`.

* **6. Pop**
  * [6-pop_listint.c](./6-pop_listint.c): C function that deletes the head node of
    a `listint_t` linked list.
        * If the linked list is empty - returns `0`.
	    * Otherwise - returns the head node's data (`n`).

* **7. Get node at index**
  * [7-get_nodeint.c](./7-get_nodeint.c): C function that locates a given node
    of a `listint_t` linked list.
        * If the node does not exist - returns `NULL`.
	    * Otherwise - returns the located node.

* **8. Sum list**
  * [8-sum_listint.c](./8-sum_listint.c): C function that returns the sum of all
    the data (`n`) of a `listint_t` linked list.
        * If the linked list is empty - returns `0`.
	    * Otherwise - returns the sum of all the data (`n`).


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
