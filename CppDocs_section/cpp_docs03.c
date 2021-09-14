C++ Modifier Types-:
	The C++ allows the char, int, and double data types to have modifiers preceding them. A modifier is used to alter the meaning of the base type so that it more
       	precisely fits the needs of various situations.The data type modifiers are listed here −
		1. signed
		2. unsigned
		3. long
		4. short
	The modifiers signed, unsigned, long, and short can be applied to integer base types. In addition, signed and unsigned can be applied to char, and long can be 
	applied to double. The modifiers signed and unsigned can also be used as prefix to long or short modifiers. For example, unsigned long int. C++ allows a shorthand 
	notation for declaring unsigned, short, or long integers. You can simply use the word unsigned, short, or long, without int. It automatically implies int.
       	For example, the following two statements both declare unsigned integer variables.

Type Qualifiers in C++-:
	The type qualifiers provide additional information about the variables they precede.
	1. const: Objects of type const cannot be changed by your program during execution.
	2. volatile: The modifier volatile tells the compiler that a variable's value may be changed in ways not explicitly specified by the program.
	3. restrict: A pointer qualified by restrict is initially the only means by which the object it points to can be accessed. Only C99 adds a new type qualifier called 
		    restrict.

